// Generated by Haxe 4.2.2
#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_lime_app__Event_Void_Void
#include <lime/app/_Event_Void_Void.h>
#endif
#ifndef INCLUDED_lime_math_Vector4
#include <lime/math/Vector4.h>
#endif
#ifndef INCLUDED_lime_media_AudioSource
#include <lime/media/AudioSource.h>
#endif
#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_media_SoundChannel
#include <openfl/media/SoundChannel.h>
#endif
#ifndef INCLUDED_openfl_media_SoundMixer
#include <openfl/media/SoundMixer.h>
#endif
#ifndef INCLUDED_openfl_media_SoundTransform
#include <openfl/media/SoundTransform.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_3e0758e1dc9f2fd3_84_new,"openfl.media.SoundChannel","new",0xfc94e2ae,"openfl.media.SoundChannel.new","openfl/media/SoundChannel.hx",84,0xa4290000)
HX_LOCAL_STACK_FRAME(_hx_pos_3e0758e1dc9f2fd3_117_stop,"openfl.media.SoundChannel","stop",0x090ae1f4,"openfl.media.SoundChannel.stop","openfl/media/SoundChannel.hx",117,0xa4290000)
HX_LOCAL_STACK_FRAME(_hx_pos_3e0758e1dc9f2fd3_129___dispose,"openfl.media.SoundChannel","__dispose",0x8d7f924d,"openfl.media.SoundChannel.__dispose","openfl/media/SoundChannel.hx",129,0xa4290000)
HX_LOCAL_STACK_FRAME(_hx_pos_3e0758e1dc9f2fd3_142___updateTransform,"openfl.media.SoundChannel","__updateTransform",0xba5f6dd1,"openfl.media.SoundChannel.__updateTransform","openfl/media/SoundChannel.hx",142,0xa4290000)
HX_LOCAL_STACK_FRAME(_hx_pos_3e0758e1dc9f2fd3_147_get_position,"openfl.media.SoundChannel","get_position",0x46d188a4,"openfl.media.SoundChannel.get_position","openfl/media/SoundChannel.hx",147,0xa4290000)
HX_LOCAL_STACK_FRAME(_hx_pos_3e0758e1dc9f2fd3_158_set_position,"openfl.media.SoundChannel","set_position",0x5bcaac18,"openfl.media.SoundChannel.set_position","openfl/media/SoundChannel.hx",158,0xa4290000)
HX_LOCAL_STACK_FRAME(_hx_pos_3e0758e1dc9f2fd3_169_get_soundTransform,"openfl.media.SoundChannel","get_soundTransform",0xc6e884d8,"openfl.media.SoundChannel.get_soundTransform","openfl/media/SoundChannel.hx",169,0xa4290000)
HX_LOCAL_STACK_FRAME(_hx_pos_3e0758e1dc9f2fd3_173_set_soundTransform,"openfl.media.SoundChannel","set_soundTransform",0xa397b74c,"openfl.media.SoundChannel.set_soundTransform","openfl/media/SoundChannel.hx",173,0xa4290000)
HX_LOCAL_STACK_FRAME(_hx_pos_3e0758e1dc9f2fd3_206_source_onComplete,"openfl.media.SoundChannel","source_onComplete",0xb57ef7ea,"openfl.media.SoundChannel.source_onComplete","openfl/media/SoundChannel.hx",206,0xa4290000)
namespace openfl{
namespace media{

void SoundChannel_obj::__construct( ::lime::media::AudioSource source, ::openfl::media::SoundTransform soundTransform){
            	HX_GC_STACKFRAME(&_hx_pos_3e0758e1dc9f2fd3_84_new)
HXLINE(  85)		super::__construct(::hx::ObjectPtr<OBJ_>(this));
HXLINE(  87)		this->leftPeak = ( (Float)(1) );
HXLINE(  88)		this->rightPeak = ( (Float)(1) );
HXLINE(  90)		if (::hx::IsNotNull( soundTransform )) {
HXLINE(  92)			this->_hx___soundTransform = soundTransform;
            		}
            		else {
HXLINE(  96)			this->_hx___soundTransform =  ::openfl::media::SoundTransform_obj::__alloc( HX_CTX ,null(),null());
            		}
HXLINE( 100)		if (::hx::IsNotNull( source )) {
HXLINE( 102)			this->_hx___source = source;
HXLINE( 103)			this->_hx___source->onComplete->add(this->source_onComplete_dyn(),null(),null());
HXLINE( 104)			this->_hx___isValid = true;
HXLINE( 106)			this->_hx___source->play();
            		}
HXLINE( 110)		::openfl::media::SoundMixer_obj::_hx___registerSoundChannel(::hx::ObjectPtr<OBJ_>(this));
            	}

Dynamic SoundChannel_obj::__CreateEmpty() { return new SoundChannel_obj; }

void *SoundChannel_obj::_hx_vtable = 0;

Dynamic SoundChannel_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< SoundChannel_obj > _hx_result = new SoundChannel_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool SoundChannel_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x0c89e854) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x0c89e854;
	} else {
		return inClassId==(int)0x1a2cc6bc;
	}
}

void SoundChannel_obj::stop(){
            	HX_STACKFRAME(&_hx_pos_3e0758e1dc9f2fd3_117_stop)
HXLINE( 118)		::openfl::media::SoundMixer_obj::_hx___unregisterSoundChannel(::hx::ObjectPtr<OBJ_>(this));
HXLINE( 120)		if (!(this->_hx___isValid)) {
HXLINE( 120)			return;
            		}
HXLINE( 123)		this->_hx___source->stop();
HXLINE( 125)		this->_hx___dispose();
            	}


HX_DEFINE_DYNAMIC_FUNC0(SoundChannel_obj,stop,(void))

void SoundChannel_obj::_hx___dispose(){
            	HX_STACKFRAME(&_hx_pos_3e0758e1dc9f2fd3_129___dispose)
HXLINE( 130)		if (!(this->_hx___isValid)) {
HXLINE( 130)			return;
            		}
HXLINE( 133)		this->_hx___source->onComplete->remove(this->source_onComplete_dyn());
HXLINE( 134)		this->_hx___source->dispose();
HXLINE( 135)		this->_hx___source = null();
HXLINE( 137)		this->_hx___isValid = false;
            	}


HX_DEFINE_DYNAMIC_FUNC0(SoundChannel_obj,_hx___dispose,(void))

void SoundChannel_obj::_hx___updateTransform(){
            	HX_STACKFRAME(&_hx_pos_3e0758e1dc9f2fd3_142___updateTransform)
HXDLIN( 142)		this->set_soundTransform(this->get_soundTransform());
            	}


HX_DEFINE_DYNAMIC_FUNC0(SoundChannel_obj,_hx___updateTransform,(void))

Float SoundChannel_obj::get_position(){
            	HX_STACKFRAME(&_hx_pos_3e0758e1dc9f2fd3_147_get_position)
HXLINE( 148)		if (!(this->_hx___isValid)) {
HXLINE( 148)			return ( (Float)(0) );
            		}
HXLINE( 151)		int _hx_tmp = this->_hx___source->get_currentTime();
HXDLIN( 151)		return ( (Float)((_hx_tmp + this->_hx___source->offset)) );
            	}


HX_DEFINE_DYNAMIC_FUNC0(SoundChannel_obj,get_position,return )

Float SoundChannel_obj::set_position(Float value){
            	HX_STACKFRAME(&_hx_pos_3e0758e1dc9f2fd3_158_set_position)
HXLINE( 159)		if (!(this->_hx___isValid)) {
HXLINE( 159)			return ( (Float)(0) );
            		}
HXLINE( 162)		 ::lime::media::AudioSource _hx_tmp = this->_hx___source;
HXDLIN( 162)		int _hx_tmp1 = ::Std_obj::_hx_int(value);
HXDLIN( 162)		_hx_tmp->set_currentTime((_hx_tmp1 - this->_hx___source->offset));
HXLINE( 164)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(SoundChannel_obj,set_position,return )

 ::openfl::media::SoundTransform SoundChannel_obj::get_soundTransform(){
            	HX_STACKFRAME(&_hx_pos_3e0758e1dc9f2fd3_169_get_soundTransform)
HXDLIN( 169)		return this->_hx___soundTransform->clone();
            	}


HX_DEFINE_DYNAMIC_FUNC0(SoundChannel_obj,get_soundTransform,return )

 ::openfl::media::SoundTransform SoundChannel_obj::set_soundTransform( ::openfl::media::SoundTransform value){
            	HX_STACKFRAME(&_hx_pos_3e0758e1dc9f2fd3_173_set_soundTransform)
HXLINE( 174)		if (::hx::IsNotNull( value )) {
HXLINE( 176)			this->_hx___soundTransform->pan = value->pan;
HXLINE( 177)			this->_hx___soundTransform->volume = value->volume;
HXLINE( 179)			Float pan = (::openfl::media::SoundMixer_obj::_hx___soundTransform->pan + this->_hx___soundTransform->pan);
HXLINE( 181)			if ((pan < -1)) {
HXLINE( 181)				pan = ( (Float)(-1) );
            			}
HXLINE( 182)			if ((pan > 1)) {
HXLINE( 182)				pan = ( (Float)(1) );
            			}
HXLINE( 184)			Float volume = (::openfl::media::SoundMixer_obj::_hx___soundTransform->volume * this->_hx___soundTransform->volume);
HXLINE( 186)			if (this->_hx___isValid) {
HXLINE( 189)				this->_hx___source->set_gain(volume);
HXLINE( 191)				 ::lime::math::Vector4 position = this->_hx___source->get_position();
HXLINE( 192)				position->x = pan;
HXLINE( 193)				position->z = (( (Float)(-1) ) * ::Math_obj::sqrt((( (Float)(1) ) - ::Math_obj::pow(pan,( (Float)(2) )))));
HXLINE( 194)				this->_hx___source->set_position(position);
HXLINE( 196)				return value;
            			}
            		}
HXLINE( 201)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(SoundChannel_obj,set_soundTransform,return )

void SoundChannel_obj::source_onComplete(){
            	HX_GC_STACKFRAME(&_hx_pos_3e0758e1dc9f2fd3_206_source_onComplete)
HXLINE( 207)		::openfl::media::SoundMixer_obj::_hx___unregisterSoundChannel(::hx::ObjectPtr<OBJ_>(this));
HXLINE( 209)		this->_hx___dispose();
HXLINE( 210)		this->dispatchEvent( ::openfl::events::Event_obj::__alloc( HX_CTX ,HX_("soundComplete",a8,30,e6,1c),null(),null()));
            	}


HX_DEFINE_DYNAMIC_FUNC0(SoundChannel_obj,source_onComplete,(void))


::hx::ObjectPtr< SoundChannel_obj > SoundChannel_obj::__new( ::lime::media::AudioSource source, ::openfl::media::SoundTransform soundTransform) {
	::hx::ObjectPtr< SoundChannel_obj > __this = new SoundChannel_obj();
	__this->__construct(source,soundTransform);
	return __this;
}

::hx::ObjectPtr< SoundChannel_obj > SoundChannel_obj::__alloc(::hx::Ctx *_hx_ctx, ::lime::media::AudioSource source, ::openfl::media::SoundTransform soundTransform) {
	SoundChannel_obj *__this = (SoundChannel_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(SoundChannel_obj), true, "openfl.media.SoundChannel"));
	*(void **)__this = SoundChannel_obj::_hx_vtable;
	__this->__construct(source,soundTransform);
	return __this;
}

SoundChannel_obj::SoundChannel_obj()
{
}

void SoundChannel_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(SoundChannel);
	HX_MARK_MEMBER_NAME(leftPeak,"leftPeak");
	HX_MARK_MEMBER_NAME(rightPeak,"rightPeak");
	HX_MARK_MEMBER_NAME(_hx___isValid,"__isValid");
	HX_MARK_MEMBER_NAME(_hx___soundTransform,"__soundTransform");
	HX_MARK_MEMBER_NAME(_hx___source,"__source");
	 ::openfl::events::EventDispatcher_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void SoundChannel_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(leftPeak,"leftPeak");
	HX_VISIT_MEMBER_NAME(rightPeak,"rightPeak");
	HX_VISIT_MEMBER_NAME(_hx___isValid,"__isValid");
	HX_VISIT_MEMBER_NAME(_hx___soundTransform,"__soundTransform");
	HX_VISIT_MEMBER_NAME(_hx___source,"__source");
	 ::openfl::events::EventDispatcher_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val SoundChannel_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"stop") ) { return ::hx::Val( stop_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"leftPeak") ) { return ::hx::Val( leftPeak ); }
		if (HX_FIELD_EQ(inName,"position") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_position() ); }
		if (HX_FIELD_EQ(inName,"__source") ) { return ::hx::Val( _hx___source ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"rightPeak") ) { return ::hx::Val( rightPeak ); }
		if (HX_FIELD_EQ(inName,"__isValid") ) { return ::hx::Val( _hx___isValid ); }
		if (HX_FIELD_EQ(inName,"__dispose") ) { return ::hx::Val( _hx___dispose_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_position") ) { return ::hx::Val( get_position_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_position") ) { return ::hx::Val( set_position_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"soundTransform") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_soundTransform() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"__soundTransform") ) { return ::hx::Val( _hx___soundTransform ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"__updateTransform") ) { return ::hx::Val( _hx___updateTransform_dyn() ); }
		if (HX_FIELD_EQ(inName,"source_onComplete") ) { return ::hx::Val( source_onComplete_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"get_soundTransform") ) { return ::hx::Val( get_soundTransform_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_soundTransform") ) { return ::hx::Val( set_soundTransform_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val SoundChannel_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"leftPeak") ) { leftPeak=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"position") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_position(inValue.Cast< Float >()) ); }
		if (HX_FIELD_EQ(inName,"__source") ) { _hx___source=inValue.Cast<  ::lime::media::AudioSource >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"rightPeak") ) { rightPeak=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__isValid") ) { _hx___isValid=inValue.Cast< bool >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"soundTransform") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_soundTransform(inValue.Cast<  ::openfl::media::SoundTransform >()) ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"__soundTransform") ) { _hx___soundTransform=inValue.Cast<  ::openfl::media::SoundTransform >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void SoundChannel_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("leftPeak",c6,21,50,51));
	outFields->push(HX_("position",a9,a0,fa,ca));
	outFields->push(HX_("rightPeak",1b,34,1b,b5));
	outFields->push(HX_("soundTransform",9d,ee,de,22));
	outFields->push(HX_("__isValid",92,69,8c,4f));
	outFields->push(HX_("__soundTransform",bd,79,1e,57));
	outFields->push(HX_("__source",fb,1b,61,da));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo SoundChannel_obj_sMemberStorageInfo[] = {
	{::hx::fsFloat,(int)offsetof(SoundChannel_obj,leftPeak),HX_("leftPeak",c6,21,50,51)},
	{::hx::fsFloat,(int)offsetof(SoundChannel_obj,rightPeak),HX_("rightPeak",1b,34,1b,b5)},
	{::hx::fsBool,(int)offsetof(SoundChannel_obj,_hx___isValid),HX_("__isValid",92,69,8c,4f)},
	{::hx::fsObject /*  ::openfl::media::SoundTransform */ ,(int)offsetof(SoundChannel_obj,_hx___soundTransform),HX_("__soundTransform",bd,79,1e,57)},
	{::hx::fsObject /*  ::lime::media::AudioSource */ ,(int)offsetof(SoundChannel_obj,_hx___source),HX_("__source",fb,1b,61,da)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *SoundChannel_obj_sStaticStorageInfo = 0;
#endif

static ::String SoundChannel_obj_sMemberFields[] = {
	HX_("leftPeak",c6,21,50,51),
	HX_("rightPeak",1b,34,1b,b5),
	HX_("__isValid",92,69,8c,4f),
	HX_("__soundTransform",bd,79,1e,57),
	HX_("__source",fb,1b,61,da),
	HX_("stop",02,f0,5b,4c),
	HX_("__dispose",7f,d1,9a,3c),
	HX_("__updateTransform",03,2f,78,18),
	HX_("get_position",b2,54,14,80),
	HX_("set_position",26,78,0d,95),
	HX_("get_soundTransform",66,cf,78,be),
	HX_("set_soundTransform",da,01,28,9b),
	HX_("source_onComplete",1c,b9,97,13),
	::String(null()) };

::hx::Class SoundChannel_obj::__mClass;

void SoundChannel_obj::__register()
{
	SoundChannel_obj _hx_dummy;
	SoundChannel_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("openfl.media.SoundChannel",bc,b3,ae,75);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(SoundChannel_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< SoundChannel_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = SoundChannel_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = SoundChannel_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace media
