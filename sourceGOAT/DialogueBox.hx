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

	var curCharacter:String = '';

	var dialogue:Alphabet;
	var dialogueList:Array<String> = [];

	// SECOND DIALOGUE FOR THE PIXEL SHIT INSTEAD???
	var swagDialogue:FlxTypeText;

	var dropText:FlxText;

	public var finishThing:Void->Void;

	var portraitLeft:FlxSprite;
	var portraitRight:FlxSprite;

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

			case 'heartbass':
				hasDialog = true;
				box.frames = Paths.getSparrowAtlas('weeb/speech_bubble_talking');
				box.animation.addByPrefix('normalOpen', 'Speech Bubble Normal Open', 24, false);
				box.animation.addByIndices('normal', 'speech bubble normal', [4], "", 24);
				box.x = 50;
				box.y = 375;

			case 'endless':
				hasDialog = true;
				box.frames = Paths.getSparrowAtlas('weeb/speech_bubble_talking');
				box.animation.addByPrefix('normalOpen', 'Speech Bubble Normal Open', 24, false);
				box.animation.addByIndices('normal', 'speech bubble normal', [4], "", 24);
				box.x = 50;
				box.y = 375;

			case 'expurgation':
				hasDialog = true;
				box.frames = Paths.getSparrowAtlas('weeb/speech_bubble_talking');
				box.animation.addByPrefix('normalOpen', 'Speech Bubble Normal Open', 24, false);
				box.animation.addByIndices('normal', 'speech bubble normal', [4], "", 24);
				box.x = 50;
				box.y = 375;
		}

		this.dialogueList = dialogueList;
		
		if (!hasDialog)
			return;
		if (PlayState.SONG.song.toLowerCase()=='senpai' || PlayState.SONG.song.toLowerCase()=='roses' || PlayState.SONG.song.toLowerCase()=='thorns')
		{
		portraitLeft = new FlxSprite(-20, 40);
		portraitLeft.frames = Paths.getSparrowAtlas('weeb/senpaiPortrait');
		portraitLeft.animation.addByPrefix('enter', 'Senpai Portrait Enter', 24, false);
		portraitLeft.setGraphicSize(Std.int(portraitLeft.width * PlayState.daPixelZoom * 0.9));
		portraitLeft.updateHitbox();
		portraitLeft.scrollFactor.set();
		add(portraitLeft);
		portraitLeft.visible = false;
		}

		if (PlayState.SONG.song.toLowerCase()=='senpai' || PlayState.SONG.song.toLowerCase()=='roses' || PlayState.SONG.song.toLowerCase()=='thorns')
		{
		portraitRight = new FlxSprite(0, 40);
		portraitRight.frames = Paths.getSparrowAtlas('weeb/bfPortrait');
		portraitRight.animation.addByPrefix('enter', 'Boyfriend portrait enter', 24, false);
		portraitRight.setGraphicSize(Std.int(portraitRight.width * PlayState.daPixelZoom * 0.9));
		portraitRight.updateHitbox();
		portraitRight.scrollFactor.set();
		add(portraitRight);
		portraitRight.visible = false;
		}

		if (PlayState.SONG.song.toLowerCase()=='heartbass' || PlayState.SONG.song.toLowerCase()=='endless' || PlayState.SONG.song.toLowerCase()=='expurgation')
		{
				portraitLeft = new FlxSprite(160, 120);
				portraitLeft.frames = Paths.getSparrowAtlas('weeb/sam');
				portraitLeft.animation.addByPrefix('enter', 'sam', 24, false);
				portraitLeft.setGraphicSize(Std.int(portraitLeft.width * PlayState.daPixelZoom * 0));
				portraitLeft.updateHitbox();
				portraitLeft.scrollFactor.set();
				add(portraitLeft);
				portraitLeft.visible = false;
		}

		if (PlayState.SONG.song.toLowerCase()=='heartbass' || PlayState.SONG.song.toLowerCase()=='endless' || PlayState.SONG.song.toLowerCase()=='expurgation')
		{
				portraitRight = new FlxSprite(870, 200);
				portraitRight.frames = Paths.getSparrowAtlas('weeb/jer');
				portraitRight.animation.addByPrefix('enter', 'jer', 24, false);
				portraitLeft.setGraphicSize(Std.int(portraitLeft.width * PlayState.daPixelZoom * 0.2));
				portraitRight.updateHitbox();
				portraitRight.scrollFactor.set();
				add(portraitRight);
				portraitRight.visible = false;
		}

		if (PlayState.SONG.song.toLowerCase()=='heartbass' || PlayState.SONG.song.toLowerCase()=='endless' || PlayState.SONG.song.toLowerCase()=='expurgation')
		{
				portraitRight = new FlxSprite(870, 200);
				portraitRight.frames = Paths.getSparrowAtlas('weeb/jermad');
				portraitRight.animation.addByPrefix('enter', 'jermad', 24, false);
				portraitLeft.setGraphicSize(Std.int(portraitLeft.width * PlayState.daPixelZoom * 0.2));
				portraitRight.updateHitbox();
				portraitRight.scrollFactor.set();
				add(portraitRight);
				portraitRight.visible = false;
		}

				if (PlayState.SONG.song.toLowerCase()=='heartbass' || PlayState.SONG.song.toLowerCase()=='endless' || PlayState.SONG.song.toLowerCase()=='expurgation')
		{
				portraitRight = new FlxSprite(870, 200);
				portraitRight.frames = Paths.getSparrowAtlas('weeb/jer');
				portraitRight.animation.addByPrefix('enter', 'jeroops', 24, false);
				portraitLeft.setGraphicSize(Std.int(portraitLeft.width * PlayState.daPixelZoom * 0.2));
				portraitRight.updateHitbox();
				portraitRight.scrollFactor.set();
				add(portraitRight);
				portraitRight.visible = false;
		}

		if (PlayState.SONG.song.toLowerCase()=='heartbass' || PlayState.SONG.song.toLowerCase()=='endless' || PlayState.SONG.song.toLowerCase()=='expurgation')
		{
				portraitLeft = new FlxSprite(160, 520);
				portraitLeft.frames = Paths.getSparrowAtlas('weeb/goat');
				portraitLeft.animation.addByPrefix('enter', 'goat', 24, false);
				portraitLeft.setGraphicSize(Std.int(portraitLeft.width * PlayState.daPixelZoom * 0));
				portraitLeft.updateHitbox();
				portraitLeft.scrollFactor.set();
				add(portraitLeft);
				portraitLeft.visible = false;
		}

		if (PlayState.SONG.song.toLowerCase()=='heartbass' || PlayState.SONG.song.toLowerCase()=='endless' || PlayState.SONG.song.toLowerCase()=='expurgation')
		{
				portraitLeft = new FlxSprite(160, 520);
				portraitLeft.frames = Paths.getSparrowAtlas('weeb/goatsmirk');
				portraitLeft.animation.addByPrefix('enter', 'goatsmirk', 24, false);
				portraitLeft.setGraphicSize(Std.int(portraitLeft.width * PlayState.daPixelZoom * 0));
				portraitLeft.updateHitbox();
				portraitLeft.scrollFactor.set();
				add(portraitLeft);
				portraitLeft.visible = false;
		}

		if (PlayState.SONG.song.toLowerCase()=='heartbass' || PlayState.SONG.song.toLowerCase()=='endless' || PlayState.SONG.song.toLowerCase()=='expurgation')
		{
				portraitLeft = new FlxSprite(160, 520);
				portraitLeft.frames = Paths.getSparrowAtlas('weeb/goatmad');
				portraitLeft.animation.addByPrefix('enter', 'goatmad', 24, false);
				portraitLeft.setGraphicSize(Std.int(portraitLeft.width * PlayState.daPixelZoom * 0));
				portraitLeft.updateHitbox();
				portraitLeft.scrollFactor.set();
				add(portraitLeft);
				portraitLeft.visible = false;
		}

		if (PlayState.SONG.song.toLowerCase()=='heartbass' || PlayState.SONG.song.toLowerCase()=='endless' || PlayState.SONG.song.toLowerCase()=='expurgation')
			{
				portraitLeft = new FlxSprite(160, 120);
				portraitLeft.frames = Paths.getSparrowAtlas('weeb/samsurprised');
				portraitLeft.animation.addByPrefix('enter', 'samsurprised', 24, false);
				portraitLeft.setGraphicSize(Std.int(portraitLeft.width * PlayState.daPixelZoom * 0));
				portraitLeft.updateHitbox();
				portraitLeft.scrollFactor.set();
				add(portraitLeft);
				portraitLeft.visible = false;
		}

		box.animation.play('normalOpen');
		if(PlayState.curStage != 'bungerTime')
		{
			box.setGraphicSize(Std.int(box.width * PlayState.daPixelZoom * 0.9));
		}
		box.updateHitbox();
		add(box);

		handSelect = new FlxSprite(FlxG.width * 0.9, FlxG.height * 0.9).loadGraphic(Paths.image('weeb/pixelUI/hand_textbox'));
		add(handSelect);


		/*if (portraitRight.visible = true)
		{
			box.flipX = true;
		}
		else if (portraitLeft.visible = true)
		{
			box.flipX = false;
		}*/

		dropText = new FlxText(242, 502, Std.int(FlxG.width * 0.6), "", 48);
		dropText.font = 'Jazmin';
		dropText.color = 0xFFFFFFFF;
		add(dropText);

		swagDialogue = new FlxTypeText(240, 500, Std.int(FlxG.width * 0.6), "", 48);
		swagDialogue.font = 'Jazmin';
		swagDialogue.color = 0xFF000000;
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

		if (FlxG.keys.justPressed.ANY  && dialogueStarted == true)
		{
			remove(dialogue);
				
			FlxG.sound.play(Paths.sound('clickText'), 0.8);

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
				portraitRight.visible = false;
				if (!portraitLeft.visible)
				{
					portraitLeft.visible = true;
					portraitLeft.animation.play('enter');
				}
			case 'bf':
				portraitLeft.visible = false;
				if (!portraitRight.visible)
				{
					portraitRight.visible = true;
					portraitRight.animation.play('enter');
				}

			case 'goat':
				portraitRight.visible = false;
				portraitLeft.frames = Paths.getSparrowAtlas('weeb/goat');
				if (!portraitLeft.visible)
				{
					portraitLeft.visible = true;
					portraitLeft.animation.play('enter');
				}

			case 'goatmad':
				portraitRight.visible = false;
				portraitLeft.frames = Paths.getSparrowAtlas('weeb/goatmad');
				if (!portraitLeft.visible)
				{
					portraitLeft.visible = true;
					portraitLeft.animation.play('enter');
				}

			case 'goatsmirk':
				portraitRight.visible = false;
				portraitLeft.frames = Paths.getSparrowAtlas('weeb/goatsmirk');
				if (!portraitLeft.visible)
				{
					portraitLeft.visible = true;
					portraitLeft.animation.play('enter');
				}

			case 'sam':
				portraitRight.visible = false;
				portraitLeft.frames = Paths.getSparrowAtlas('weeb/sam');
				if (!portraitLeft.visible)
				{
					portraitLeft.visible = true;
					portraitLeft.animation.play('enter');
				}

			case 'jer':
				portraitLeft.visible = false;
				portraitRight.frames = Paths.getSparrowAtlas('weeb/jer');
				if (!portraitRight.visible)
				{
					portraitRight.visible = true;
					portraitRight.animation.play('enter');
				}

			case 'jermad':
				portraitLeft.visible = false;
				portraitRight.frames = Paths.getSparrowAtlas('weeb/jermad');
				if (!portraitRight.visible)
				{
					portraitRight.visible = true;
					portraitRight.animation.play('enter');
				}

			case 'jeroops':
				portraitLeft.visible = false;
				portraitRight.frames = Paths.getSparrowAtlas('weeb/jeroops');
				if (!portraitRight.visible)
				{
					portraitRight.visible = true;
					portraitRight.animation.play('enter');
				}

			case 'samsurprised':
				portraitRight.visible = false;
				portraitLeft.frames = Paths.getSparrowAtlas('weeb/samsurprised');
				if (!portraitLeft.visible)
				{
					portraitLeft.visible = true;
					portraitLeft.animation.play('enter');
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

/*
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

	var curCharacter:String = '';

	var dialogue:Alphabet;
	var dialogueList:Array<String> = [];

	// SECOND DIALOGUE FOR THE PIXEL SHIT INSTEAD???
	var swagDialogue:FlxTypeText;

	var dropText:FlxText;

	public var finishThing:Void->Void;

	var portraitLeft:FlxSprite;
	var portraitRight:FlxSprite;
	var portraitMiddle:FlxSprite;

	var handSelect:FlxSprite;
	var bgFade:FlxSprite;

	public function new(talkingRight:Bool = true, ?dialogueList:Array<String>)
	{
		super();

		switch (PlayState.SONG.song.toLowerCase())
		{
			case 'thorns':
				FlxG.sound.playMusic(Paths.music('LunchboxScary'), 0);
				FlxG.sound.music.fadeIn(1, 0, 0.8);
		}

		bgFade = new FlxSprite(-200, -200).makeGraphic(Std.int(FlxG.width * 1.3), Std.int(FlxG.height * 1.3), 0xFFB3DFd8);
		bgFade.scrollFactor.set();
		bgFade.alpha = 0;
		add(bgFade);

		new FlxTimer().start(0.2, function(tmr:FlxTimer)
		{
					bgFade.alpha = .5;
					bgFade.alpha += (.05);
					if (bgFade.alpha > 0.7)
					bgFade.alpha = 0.7;
		}, 5);

		box = new FlxSprite(0, 0);
		
		var hasDialog = false;
		switch (PlayState.SONG.song.toLowerCase())
		{
			case 'heartbass':
				hasDialog = true;
				box.frames = Paths.getSparrowAtlas('weeb/speech_bubble_talking');
				box.animation.addByPrefix('normalOpen', 'Speech Bubble Normal Open', 24, false);
				box.animation.addByIndices('normal', 'speech bubble normal', [4], "", 24);
			case 'endless':
				hasDialog = true;
				box.frames = Paths.getSparrowAtlas('weeb/speech_bubble_talking');
				box.animation.addByPrefix('normalOpen', 'Speech Bubble Normal Open', 24, false);
				box.animation.addByIndices('normal', 'speech bubble normal', [4], "", 24);
			case 'expurgation':
				hasDialog = true;
				box.frames = Paths.getSparrowAtlas('weeb/speech_bubble_talking');
				box.animation.addByPrefix('normalOpen', 'Speech Bubble Normal Open', 24, false);
				box.animation.addByIndices('normal', 'speech bubble normal', [4], "", 24);
			case 'thorns':
				hasDialog = true;
				box.frames = Paths.getSparrowAtlas('weeb/pixelUI/dialogueBox-evil');
				box.animation.addByPrefix('normalOpen', 'Spirit Textbox spawn', 24, false);
				box.animation.addByIndices('normal', 'Spirit Textbox spawn', [11], "", 24);

				var face:FlxSprite = new FlxSprite(320, 170).loadGraphic(Paths.image('weeb/spiritFaceForward'));
				face.setGraphicSize(Std.int(face.width * 6));
				add(face);
		}

		this.dialogueList = dialogueList;
		
		if (!hasDialog)
			return;
		
		portraitLeft = new FlxSprite(0, 160);
		portraitLeft.frames = Paths.getSparrowAtlas('weeb/goat');
		portraitLeft.animation.addByPrefix('enter', 'goat', 24, false);
		portraitLeft.setGraphicSize(Std.int(portraitLeft.width * 1));
		portraitLeft.updateHitbox();
		portraitLeft.scrollFactor.set();
		add(portraitLeft);
		portraitLeft.visible = false;

		portraitRight = new FlxSprite(700, 145);
		portraitRight.frames = Paths.getSparrowAtlas('weeb/jer');
		portraitRight.animation.addByPrefix('enter', 'jer', 24, false);
		portraitRight.setGraphicSize(Std.int(portraitRight.width * 1));
		portraitRight.updateHitbox();
		portraitRight.scrollFactor.set();
		add(portraitRight);
		portraitRight.visible = false;
		
		portraitLeft = new FlxSprite(350, 90);
		portraitLeft.frames = Paths.getSparrowAtlas('weeb/sam');
		portraitLeft.animation.addByPrefix('enter', 'sam', 24, false);
		portraitLeft.setGraphicSize(Std.int(portraitRight.width * 1));
		portraitLeft.updateHitbox();
		portraitLeft.scrollFactor.set();
		add(portraitLeft);
		portraitLeft.visible = false;

		box.animation.play('normalOpen');
		box.setGraphicSize(Std.int(box.width * 1));
		box.updateHitbox();
		add(box);

		box.screenCenter(X);

		handSelect = new FlxSprite(FlxG.width * 0.9, FlxG.height * 0.9).loadGraphic(Paths.image('weeb/pixelUI/hand_textbox'));
		add(handSelect);


		if (!talkingRight)
		{
			// box.flipX = true;
		}

		dropText = new FlxText(185, 500, Std.int(FlxG.width * 1), "", 48);
		dropText.font = 'Delfino';
		dropText.color = 0x00000000;
		add(dropText);

		swagDialogue = new FlxTypeText(182, 497, Std.int(FlxG.width * 1), "", 48);
		swagDialogue.font = 'Delfino';
		swagDialogue.color = 0xFFFFFFFF;
		swagDialogue.sounds = [FlxG.sound.load(Paths.sound('pixelText'), 0.6)];
		add(swagDialogue);

		dialogue = new Alphabet(0, 20, "", false, true);
		// dialogue.x = 90;
		// add(dialogue);
	}

	var dialogueOpened:Bool = false;
	var dialogueStarted:Bool = false;

	override function update(elapsed:Float)
	{
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

		if (FlxG.keys.justPressed.ANY  && dialogueStarted == true)
		{
			remove(dialogue);
				
			FlxG.sound.play(Paths.sound('clickText'), 0.8);

			if (dialogueList[1] == null && dialogueList[0] != null)
			{
				if (!isEnding)
				{
					isEnding = true;

					if (PlayState.SONG.song.toLowerCase() == 'senpai' || PlayState.SONG.song.toLowerCase() == 'thorns')
						FlxG.sound.music.fadeOut(2.2, 0);

					new FlxTimer().start(0.1, function(tmr:FlxTimer)
					{
						box.alpha -= 1 / 10;
						bgFade.alpha -= 1 / 10 * 0.7;
						portraitLeft.visible = false;
						portraitRight.visible = false;
						portraitMiddle.visible = false;
						swagDialogue.alpha -= 1 / 10;
						dropText.alpha = swagDialogue.alpha;
					}, 5);

					new FlxTimer().start(.5, function(tmr:FlxTimer)
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
			case 'goat':
				portraitRight.visible = false;
				portraitMiddle.visible = false;
				portraitLeft.frames = Paths.getSparrowAtlas('weeb/goat');
				if (!portraitLeft.visible)
				{
					portraitLeft.visible = true;
					portraitLeft.animation.play('enter');
				}
			case 'goatmad':
				portraitRight.visible = false;
				portraitMiddle.visible = false;
				portraitLeft.frames = Paths.getSparrowAtlas('weeb/goatmad');
				if (!portraitLeft.visible)
				{
					portraitLeft.visible = true;
					portraitLeft.animation.play('enter');
				}
			case 'goatsmirk':
				portraitRight.visible = false;
				portraitMiddle.visible = false;
				portraitLeft.frames = Paths.getSparrowAtlas('weeb/goatsmirk');
				if (!portraitLeft.visible)
				{
					portraitLeft.visible = true;
					portraitLeft.animation.play('enter');
				}
			case 'sam':
				portraitRight.visible = false;
				portraitMiddle.visible = false;
				portraitLeft.frames = Paths.getSparrowAtlas('weeb/sam');
				if (!portraitLeft.visible)
				{
					portraitLeft.visible = true;
					portraitLeft.animation.play('enter');
				}
			case 'samsurprised':
				portraitRight.visible = false;
				portraitMiddle.visible = false;
				portraitLeft.frames = Paths.getSparrowAtlas('weeb/samsurprised');
				if (!portraitLeft.visible)
				{
					portraitLeft.visible = true;
					portraitLeft.animation.play('enter');
				}
			case 'jer':
				portraitLeft.visible = false;
				portraitMiddle.visible = false;
				portraitRight.frames = Paths.getSparrowAtlas('weeb/jer');
				if (!portraitRight.visible)
				{
					portraitRight.visible = true;
					portraitRight.animation.play('enter');
				}
			case 'jermad':
				portraitLeft.visible = false;
				portraitMiddle.visible = false;
				portraitRight.frames = Paths.getSparrowAtlas('weeb/jermad');
				if (!portraitRight.visible)
				{
					portraitRight.visible = true;
					portraitRight.animation.play('enter');
				}
			case 'jeroops':
				portraitLeft.visible = false;
				portraitMiddle.visible = false;
				portraitRight.frames = Paths.getSparrowAtlas('weeb/jeroops');
				if (!portraitRight.visible)
				{
					portraitRight.visible = true;
					portraitRight.animation.play('enter');
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
*/