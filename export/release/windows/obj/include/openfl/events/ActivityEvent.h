// Generated by Haxe 4.2.2
#ifndef INCLUDED_openfl_events_ActivityEvent
#define INCLUDED_openfl_events_ActivityEvent

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
#endif
HX_DECLARE_CLASS2(openfl,events,ActivityEvent)
HX_DECLARE_CLASS2(openfl,events,Event)

namespace openfl{
namespace events{


class HXCPP_CLASS_ATTRIBUTES ActivityEvent_obj : public  ::openfl::events::Event_obj
{
	public:
		typedef  ::openfl::events::Event_obj super;
		typedef ActivityEvent_obj OBJ_;
		ActivityEvent_obj();

	public:
		enum { _hx_ClassId = 0x11188ee2 };

		void __construct(::String type,::hx::Null< bool >  __o_bubbles,::hx::Null< bool >  __o_cancelable,::hx::Null< bool >  __o_activating);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="openfl.events.ActivityEvent")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"openfl.events.ActivityEvent"); }
		static ::hx::ObjectPtr< ActivityEvent_obj > __new(::String type,::hx::Null< bool >  __o_bubbles,::hx::Null< bool >  __o_cancelable,::hx::Null< bool >  __o_activating);
		static ::hx::ObjectPtr< ActivityEvent_obj > __alloc(::hx::Ctx *_hx_ctx,::String type,::hx::Null< bool >  __o_bubbles,::hx::Null< bool >  __o_cancelable,::hx::Null< bool >  __o_activating);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~ActivityEvent_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("ActivityEvent",ab,eb,0c,59); }

		static void __boot();
		static ::String ACTIVITY;
		bool activating;
		virtual  ::openfl::events::Event clone();

		virtual ::String toString();

		virtual void _hx___init();

};

} // end namespace openfl
} // end namespace events

#endif /* INCLUDED_openfl_events_ActivityEvent */ 
