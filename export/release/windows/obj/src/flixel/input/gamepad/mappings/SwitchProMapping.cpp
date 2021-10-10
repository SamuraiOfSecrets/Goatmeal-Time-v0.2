// Generated by Haxe 4.2.2
#include <hxcpp.h>

#ifndef INCLUDED_flixel_input_gamepad_FlxGamepadAnalogStick
#include <flixel/input/gamepad/FlxGamepadAnalogStick.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_FlxGamepadAttachment
#include <flixel/input/gamepad/FlxGamepadAttachment.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_id_SwitchProID
#include <flixel/input/gamepad/id/SwitchProID.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_mappings_FlxGamepadMapping
#include <flixel/input/gamepad/mappings/FlxGamepadMapping.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_mappings_SwitchProMapping
#include <flixel/input/gamepad/mappings/SwitchProMapping.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_233c14da769792de_9_new,"flixel.input.gamepad.mappings.SwitchProMapping","new",0x820f2f6d,"flixel.input.gamepad.mappings.SwitchProMapping.new","flixel/input/gamepad/mappings/SwitchProMapping.hx",9,0x43c59885)
HX_LOCAL_STACK_FRAME(_hx_pos_233c14da769792de_23_initValues,"flixel.input.gamepad.mappings.SwitchProMapping","initValues",0xef8aaba5,"flixel.input.gamepad.mappings.SwitchProMapping.initValues","flixel/input/gamepad/mappings/SwitchProMapping.hx",23,0x43c59885)
HX_LOCAL_STACK_FRAME(_hx_pos_233c14da769792de_32_getID,"flixel.input.gamepad.mappings.SwitchProMapping","getID",0x7ffb8e3e,"flixel.input.gamepad.mappings.SwitchProMapping.getID","flixel/input/gamepad/mappings/SwitchProMapping.hx",32,0x43c59885)
HX_LOCAL_STACK_FRAME(_hx_pos_233c14da769792de_66_getRawID,"flixel.input.gamepad.mappings.SwitchProMapping","getRawID",0xb64d6120,"flixel.input.gamepad.mappings.SwitchProMapping.getRawID","flixel/input/gamepad/mappings/SwitchProMapping.hx",66,0x43c59885)
HX_LOCAL_STACK_FRAME(_hx_pos_233c14da769792de_104_getInputLabel,"flixel.input.gamepad.mappings.SwitchProMapping","getInputLabel",0x78efc30d,"flixel.input.gamepad.mappings.SwitchProMapping.getInputLabel","flixel/input/gamepad/mappings/SwitchProMapping.hx",104,0x43c59885)
namespace flixel{
namespace input{
namespace gamepad{
namespace mappings{

void SwitchProMapping_obj::__construct( ::flixel::input::gamepad::FlxGamepadAttachment attachment){
            	HX_STACKFRAME(&_hx_pos_233c14da769792de_9_new)
HXDLIN(   9)		super::__construct(attachment);
            	}

Dynamic SwitchProMapping_obj::__CreateEmpty() { return new SwitchProMapping_obj; }

void *SwitchProMapping_obj::_hx_vtable = 0;

Dynamic SwitchProMapping_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< SwitchProMapping_obj > _hx_result = new SwitchProMapping_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool SwitchProMapping_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x21e2b607) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x21e2b607;
	} else {
		return inClassId==(int)0x6252f0ed;
	}
}

void SwitchProMapping_obj::initValues(){
            	HX_STACKFRAME(&_hx_pos_233c14da769792de_23_initValues)
HXLINE(  24)		this->leftStick = ::flixel::input::gamepad::id::SwitchProID_obj::LEFT_ANALOG_STICK;
HXLINE(  25)		this->rightStick = ::flixel::input::gamepad::id::SwitchProID_obj::RIGHT_ANALOG_STICK;
HXLINE(  26)		this->supportsMotion = true;
HXLINE(  27)		this->supportsPointer = false;
            	}


int SwitchProMapping_obj::getID(int rawID){
            	HX_STACKFRAME(&_hx_pos_233c14da769792de_32_getID)
HXDLIN(  32)		switch((int)(rawID)){
            			case (int)4: {
HXLINE(  46)				return 17;
            			}
            			break;
            			case (int)5: {
HXLINE(  47)				return 18;
            			}
            			break;
            			case (int)6: {
HXLINE(  35)				return 0;
            			}
            			break;
            			case (int)7: {
HXLINE(  34)				return 1;
            			}
            			break;
            			case (int)8: {
HXLINE(  37)				return 2;
            			}
            			break;
            			case (int)9: {
HXLINE(  36)				return 3;
            			}
            			break;
            			case (int)10: {
HXLINE(  38)				return 6;
            			}
            			break;
            			case (int)11: {
HXLINE(  40)				return 10;
            			}
            			break;
            			case (int)12: {
HXLINE(  41)				return 7;
            			}
            			break;
            			case (int)13: {
HXLINE(  42)				return 8;
            			}
            			break;
            			case (int)14: {
HXLINE(  43)				return 9;
            			}
            			break;
            			case (int)15: {
HXLINE(  44)				return 4;
            			}
            			break;
            			case (int)16: {
HXLINE(  45)				return 5;
            			}
            			break;
            			case (int)17: {
HXLINE(  49)				return 11;
            			}
            			break;
            			case (int)18: {
HXLINE(  48)				return 12;
            			}
            			break;
            			case (int)19: {
HXLINE(  50)				return 13;
            			}
            			break;
            			case (int)20: {
HXLINE(  51)				return 14;
            			}
            			break;
            			case (int)21: {
HXLINE(  39)				return 30;
            			}
            			break;
            			default:{
HXLINE(  52)				int id = rawID;
HXDLIN(  52)				if ((id == this->leftStick->rawUp)) {
HXLINE(  52)					return 34;
            				}
            				else {
HXLINE(  53)					int id = rawID;
HXDLIN(  53)					if ((id == this->leftStick->rawDown)) {
HXLINE(  53)						return 36;
            					}
            					else {
HXLINE(  54)						int id = rawID;
HXDLIN(  54)						if ((id == this->leftStick->rawLeft)) {
HXLINE(  54)							return 37;
            						}
            						else {
HXLINE(  55)							int id = rawID;
HXDLIN(  55)							if ((id == this->leftStick->rawRight)) {
HXLINE(  55)								return 35;
            							}
            							else {
HXLINE(  56)								int id = rawID;
HXDLIN(  56)								if ((id == this->rightStick->rawUp)) {
HXLINE(  56)									return 38;
            								}
            								else {
HXLINE(  57)									int id = rawID;
HXDLIN(  57)									if ((id == this->rightStick->rawDown)) {
HXLINE(  57)										return 40;
            									}
            									else {
HXLINE(  58)										int id = rawID;
HXDLIN(  58)										if ((id == this->rightStick->rawLeft)) {
HXLINE(  58)											return 41;
            										}
            										else {
HXLINE(  59)											int id = rawID;
HXDLIN(  59)											if ((id == this->rightStick->rawRight)) {
HXLINE(  59)												return 39;
            											}
            											else {
HXLINE(  60)												return -1;
            											}
            										}
            									}
            								}
            							}
            						}
            					}
            				}
            			}
            		}
HXLINE(  32)		return null();
            	}


int SwitchProMapping_obj::getRawID(int ID){
            	HX_STACKFRAME(&_hx_pos_233c14da769792de_66_getRawID)
HXDLIN(  66)		switch((int)(ID)){
            			case (int)0: {
HXLINE(  68)				return 6;
            			}
            			break;
            			case (int)1: {
HXLINE(  69)				return 7;
            			}
            			break;
            			case (int)2: {
HXLINE(  70)				return 8;
            			}
            			break;
            			case (int)3: {
HXLINE(  71)				return 9;
            			}
            			break;
            			case (int)4: {
HXLINE(  78)				return 15;
            			}
            			break;
            			case (int)5: {
HXLINE(  79)				return 16;
            			}
            			break;
            			case (int)6: {
HXLINE(  72)				return 10;
            			}
            			break;
            			case (int)7: {
HXLINE(  75)				return 12;
            			}
            			break;
            			case (int)8: {
HXLINE(  76)				return 13;
            			}
            			break;
            			case (int)9: {
HXLINE(  77)				return 14;
            			}
            			break;
            			case (int)10: {
HXLINE(  74)				return 11;
            			}
            			break;
            			case (int)11: {
HXLINE(  82)				return 17;
            			}
            			break;
            			case (int)12: {
HXLINE(  83)				return 18;
            			}
            			break;
            			case (int)13: {
HXLINE(  84)				return 19;
            			}
            			break;
            			case (int)14: {
HXLINE(  85)				return 20;
            			}
            			break;
            			case (int)17: {
HXLINE(  80)				return 4;
            			}
            			break;
            			case (int)18: {
HXLINE(  81)				return 5;
            			}
            			break;
            			case (int)30: {
HXLINE(  73)				return 21;
            			}
            			break;
            			case (int)34: {
HXLINE(  86)				return ::flixel::input::gamepad::id::SwitchProID_obj::LEFT_ANALOG_STICK->rawUp;
            			}
            			break;
            			case (int)35: {
HXLINE(  89)				return ::flixel::input::gamepad::id::SwitchProID_obj::LEFT_ANALOG_STICK->rawRight;
            			}
            			break;
            			case (int)36: {
HXLINE(  87)				return ::flixel::input::gamepad::id::SwitchProID_obj::LEFT_ANALOG_STICK->rawDown;
            			}
            			break;
            			case (int)37: {
HXLINE(  88)				return ::flixel::input::gamepad::id::SwitchProID_obj::LEFT_ANALOG_STICK->rawLeft;
            			}
            			break;
            			case (int)38: {
HXLINE(  90)				return ::flixel::input::gamepad::id::SwitchProID_obj::RIGHT_ANALOG_STICK->rawUp;
            			}
            			break;
            			case (int)39: {
HXLINE(  93)				return ::flixel::input::gamepad::id::SwitchProID_obj::RIGHT_ANALOG_STICK->rawRight;
            			}
            			break;
            			case (int)40: {
HXLINE(  91)				return ::flixel::input::gamepad::id::SwitchProID_obj::RIGHT_ANALOG_STICK->rawDown;
            			}
            			break;
            			case (int)41: {
HXLINE(  92)				return ::flixel::input::gamepad::id::SwitchProID_obj::RIGHT_ANALOG_STICK->rawLeft;
            			}
            			break;
            			default:{
HXLINE(  98)				return -1;
            			}
            		}
HXLINE(  66)		return 0;
            	}


::String SwitchProMapping_obj::getInputLabel(int id){
            	HX_STACKFRAME(&_hx_pos_233c14da769792de_104_getInputLabel)
HXDLIN( 104)		switch((int)(id)){
            			case (int)0: {
HXLINE( 106)				return HX_("b",62,00,00,00);
            			}
            			break;
            			case (int)1: {
HXLINE( 107)				return HX_("a",61,00,00,00);
            			}
            			break;
            			case (int)2: {
HXLINE( 108)				return HX_("y",79,00,00,00);
            			}
            			break;
            			case (int)3: {
HXLINE( 109)				return HX_("x",78,00,00,00);
            			}
            			break;
            			case (int)4: {
HXLINE( 114)				return HX_("l",6c,00,00,00);
            			}
            			break;
            			case (int)5: {
HXLINE( 115)				return HX_("r",72,00,00,00);
            			}
            			break;
            			case (int)6: {
HXLINE( 110)				return HX_("minus",70,80,68,08);
            			}
            			break;
            			case (int)7: {
HXLINE( 112)				return HX_("plus",5a,3f,5a,4a);
            			}
            			break;
            			case (int)10: {
HXLINE( 111)				return HX_("home",1f,ca,12,45);
            			}
            			break;
            			case (int)17: {
HXLINE( 116)				return HX_("zl",b2,6a,00,00);
            			}
            			break;
            			case (int)18: {
HXLINE( 117)				return HX_("zr",b8,6a,00,00);
            			}
            			break;
            			case (int)30: {
HXLINE( 113)				return HX_("capture",86,d0,51,a7);
            			}
            			break;
            			default:{
HXLINE( 118)				return this->super::getInputLabel(id);
            			}
            		}
HXLINE( 104)		return null();
            	}



::hx::ObjectPtr< SwitchProMapping_obj > SwitchProMapping_obj::__new( ::flixel::input::gamepad::FlxGamepadAttachment attachment) {
	::hx::ObjectPtr< SwitchProMapping_obj > __this = new SwitchProMapping_obj();
	__this->__construct(attachment);
	return __this;
}

::hx::ObjectPtr< SwitchProMapping_obj > SwitchProMapping_obj::__alloc(::hx::Ctx *_hx_ctx, ::flixel::input::gamepad::FlxGamepadAttachment attachment) {
	SwitchProMapping_obj *__this = (SwitchProMapping_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(SwitchProMapping_obj), true, "flixel.input.gamepad.mappings.SwitchProMapping"));
	*(void **)__this = SwitchProMapping_obj::_hx_vtable;
	__this->__construct(attachment);
	return __this;
}

SwitchProMapping_obj::SwitchProMapping_obj()
{
}

::hx::Val SwitchProMapping_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"getID") ) { return ::hx::Val( getID_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"getRawID") ) { return ::hx::Val( getRawID_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"initValues") ) { return ::hx::Val( initValues_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"getInputLabel") ) { return ::hx::Val( getInputLabel_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *SwitchProMapping_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *SwitchProMapping_obj_sStaticStorageInfo = 0;
#endif

static ::String SwitchProMapping_obj_sMemberFields[] = {
	HX_("initValues",12,5f,fc,53),
	HX_("getID",f1,91,60,91),
	HX_("getRawID",4d,6f,fd,43),
	HX_("getInputLabel",c0,31,5c,4a),
	::String(null()) };

::hx::Class SwitchProMapping_obj::__mClass;

void SwitchProMapping_obj::__register()
{
	SwitchProMapping_obj _hx_dummy;
	SwitchProMapping_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.input.gamepad.mappings.SwitchProMapping",fb,f4,b5,99);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(SwitchProMapping_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< SwitchProMapping_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = SwitchProMapping_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = SwitchProMapping_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace input
} // end namespace gamepad
} // end namespace mappings
