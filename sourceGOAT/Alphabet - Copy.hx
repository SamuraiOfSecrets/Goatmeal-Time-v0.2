package;
 
import flixel.FlxG;
import flixel.FlxSprite;
import flixel.addons.text.FlxTypeText;
import flixel.graphics.frames.FlxAtlasFrames;
import flixel.group.FlxSpriteGroup;
import flixel.input.FlxKeyManager;
import flixel.text.FlxText;
import flixel.util.FlxColor;
import flixel.util.FlxTimer;
 
using StringTools;
 
class DialogueBox extends FlxSpriteGroup
{
    var box:FlxSprite;
    var daBg:FlxSprite;
 
    var curCharacter:String = '';
 
    var dialogue:Alphabet;
    var dialogueList:Array<String> = [];
    var whitelisted:Array<String> = [];
 
    // SECOND DIALOGUE FOR THE PIXEL SHIT INSTEAD???
    var swagDialogue:FlxTypeText;
 
    var dropText:FlxText;
 
    public var finishThing:Void->Void;
    public var isFade:Bool = false;
    public var paused:Bool = false;
 
    var portraitLeft:FlxSprite;
    var portraitRight:FlxSprite;
    var portraitGF:FlxSprite;
 
    var handSelect:FlxSprite;
    var bgFade:FlxSprite;
 
    public function new(talkingRight:Bool = true, ?dialogueList:Array<String>)
    {
        super();
 
        switch (PlayState.SONG.song.toLowerCase())
        {
            case 'senpai':
                FlxG.sound.playMusic(Paths.music('Lunchbox'), 0);
                FlxG.sound.music.fadeIn(1, 0, 0.8);
            case 'thorns':
                FlxG.sound.playMusic(Paths.music('LunchboxScary'), 0);
                FlxG.sound.music.fadeIn(1, 0, 0.8);
        }
 
        bgFade = new FlxSprite(-200, -200).makeGraphic(Std.int(FlxG.width * 1.3), Std.int(FlxG.height * 1.3), 0xFFB3DFd8);
        bgFade.scrollFactor.set();
        bgFade.alpha = 0;
        add(bgFade);
 
        new FlxTimer().start(0.83, function(tmr:FlxTimer)
        {
            bgFade.alpha += (1 / 5) * 0.7;
            if (bgFade.alpha > 0.7)
                bgFade.alpha = 0.7;
        }, 5);
 
        box = new FlxSprite(-20, 45);
        
        var hasDialog = false;
        switch (PlayState.SONG.song.toLowerCase())
        {
            case 'senpai':
                hasDialog = true;
                box.frames = Paths.getSparrowAtlas('weeb/pixelUI/dialogueBox-pixel');
                box.animation.addByPrefix('normalOpen', 'Text Box Appear', 24, false);
                box.animation.addByIndices('normal', 'Text Box Appear', [4], "", 24);
            case 'roses':
                hasDialog = true;
                FlxG.sound.play(Paths.sound('ANGRY_TEXT_BOX'));
 
                box.frames = Paths.getSparrowAtlas('weeb/pixelUI/dialogueBox-senpaiMad');
                box.animation.addByPrefix('normalOpen', 'SENPAI ANGRY IMPACT SPEECH', 24, false);
                box.animation.addByIndices('normal', 'SENPAI ANGRY IMPACT SPEECH', [4], "", 24);
 
            case 'thorns':
                hasDialog = true;
                box.frames = Paths.getSparrowAtlas('weeb/pixelUI/dialogueBox-evil');
                box.animation.addByPrefix('normalOpen', 'Spirit Textbox spawn', 24, false);
                box.animation.addByIndices('normal', 'Spirit Textbox spawn', [11], "", 24);
 
                var face:FlxSprite = new FlxSprite(320, 170).loadGraphic(Paths.image('weeb/spiritFaceForward'));
                face.setGraphicSize(Std.int(face.width * 6));
                add(face);
                
            default:
                hasDialog = true;
                box.loadGraphic(Paths.image('resources/txtbox'),true,1280,720);
                box.animation.add('normalOpen', [0], 0);
                box.animation.add('normal', [0], 0);
                box.setPosition();
 
        }
 
        this.dialogueList = dialogueList;
        
        if (!hasDialog)
            return;
        
        daBg = new FlxSprite().makeGraphic(FlxG.width, FlxG.height, FlxColor.BLACK);
        daBg.antialiasing = true;
        add(daBg);
        daBg.visible = false;
 
        portraitLeft = new FlxSprite(-20, 40);
        portraitLeft.frames = Paths.getSparrowAtlas('resources/dadport');
        portraitLeft.animation.addByPrefix('enter', 'bfport', 24, false);
        portraitLeft.updateHitbox();
        portraitLeft.scrollFactor.set();
        portraitLeft.setPosition(-855.5,  160.95);
        portraitLeft.visible = false;
 
        portraitRight = new FlxSprite(0, 40);
        portraitRight.frames = Paths.getSparrowAtlas('resources/bfport');
        portraitRight.animation.addByPrefix('enter', 'bfport', 24, false);
        portraitRight.updateHitbox();
        portraitRight.scrollFactor.set();
        portraitRight.setPosition(854.4, 160.95);
        portraitRight.visible = false;
 
        portraitGF = new FlxSprite(0, 40);
        portraitGF.frames = Paths.getSparrowAtlas('resources/gfport');
        portraitGF.animation.addByPrefix('enter', 'gf port idle', 24, false);
        portraitGF.updateHitbox();
        portraitGF.scrollFactor.set();
        portraitGF.setPosition(854.4, 160.95);
        portraitGF.visible = false;
        
        box.animation.play('normalOpen');
        if(PlayState.curStage != 'stage')box.setGraphicSize(Std.int(box.width * PlayState.daPixelZoom * 0.9));
        box.updateHitbox();
        add(box);
 
        add(portraitRight);
        add(portraitLeft);
        add(portraitGF);
 
        box.screenCenter(X);
        portraitLeft.screenCenter(X);
 
        handSelect = new FlxSprite(FlxG.width * 0.9, FlxG.height * 0.9).loadGraphic(Paths.image('weeb/pixelUI/hand_textbox'));
        add(handSelect);
 
 
        if (!talkingRight)
        {
            // box.flipX = true;
        }
 
        dropText = new FlxText(242, 502, Std.int(FlxG.width * 0.6), "", 32);
        dropText.font = 'Pixel Arial 11 Bold';
        dropText.color = 0xFFD89494;
        add(dropText);
 
        swagDialogue = new FlxTypeText(240, 500, Std.int(FlxG.width * 0.6), "", 32);
        swagDialogue.font = 'Pixel Arial 11 Bold';
        swagDialogue.color = 0xFF3F2021;
        swagDialogue.sounds = [FlxG.sound.load(Paths.sound('pixelText'), 0.6)];
        add(swagDialogue);
 
        dialogue = new Alphabet(0, 80, "", false, true);
        // dialogue.x = 90;
        // add(dialogue);
    }
 
    var dialogueOpened:Bool = false;
    var dialogueStarted:Bool = false;
 
    override function update(elapsed:Float)
    {
        // HARD CODING CUZ IM STUPDI
        if (PlayState.SONG.song.toLowerCase() == 'roses')
            portraitLeft.visible = false;
        if (PlayState.SONG.song.toLowerCase() == 'thorns')
        {
            portraitLeft.color = FlxColor.BLACK;
            swagDialogue.color = FlxColor.WHITE;
            dropText.color = FlxColor.BLACK;
        }
 
        dropText.text = swagDialogue.text;
 
        if (box.animation.curAnim != null)
        {
            if (box.animation.curAnim.name == 'normalOpen' && box.animation.curAnim.finished)
            {
                box.animation.play('normal');
                dialogueOpened = true;
            }
        }
 
        if (dialogueOpened && !dialogueStarted)
        {
            startDialogue();
            dialogueStarted = true;
        }
 
        whitelisted = ['bg'];
 
        if (!paused && !isFade && !whitelisted.contains(curCharacter)) {
            box.alpha = 1;
            swagDialogue.alpha = 1;
        } else {
            box.alpha = 0;
            swagDialogue.alpha = 0;
        }
 
        if ((FlxG.keys.justPressed.ANY) || (dialogueList.length > 0 && whitelisted.contains(curCharacter)) && dialogueStarted == true && !paused && !isFade)
        {
            remove(dialogue);
                
            FlxG.sound.play(Paths.sound('clickText'), 0.8);
 
            if (!paused && !isFade)
            {
 
                switch(curCharacter)
                {
                    case 'bg':
                    daBg.loadGraphic(Paths.image(dialogueList[0]));
                    daBg.visible = true;
                }
 
                if (whitelisted.contains(curCharacter))
                {
                    box.alpha = 0;
                    swagDialogue.alpha = 0;
                }
 
                remove(dialogue);
 
            }
 
            if (dialogueList[1] == null && dialogueList[0] != null)
            {
                if (!isEnding)
                {
                    isEnding = true;
 
                    if (PlayState.SONG.song.toLowerCase() == 'senpai' || PlayState.SONG.song.toLowerCase() == 'thorns')
                        FlxG.sound.music.fadeOut(2.2, 0);
 
                    new FlxTimer().start(0.2, function(tmr:FlxTimer)
                    {
                        box.alpha -= 1 / 5;
                        bgFade.alpha -= 1 / 5 * 0.7;
                        portraitLeft.visible = false;
                        portraitRight.visible = false;
                        portraitGF.visible = false;
                        daBg.alpha -= 1 / 5;
                        swagDialogue.alpha -= 1 / 5;
                        dropText.alpha = swagDialogue.alpha;
                    }, 5);
 
                    new FlxTimer().start(1.2, function(tmr:FlxTimer)
                    {
                        finishThing();
                        kill();
                    });
                }
            }
            else
            {
                dialogueList.remove(dialogueList[0]);
                startDialogue();
            }
        }
        
        super.update(elapsed);
    }
 
    var isEnding:Bool = false;
 
    function hidePortraits():Void
        {
            portraitLeft.visible = false;
            portraitRight.visible = false;
            portraitGF.visible = false;
 
            swagDialogue.visible = true;
            dropText.visible = true;
        }
 
    function startDialogue():Void
    {
        cleanDialog();
        // var theDialog:Alphabet = new Alphabet(0, 70, dialogueList[0], false, true);
        // dialogue = theDialog;
        // add(theDialog);
 
        // swagDialogue.text = ;
        swagDialogue.resetText(dialogueList[0]);
        swagDialogue.start(0.04, true);
 
        switch (curCharacter)
        {
            case 'dad':
                hidePortraits();
                if (!portraitLeft.visible)
                {
                    portraitLeft.visible = true;
                    portraitLeft.animation.play('enter');
                }
            case 'bf':
                hidePortraits();
                if (!portraitRight.visible)
                {
                    portraitRight.visible = true;
                    portraitRight.animation.play('enter');
                }
            case 'gf':
                hidePortraits();
                if (!portraitGF.visible)
                {
                    portraitGF.visible = true;
                    portraitGF.animation.play('enter');
                }
        }
    }
 
    function cleanDialog():Void
    {
        var splitName:Array<String> = dialogueList[0].split(":");
        curCharacter = splitName[1];
        dialogueList[0] = dialogueList[0].substr(splitName[1].length + 2).trim();
    }
}
