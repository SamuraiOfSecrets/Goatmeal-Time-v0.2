// Generated by Haxe 4.2.2
#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_flixel_tweens_FlxTween
#include <flixel/tweens/FlxTween.h>
#endif
#ifndef INCLUDED_flixel_util_FlxArrayUtil
#include <flixel/util/FlxArrayUtil.h>
#endif
#ifndef INCLUDED_flixel_util_FlxTimer
#include <flixel/util/FlxTimer.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_80883519d7ae1644_16_setLength_Int,"flixel.util.FlxArrayUtil","setLength_Int",0x3efc372d,"flixel.util.FlxArrayUtil.setLength_Int","flixel/util/FlxArrayUtil.hx",16,0xa0dc755b)
HX_LOCAL_STACK_FRAME(_hx_pos_80883519d7ae1644_122_flatten2DArray_Int,"flixel.util.FlxArrayUtil","flatten2DArray_Int",0x9867551e,"flixel.util.FlxArrayUtil.flatten2DArray_Int","flixel/util/FlxArrayUtil.hx",122,0xa0dc755b)
HX_LOCAL_STACK_FRAME(_hx_pos_80883519d7ae1644_16_setLength_cacheValue_T,"flixel.util.FlxArrayUtil","setLength_cacheValue_T",0xac46dc86,"flixel.util.FlxArrayUtil.setLength_cacheValue_T","flixel/util/FlxArrayUtil.hx",16,0xa0dc755b)
HX_LOCAL_STACK_FRAME(_hx_pos_80883519d7ae1644_47_fastSplice_flixel_tweens_FlxTween,"flixel.util.FlxArrayUtil","fastSplice_flixel_tweens_FlxTween",0x134d3569,"flixel.util.FlxArrayUtil.fastSplice_flixel_tweens_FlxTween","flixel/util/FlxArrayUtil.hx",47,0xa0dc755b)
HX_LOCAL_STACK_FRAME(_hx_pos_80883519d7ae1644_47_fastSplice_flixel_util_FlxTimer,"flixel.util.FlxArrayUtil","fastSplice_flixel_util_FlxTimer",0x46676ae9,"flixel.util.FlxArrayUtil.fastSplice_flixel_util_FlxTimer","flixel/util/FlxArrayUtil.hx",47,0xa0dc755b)
HX_LOCAL_STACK_FRAME(_hx_pos_80883519d7ae1644_79_swapAndPop_fastSplice_T,"flixel.util.FlxArrayUtil","swapAndPop_fastSplice_T",0xfdfa2694,"flixel.util.FlxArrayUtil.swapAndPop_fastSplice_T","flixel/util/FlxArrayUtil.hx",79,0xa0dc755b)
HX_LOCAL_STACK_FRAME(_hx_pos_80883519d7ae1644_16_setLength_flixel_group_FlxTypedGroup_T,"flixel.util.FlxArrayUtil","setLength_flixel_group_FlxTypedGroup_T",0x1139627b,"flixel.util.FlxArrayUtil.setLength_flixel_group_FlxTypedGroup_T","flixel/util/FlxArrayUtil.hx",16,0xa0dc755b)
HX_LOCAL_STACK_FRAME(_hx_pos_80883519d7ae1644_94_clearArray,"flixel.util.FlxArrayUtil","clearArray",0xac755a77,"flixel.util.FlxArrayUtil.clearArray","flixel/util/FlxArrayUtil.hx",94,0xa0dc755b)
HX_LOCAL_STACK_FRAME(_hx_pos_80883519d7ae1644_135_equals,"flixel.util.FlxArrayUtil","equals",0x2985aa6a,"flixel.util.FlxArrayUtil.equals","flixel/util/FlxArrayUtil.hx",135,0xa0dc755b)
HX_LOCAL_STACK_FRAME(_hx_pos_80883519d7ae1644_156_last,"flixel.util.FlxArrayUtil","last",0x58e5d5c1,"flixel.util.FlxArrayUtil.last","flixel/util/FlxArrayUtil.hx",156,0xa0dc755b)
HX_LOCAL_STACK_FRAME(_hx_pos_80883519d7ae1644_167_safePush,"flixel.util.FlxArrayUtil","safePush",0x993f42b2,"flixel.util.FlxArrayUtil.safePush","flixel/util/FlxArrayUtil.hx",167,0xa0dc755b)
HX_LOCAL_STACK_FRAME(_hx_pos_80883519d7ae1644_176_contains,"flixel.util.FlxArrayUtil","contains",0x2d55b70a,"flixel.util.FlxArrayUtil.contains","flixel/util/FlxArrayUtil.hx",176,0xa0dc755b)
namespace flixel{
namespace util{

void FlxArrayUtil_obj::__construct() { }

Dynamic FlxArrayUtil_obj::__CreateEmpty() { return new FlxArrayUtil_obj; }

void *FlxArrayUtil_obj::_hx_vtable = 0;

Dynamic FlxArrayUtil_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FlxArrayUtil_obj > _hx_result = new FlxArrayUtil_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool FlxArrayUtil_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x246e206f;
}

::Array< int > FlxArrayUtil_obj::setLength_Int(::Array< int > array,int newLength){
            	HX_STACKFRAME(&_hx_pos_80883519d7ae1644_16_setLength_Int)
HXLINE(  17)		if ((newLength < 0)) {
HXLINE(  18)			return array;
            		}
HXLINE(  20)		int oldLength = array->length;
HXLINE(  21)		int diff = (newLength - oldLength);
HXLINE(  22)		if ((diff >= 0)) {
HXLINE(  23)			return array;
            		}
HXLINE(  28)		diff = -(diff);
HXLINE(  29)		{
HXLINE(  29)			int _g = 0;
HXDLIN(  29)			int _g1 = diff;
HXDLIN(  29)			while((_g < _g1)){
HXLINE(  29)				_g = (_g + 1);
HXDLIN(  29)				int i = (_g - 1);
HXLINE(  30)				array->pop();
            			}
            		}
HXLINE(  33)		return array;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxArrayUtil_obj,setLength_Int,return )

::Array< int > FlxArrayUtil_obj::flatten2DArray_Int(::Array< ::Dynamic> array){
            	HX_STACKFRAME(&_hx_pos_80883519d7ae1644_122_flatten2DArray_Int)
HXLINE( 123)		::Array< int > result = ::Array_obj< int >::__new(0);
HXLINE( 124)		{
HXLINE( 124)			int _g = 0;
HXDLIN( 124)			while((_g < array->length)){
HXLINE( 124)				::Array< int > innerArray = array->__get(_g).StaticCast< ::Array< int > >();
HXDLIN( 124)				_g = (_g + 1);
HXLINE( 125)				{
HXLINE( 125)					int _g1 = 0;
HXDLIN( 125)					while((_g1 < innerArray->length)){
HXLINE( 125)						int element = innerArray->__get(_g1);
HXDLIN( 125)						_g1 = (_g1 + 1);
HXLINE( 126)						result->push(element);
            					}
            				}
            			}
            		}
HXLINE( 127)		return result;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxArrayUtil_obj,flatten2DArray_Int,return )

::cpp::VirtualArray FlxArrayUtil_obj::setLength_cacheValue_T(::cpp::VirtualArray array,int newLength){
            	HX_STACKFRAME(&_hx_pos_80883519d7ae1644_16_setLength_cacheValue_T)
HXLINE(  17)		if ((newLength < 0)) {
HXLINE(  18)			return array;
            		}
HXLINE(  20)		int oldLength = array->get_length();
HXLINE(  21)		int diff = (newLength - oldLength);
HXLINE(  22)		if ((diff >= 0)) {
HXLINE(  23)			return array;
            		}
HXLINE(  28)		diff = -(diff);
HXLINE(  29)		{
HXLINE(  29)			int _g = 0;
HXDLIN(  29)			int _g1 = diff;
HXDLIN(  29)			while((_g < _g1)){
HXLINE(  29)				_g = (_g + 1);
HXDLIN(  29)				int i = (_g - 1);
HXLINE(  30)				array->pop();
            			}
            		}
HXLINE(  33)		return array;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxArrayUtil_obj,setLength_cacheValue_T,return )

::Array< ::Dynamic> FlxArrayUtil_obj::fastSplice_flixel_tweens_FlxTween(::Array< ::Dynamic> array, ::flixel::tweens::FlxTween element){
            	HX_STACKFRAME(&_hx_pos_80883519d7ae1644_47_fastSplice_flixel_tweens_FlxTween)
HXLINE(  48)		int index = array->indexOf(element,null());
HXLINE(  49)		if ((index != -1)) {
HXLINE(  50)			array[index] = array->__get((array->length - 1)).StaticCast<  ::flixel::tweens::FlxTween >();
HXDLIN(  50)			array->pop().StaticCast<  ::flixel::tweens::FlxTween >();
HXDLIN(  50)			return array;
            		}
HXLINE(  51)		return array;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxArrayUtil_obj,fastSplice_flixel_tweens_FlxTween,return )

::Array< ::Dynamic> FlxArrayUtil_obj::fastSplice_flixel_util_FlxTimer(::Array< ::Dynamic> array, ::flixel::util::FlxTimer element){
            	HX_STACKFRAME(&_hx_pos_80883519d7ae1644_47_fastSplice_flixel_util_FlxTimer)
HXLINE(  48)		int index = array->indexOf(element,null());
HXLINE(  49)		if ((index != -1)) {
HXLINE(  50)			array[index] = array->__get((array->length - 1)).StaticCast<  ::flixel::util::FlxTimer >();
HXDLIN(  50)			array->pop().StaticCast<  ::flixel::util::FlxTimer >();
HXDLIN(  50)			return array;
            		}
HXLINE(  51)		return array;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxArrayUtil_obj,fastSplice_flixel_util_FlxTimer,return )

::cpp::VirtualArray FlxArrayUtil_obj::swapAndPop_fastSplice_T(::cpp::VirtualArray array,int index){
            	HX_STACKFRAME(&_hx_pos_80883519d7ae1644_79_swapAndPop_fastSplice_T)
HXLINE(  80)		array->set(index,array->__get((array->get_length() - 1)));
HXLINE(  81)		array->pop();
HXLINE(  82)		return array;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxArrayUtil_obj,swapAndPop_fastSplice_T,return )

::cpp::VirtualArray FlxArrayUtil_obj::setLength_flixel_group_FlxTypedGroup_T(::cpp::VirtualArray array,int newLength){
            	HX_STACKFRAME(&_hx_pos_80883519d7ae1644_16_setLength_flixel_group_FlxTypedGroup_T)
HXLINE(  17)		if ((newLength < 0)) {
HXLINE(  18)			return array;
            		}
HXLINE(  20)		int oldLength = array->get_length();
HXLINE(  21)		int diff = (newLength - oldLength);
HXLINE(  22)		if ((diff >= 0)) {
HXLINE(  23)			return array;
            		}
HXLINE(  28)		diff = -(diff);
HXLINE(  29)		{
HXLINE(  29)			int _g = 0;
HXDLIN(  29)			int _g1 = diff;
HXDLIN(  29)			while((_g < _g1)){
HXLINE(  29)				_g = (_g + 1);
HXDLIN(  29)				int i = (_g - 1);
HXLINE(  30)				array->pop();
            			}
            		}
HXLINE(  33)		return array;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxArrayUtil_obj,setLength_flixel_group_FlxTypedGroup_T,return )

::cpp::VirtualArray FlxArrayUtil_obj::clearArray(::cpp::VirtualArray array,::hx::Null< bool >  __o_recursive){
            		bool recursive = __o_recursive.Default(false);
            	HX_STACKFRAME(&_hx_pos_80883519d7ae1644_94_clearArray)
HXLINE(  95)		if (::hx::IsNull( array )) {
HXLINE(  96)			return array;
            		}
HXLINE(  98)		if (recursive) {
HXLINE( 100)			while((array->get_length() > 0)){
HXLINE( 102)				 ::Dynamic thing = array->pop();
HXLINE( 103)				if (::Std_obj::isOfType(thing,::hx::ArrayBase::__mClass)) {
HXLINE( 104)					::flixel::util::FlxArrayUtil_obj::clearArray(array,recursive);
            				}
            			}
            		}
            		else {
HXLINE( 109)			while((array->get_length() > 0)){
HXLINE( 110)				array->pop();
            			}
            		}
HXLINE( 113)		return array;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxArrayUtil_obj,clearArray,return )

bool FlxArrayUtil_obj::equals(::cpp::VirtualArray array1,::cpp::VirtualArray array2){
            	HX_STACKFRAME(&_hx_pos_80883519d7ae1644_135_equals)
HXLINE( 136)		bool _hx_tmp;
HXDLIN( 136)		if (::hx::IsNull( array1 )) {
HXLINE( 136)			_hx_tmp = ::hx::IsNull( array2 );
            		}
            		else {
HXLINE( 136)			_hx_tmp = false;
            		}
HXDLIN( 136)		if (_hx_tmp) {
HXLINE( 137)			return true;
            		}
HXLINE( 138)		bool _hx_tmp1;
HXDLIN( 138)		if (::hx::IsNull( array1 )) {
HXLINE( 138)			_hx_tmp1 = ::hx::IsNotNull( array2 );
            		}
            		else {
HXLINE( 138)			_hx_tmp1 = false;
            		}
HXDLIN( 138)		if (_hx_tmp1) {
HXLINE( 139)			return false;
            		}
HXLINE( 140)		bool _hx_tmp2;
HXDLIN( 140)		if (::hx::IsNotNull( array1 )) {
HXLINE( 140)			_hx_tmp2 = ::hx::IsNull( array2 );
            		}
            		else {
HXLINE( 140)			_hx_tmp2 = false;
            		}
HXDLIN( 140)		if (_hx_tmp2) {
HXLINE( 141)			return false;
            		}
HXLINE( 142)		if ((array1->get_length() != array2->get_length())) {
HXLINE( 143)			return false;
            		}
HXLINE( 145)		{
HXLINE( 145)			int _g = 0;
HXDLIN( 145)			int _g1 = array1->get_length();
HXDLIN( 145)			while((_g < _g1)){
HXLINE( 145)				_g = (_g + 1);
HXDLIN( 145)				int i = (_g - 1);
HXLINE( 146)				if (::hx::IsNotEq( array1->__get(i),array2->__get(i) )) {
HXLINE( 147)					return false;
            				}
            			}
            		}
HXLINE( 149)		return true;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxArrayUtil_obj,equals,return )

 ::Dynamic FlxArrayUtil_obj::last(::cpp::VirtualArray array){
            	HX_STACKFRAME(&_hx_pos_80883519d7ae1644_156_last)
HXLINE( 157)		bool _hx_tmp;
HXDLIN( 157)		if (::hx::IsNotNull( array )) {
HXLINE( 157)			_hx_tmp = (array->get_length() == 0);
            		}
            		else {
HXLINE( 157)			_hx_tmp = true;
            		}
HXDLIN( 157)		if (_hx_tmp) {
HXLINE( 158)			return null();
            		}
HXLINE( 159)		return array->__get((array->get_length() - 1));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxArrayUtil_obj,last,return )

::cpp::VirtualArray FlxArrayUtil_obj::safePush(::cpp::VirtualArray array, ::Dynamic element){
            	HX_STACKFRAME(&_hx_pos_80883519d7ae1644_167_safePush)
HXLINE( 168)		if (::hx::IsNull( array )) {
HXLINE( 169)			array = ::cpp::VirtualArray_obj::__new(0);
            		}
HXLINE( 170)		array->push(element);
HXLINE( 171)		return array;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxArrayUtil_obj,safePush,return )

bool FlxArrayUtil_obj::contains(::cpp::VirtualArray array, ::Dynamic element){
            	HX_STACKFRAME(&_hx_pos_80883519d7ae1644_176_contains)
HXDLIN( 176)		return (array->indexOf(element,null()) != -1);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxArrayUtil_obj,contains,return )


FlxArrayUtil_obj::FlxArrayUtil_obj()
{
}

bool FlxArrayUtil_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"last") ) { outValue = last_dyn(); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"equals") ) { outValue = equals_dyn(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"safePush") ) { outValue = safePush_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"contains") ) { outValue = contains_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"clearArray") ) { outValue = clearArray_dyn(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"setLength_Int") ) { outValue = setLength_Int_dyn(); return true; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"flatten2DArray_Int") ) { outValue = flatten2DArray_Int_dyn(); return true; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"setLength_cacheValue_T") ) { outValue = setLength_cacheValue_T_dyn(); return true; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"swapAndPop_fastSplice_T") ) { outValue = swapAndPop_fastSplice_T_dyn(); return true; }
		break;
	case 31:
		if (HX_FIELD_EQ(inName,"fastSplice_flixel_util_FlxTimer") ) { outValue = fastSplice_flixel_util_FlxTimer_dyn(); return true; }
		break;
	case 33:
		if (HX_FIELD_EQ(inName,"fastSplice_flixel_tweens_FlxTween") ) { outValue = fastSplice_flixel_tweens_FlxTween_dyn(); return true; }
		break;
	case 38:
		if (HX_FIELD_EQ(inName,"setLength_flixel_group_FlxTypedGroup_T") ) { outValue = setLength_flixel_group_FlxTypedGroup_T_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *FlxArrayUtil_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *FlxArrayUtil_obj_sStaticStorageInfo = 0;
#endif

::hx::Class FlxArrayUtil_obj::__mClass;

static ::String FlxArrayUtil_obj_sStaticFields[] = {
	HX_("setLength_Int",f8,47,06,cb),
	HX_("flatten2DArray_Int",73,84,55,08),
	HX_("setLength_cacheValue_T",5b,da,87,71),
	HX_("fastSplice_flixel_tweens_FlxTween",b4,8d,a9,b9),
	HX_("fastSplice_flixel_util_FlxTimer",74,8a,94,6f),
	HX_("swapAndPop_fastSplice_T",1f,43,97,d1),
	HX_("setLength_flixel_group_FlxTypedGroup_T",50,1a,e2,41),
	HX_("clearArray",cc,ac,99,fa),
	HX_("equals",3f,ee,f2,bf),
	HX_("last",56,0a,ad,47),
	HX_("safePush",c7,e5,64,98),
	HX_("contains",1f,5a,7b,2c),
	::String(null())
};

void FlxArrayUtil_obj::__register()
{
	FlxArrayUtil_obj _hx_dummy;
	FlxArrayUtil_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.util.FlxArrayUtil",e3,4c,85,6b);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &FlxArrayUtil_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(FlxArrayUtil_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< FlxArrayUtil_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxArrayUtil_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxArrayUtil_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace util
