// Generated by Haxe 4.2.2
#include <hxcpp.h>

#ifndef INCLUDED_openfl_display3D__Context3DStencilAction_Context3DStencilAction_Impl_
#include <openfl/display3D/_Context3DStencilAction/Context3DStencilAction_Impl_.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_7ca6962f8d84f3d3_63_fromString,"openfl.display3D._Context3DStencilAction.Context3DStencilAction_Impl_","fromString",0x85a5c581,"openfl.display3D._Context3DStencilAction.Context3DStencilAction_Impl_.fromString","openfl/display3D/Context3DStencilAction.hx",63,0x92be5171)
HX_LOCAL_STACK_FRAME(_hx_pos_7ca6962f8d84f3d3_79_toString,"openfl.display3D._Context3DStencilAction.Context3DStencilAction_Impl_","toString",0x776f12d2,"openfl.display3D._Context3DStencilAction.Context3DStencilAction_Impl_.toString","openfl/display3D/Context3DStencilAction.hx",79,0x92be5171)
HX_LOCAL_STACK_FRAME(_hx_pos_7ca6962f8d84f3d3_19_boot,"openfl.display3D._Context3DStencilAction.Context3DStencilAction_Impl_","boot",0xa3ba3b58,"openfl.display3D._Context3DStencilAction.Context3DStencilAction_Impl_.boot","openfl/display3D/Context3DStencilAction.hx",19,0x92be5171)
HX_LOCAL_STACK_FRAME(_hx_pos_7ca6962f8d84f3d3_25_boot,"openfl.display3D._Context3DStencilAction.Context3DStencilAction_Impl_","boot",0xa3ba3b58,"openfl.display3D._Context3DStencilAction.Context3DStencilAction_Impl_.boot","openfl/display3D/Context3DStencilAction.hx",25,0x92be5171)
HX_LOCAL_STACK_FRAME(_hx_pos_7ca6962f8d84f3d3_30_boot,"openfl.display3D._Context3DStencilAction.Context3DStencilAction_Impl_","boot",0xa3ba3b58,"openfl.display3D._Context3DStencilAction.Context3DStencilAction_Impl_.boot","openfl/display3D/Context3DStencilAction.hx",30,0x92be5171)
HX_LOCAL_STACK_FRAME(_hx_pos_7ca6962f8d84f3d3_36_boot,"openfl.display3D._Context3DStencilAction.Context3DStencilAction_Impl_","boot",0xa3ba3b58,"openfl.display3D._Context3DStencilAction.Context3DStencilAction_Impl_.boot","openfl/display3D/Context3DStencilAction.hx",36,0x92be5171)
HX_LOCAL_STACK_FRAME(_hx_pos_7ca6962f8d84f3d3_44_boot,"openfl.display3D._Context3DStencilAction.Context3DStencilAction_Impl_","boot",0xa3ba3b58,"openfl.display3D._Context3DStencilAction.Context3DStencilAction_Impl_.boot","openfl/display3D/Context3DStencilAction.hx",44,0x92be5171)
HX_LOCAL_STACK_FRAME(_hx_pos_7ca6962f8d84f3d3_49_boot,"openfl.display3D._Context3DStencilAction.Context3DStencilAction_Impl_","boot",0xa3ba3b58,"openfl.display3D._Context3DStencilAction.Context3DStencilAction_Impl_.boot","openfl/display3D/Context3DStencilAction.hx",49,0x92be5171)
HX_LOCAL_STACK_FRAME(_hx_pos_7ca6962f8d84f3d3_54_boot,"openfl.display3D._Context3DStencilAction.Context3DStencilAction_Impl_","boot",0xa3ba3b58,"openfl.display3D._Context3DStencilAction.Context3DStencilAction_Impl_.boot","openfl/display3D/Context3DStencilAction.hx",54,0x92be5171)
HX_LOCAL_STACK_FRAME(_hx_pos_7ca6962f8d84f3d3_59_boot,"openfl.display3D._Context3DStencilAction.Context3DStencilAction_Impl_","boot",0xa3ba3b58,"openfl.display3D._Context3DStencilAction.Context3DStencilAction_Impl_.boot","openfl/display3D/Context3DStencilAction.hx",59,0x92be5171)
namespace openfl{
namespace display3D{
namespace _Context3DStencilAction{

void Context3DStencilAction_Impl__obj::__construct() { }

Dynamic Context3DStencilAction_Impl__obj::__CreateEmpty() { return new Context3DStencilAction_Impl__obj; }

void *Context3DStencilAction_Impl__obj::_hx_vtable = 0;

Dynamic Context3DStencilAction_Impl__obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Context3DStencilAction_Impl__obj > _hx_result = new Context3DStencilAction_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Context3DStencilAction_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x7efd910c;
}

 ::Dynamic Context3DStencilAction_Impl__obj::DECREMENT_SATURATE;

 ::Dynamic Context3DStencilAction_Impl__obj::DECREMENT_WRAP;

 ::Dynamic Context3DStencilAction_Impl__obj::INCREMENT_SATURATE;

 ::Dynamic Context3DStencilAction_Impl__obj::INCREMENT_WRAP;

 ::Dynamic Context3DStencilAction_Impl__obj::INVERT;

 ::Dynamic Context3DStencilAction_Impl__obj::KEEP;

 ::Dynamic Context3DStencilAction_Impl__obj::SET;

 ::Dynamic Context3DStencilAction_Impl__obj::ZERO;

 ::Dynamic Context3DStencilAction_Impl__obj::fromString(::String value){
            	HX_STACKFRAME(&_hx_pos_7ca6962f8d84f3d3_63_fromString)
HXDLIN(  63)		::String _hx_switch_0 = value;
            		if (  (_hx_switch_0==HX_("decrementSaturate",22,cd,3b,f4)) ){
HXLINE(  65)			return 0;
HXDLIN(  65)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("decrementWrap",7d,61,2a,a2)) ){
HXLINE(  66)			return 1;
HXDLIN(  66)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("incrementSaturate",3e,59,b0,83)) ){
HXLINE(  67)			return 2;
HXDLIN(  67)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("incrementWrap",99,af,a7,4e)) ){
HXLINE(  68)			return 3;
HXDLIN(  68)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("invert",16,e7,d8,9f)) ){
HXLINE(  69)			return 4;
HXDLIN(  69)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("keep",85,d0,06,47)) ){
HXLINE(  70)			return 5;
HXDLIN(  70)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("set",a2,9b,57,00)) ){
HXLINE(  71)			return 6;
HXDLIN(  71)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("zero",28,0f,f1,50)) ){
HXLINE(  72)			return 7;
HXDLIN(  72)			goto _hx_goto_0;
            		}
            		/* default */{
HXLINE(  73)			return null();
            		}
            		_hx_goto_0:;
HXLINE(  63)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Context3DStencilAction_Impl__obj,fromString,return )

::String Context3DStencilAction_Impl__obj::toString( ::Dynamic this1){
            	HX_STACKFRAME(&_hx_pos_7ca6962f8d84f3d3_79_toString)
HXDLIN(  79)		 ::Dynamic _hx_switch_0 = this1;
            		if (  (_hx_switch_0==0) ){
HXLINE(  81)			return HX_("decrementSaturate",22,cd,3b,f4);
HXDLIN(  81)			goto _hx_goto_2;
            		}
            		if (  (_hx_switch_0==1) ){
HXLINE(  82)			return HX_("decrementWrap",7d,61,2a,a2);
HXDLIN(  82)			goto _hx_goto_2;
            		}
            		if (  (_hx_switch_0==2) ){
HXLINE(  83)			return HX_("incrementSaturate",3e,59,b0,83);
HXDLIN(  83)			goto _hx_goto_2;
            		}
            		if (  (_hx_switch_0==3) ){
HXLINE(  84)			return HX_("incrementWrap",99,af,a7,4e);
HXDLIN(  84)			goto _hx_goto_2;
            		}
            		if (  (_hx_switch_0==4) ){
HXLINE(  85)			return HX_("invert",16,e7,d8,9f);
HXDLIN(  85)			goto _hx_goto_2;
            		}
            		if (  (_hx_switch_0==5) ){
HXLINE(  86)			return HX_("keep",85,d0,06,47);
HXDLIN(  86)			goto _hx_goto_2;
            		}
            		if (  (_hx_switch_0==6) ){
HXLINE(  87)			return HX_("set",a2,9b,57,00);
HXDLIN(  87)			goto _hx_goto_2;
            		}
            		if (  (_hx_switch_0==7) ){
HXLINE(  88)			return HX_("zero",28,0f,f1,50);
HXDLIN(  88)			goto _hx_goto_2;
            		}
            		/* default */{
HXLINE(  89)			return null();
            		}
            		_hx_goto_2:;
HXLINE(  79)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Context3DStencilAction_Impl__obj,toString,return )


Context3DStencilAction_Impl__obj::Context3DStencilAction_Impl__obj()
{
}

bool Context3DStencilAction_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { outValue = toString_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"fromString") ) { outValue = fromString_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Context3DStencilAction_Impl__obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo Context3DStencilAction_Impl__obj_sStaticStorageInfo[] = {
	{::hx::fsObject /*  ::Dynamic */ ,(void *) &Context3DStencilAction_Impl__obj::DECREMENT_SATURATE,HX_("DECREMENT_SATURATE",fb,9a,33,b0)},
	{::hx::fsObject /*  ::Dynamic */ ,(void *) &Context3DStencilAction_Impl__obj::DECREMENT_WRAP,HX_("DECREMENT_WRAP",d6,46,e1,de)},
	{::hx::fsObject /*  ::Dynamic */ ,(void *) &Context3DStencilAction_Impl__obj::INCREMENT_SATURATE,HX_("INCREMENT_SATURATE",5f,a7,b9,a6)},
	{::hx::fsObject /*  ::Dynamic */ ,(void *) &Context3DStencilAction_Impl__obj::INCREMENT_WRAP,HX_("INCREMENT_WRAP",3a,51,08,20)},
	{::hx::fsObject /*  ::Dynamic */ ,(void *) &Context3DStencilAction_Impl__obj::INVERT,HX_("INVERT",16,93,5b,52)},
	{::hx::fsObject /*  ::Dynamic */ ,(void *) &Context3DStencilAction_Impl__obj::KEEP,HX_("KEEP",85,98,c7,31)},
	{::hx::fsObject /*  ::Dynamic */ ,(void *) &Context3DStencilAction_Impl__obj::SET,HX_("SET",82,37,3f,00)},
	{::hx::fsObject /*  ::Dynamic */ ,(void *) &Context3DStencilAction_Impl__obj::ZERO,HX_("ZERO",28,d7,b1,3b)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void Context3DStencilAction_Impl__obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Context3DStencilAction_Impl__obj::DECREMENT_SATURATE,"DECREMENT_SATURATE");
	HX_MARK_MEMBER_NAME(Context3DStencilAction_Impl__obj::DECREMENT_WRAP,"DECREMENT_WRAP");
	HX_MARK_MEMBER_NAME(Context3DStencilAction_Impl__obj::INCREMENT_SATURATE,"INCREMENT_SATURATE");
	HX_MARK_MEMBER_NAME(Context3DStencilAction_Impl__obj::INCREMENT_WRAP,"INCREMENT_WRAP");
	HX_MARK_MEMBER_NAME(Context3DStencilAction_Impl__obj::INVERT,"INVERT");
	HX_MARK_MEMBER_NAME(Context3DStencilAction_Impl__obj::KEEP,"KEEP");
	HX_MARK_MEMBER_NAME(Context3DStencilAction_Impl__obj::SET,"SET");
	HX_MARK_MEMBER_NAME(Context3DStencilAction_Impl__obj::ZERO,"ZERO");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Context3DStencilAction_Impl__obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Context3DStencilAction_Impl__obj::DECREMENT_SATURATE,"DECREMENT_SATURATE");
	HX_VISIT_MEMBER_NAME(Context3DStencilAction_Impl__obj::DECREMENT_WRAP,"DECREMENT_WRAP");
	HX_VISIT_MEMBER_NAME(Context3DStencilAction_Impl__obj::INCREMENT_SATURATE,"INCREMENT_SATURATE");
	HX_VISIT_MEMBER_NAME(Context3DStencilAction_Impl__obj::INCREMENT_WRAP,"INCREMENT_WRAP");
	HX_VISIT_MEMBER_NAME(Context3DStencilAction_Impl__obj::INVERT,"INVERT");
	HX_VISIT_MEMBER_NAME(Context3DStencilAction_Impl__obj::KEEP,"KEEP");
	HX_VISIT_MEMBER_NAME(Context3DStencilAction_Impl__obj::SET,"SET");
	HX_VISIT_MEMBER_NAME(Context3DStencilAction_Impl__obj::ZERO,"ZERO");
};

#endif

::hx::Class Context3DStencilAction_Impl__obj::__mClass;

static ::String Context3DStencilAction_Impl__obj_sStaticFields[] = {
	HX_("DECREMENT_SATURATE",fb,9a,33,b0),
	HX_("DECREMENT_WRAP",d6,46,e1,de),
	HX_("INCREMENT_SATURATE",5f,a7,b9,a6),
	HX_("INCREMENT_WRAP",3a,51,08,20),
	HX_("INVERT",16,93,5b,52),
	HX_("KEEP",85,98,c7,31),
	HX_("SET",82,37,3f,00),
	HX_("ZERO",28,d7,b1,3b),
	HX_("fromString",db,2d,74,54),
	HX_("toString",ac,d0,6e,38),
	::String(null())
};

void Context3DStencilAction_Impl__obj::__register()
{
	Context3DStencilAction_Impl__obj _hx_dummy;
	Context3DStencilAction_Impl__obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("openfl.display3D._Context3DStencilAction.Context3DStencilAction_Impl_",08,fb,bc,f6);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Context3DStencilAction_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = Context3DStencilAction_Impl__obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Context3DStencilAction_Impl__obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< Context3DStencilAction_Impl__obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Context3DStencilAction_Impl__obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Context3DStencilAction_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Context3DStencilAction_Impl__obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Context3DStencilAction_Impl__obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_7ca6962f8d84f3d3_19_boot)
HXDLIN(  19)		DECREMENT_SATURATE = 0;
            	}
{
            	HX_STACKFRAME(&_hx_pos_7ca6962f8d84f3d3_25_boot)
HXDLIN(  25)		DECREMENT_WRAP = 1;
            	}
{
            	HX_STACKFRAME(&_hx_pos_7ca6962f8d84f3d3_30_boot)
HXDLIN(  30)		INCREMENT_SATURATE = 2;
            	}
{
            	HX_STACKFRAME(&_hx_pos_7ca6962f8d84f3d3_36_boot)
HXDLIN(  36)		INCREMENT_WRAP = 3;
            	}
{
            	HX_STACKFRAME(&_hx_pos_7ca6962f8d84f3d3_44_boot)
HXDLIN(  44)		INVERT = 4;
            	}
{
            	HX_STACKFRAME(&_hx_pos_7ca6962f8d84f3d3_49_boot)
HXDLIN(  49)		KEEP = 5;
            	}
{
            	HX_STACKFRAME(&_hx_pos_7ca6962f8d84f3d3_54_boot)
HXDLIN(  54)		SET = 6;
            	}
{
            	HX_STACKFRAME(&_hx_pos_7ca6962f8d84f3d3_59_boot)
HXDLIN(  59)		ZERO = 7;
            	}
}

} // end namespace openfl
} // end namespace display3D
} // end namespace _Context3DStencilAction
