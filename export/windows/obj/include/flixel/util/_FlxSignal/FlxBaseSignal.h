// Generated by Haxe 4.3.4
#ifndef INCLUDED_flixel_util__FlxSignal_FlxBaseSignal
#define INCLUDED_flixel_util__FlxSignal_FlxBaseSignal

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_util_IFlxSignal
#include <flixel/util/IFlxSignal.h>
#endif
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,util,IFlxSignal)
HX_DECLARE_CLASS3(flixel,util,_FlxSignal,FlxBaseSignal)
HX_DECLARE_CLASS3(flixel,util,_FlxSignal,FlxSignalHandler)

namespace flixel{
namespace util{
namespace _FlxSignal{


class HXCPP_CLASS_ATTRIBUTES FlxBaseSignal_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef FlxBaseSignal_obj OBJ_;
		FlxBaseSignal_obj();

	public:
		enum { _hx_ClassId = 0x4515ccf2 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="flixel.util._FlxSignal.FlxBaseSignal")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"flixel.util._FlxSignal.FlxBaseSignal"); }
		static ::hx::ObjectPtr< FlxBaseSignal_obj > __new();
		static ::hx::ObjectPtr< FlxBaseSignal_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~FlxBaseSignal_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		void *_hx_getInterface(int inHash);
		::String __ToString() const { return HX_("FlxBaseSignal",4b,48,0e,bb); }

		 ::Dynamic dispatch;
		::Array< ::Dynamic> handlers;
		::Array< ::Dynamic> pendingRemove;
		bool processingListeners;
		void add( ::Dynamic listener);
		::Dynamic add_dyn();

		void addOnce( ::Dynamic listener);
		::Dynamic addOnce_dyn();

		void remove( ::Dynamic listener);
		::Dynamic remove_dyn();

		void removeHandler( ::flixel::util::_FlxSignal::FlxSignalHandler handler);
		::Dynamic removeHandler_dyn();

		bool has( ::Dynamic listener);
		::Dynamic has_dyn();

		void removeAll();
		::Dynamic removeAll_dyn();

		void destroy();
		::Dynamic destroy_dyn();

		 ::flixel::util::_FlxSignal::FlxSignalHandler registerListener( ::Dynamic listener,bool dispatchOnce);
		::Dynamic registerListener_dyn();

		 ::flixel::util::_FlxSignal::FlxSignalHandler getHandler( ::Dynamic listener);
		::Dynamic getHandler_dyn();

};

} // end namespace flixel
} // end namespace util
} // end namespace _FlxSignal

#endif /* INCLUDED_flixel_util__FlxSignal_FlxBaseSignal */ 
