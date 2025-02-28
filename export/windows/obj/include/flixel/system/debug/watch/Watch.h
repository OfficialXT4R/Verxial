// Generated by Haxe 4.3.4
#ifndef INCLUDED_flixel_system_debug_watch_Watch
#define INCLUDED_flixel_system_debug_watch_Watch

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_system_debug_Window
#include <flixel/system/debug/Window.h>
#endif
HX_DECLARE_CLASS3(flixel,_hx_system,debug,Window)
HX_DECLARE_CLASS4(flixel,_hx_system,debug,watch,Watch)
HX_DECLARE_CLASS2(openfl,display,BitmapData)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,Sprite)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,geom,Rectangle)

namespace flixel{
namespace _hx_system{
namespace debug{
namespace watch{


class HXCPP_CLASS_ATTRIBUTES Watch_obj : public  ::flixel::_hx_system::debug::Window_obj
{
	public:
		typedef  ::flixel::_hx_system::debug::Window_obj super;
		typedef Watch_obj OBJ_;
		Watch_obj();

	public:
		enum { _hx_ClassId = 0x5ad89704 };

		void __construct(::String Title, ::openfl::display::BitmapData Icon, ::Dynamic Width, ::Dynamic Height, ::Dynamic Resizable, ::openfl::geom::Rectangle Bounds, ::Dynamic Closable, ::Dynamic AlwaysOnTop);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="flixel.system.debug.watch.Watch")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"flixel.system.debug.watch.Watch"); }
		static ::hx::ObjectPtr< Watch_obj > __new(::String Title, ::openfl::display::BitmapData Icon, ::Dynamic Width, ::Dynamic Height, ::Dynamic Resizable, ::openfl::geom::Rectangle Bounds, ::Dynamic Closable, ::Dynamic AlwaysOnTop);
		static ::hx::ObjectPtr< Watch_obj > __alloc(::hx::Ctx *_hx_ctx,::String Title, ::openfl::display::BitmapData Icon, ::Dynamic Width, ::Dynamic Height, ::Dynamic Resizable, ::openfl::geom::Rectangle Bounds, ::Dynamic Closable, ::Dynamic AlwaysOnTop);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Watch_obj();

		HX_DO_RTTI_ALL;
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Watch",2f,86,52,58); }

};

} // end namespace flixel
} // end namespace system
} // end namespace debug
} // end namespace watch

#endif /* INCLUDED_flixel_system_debug_watch_Watch */ 
