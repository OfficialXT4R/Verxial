// Generated by Haxe 4.3.4
#ifndef INCLUDED_flixel_system_debug__FlxDebugger_GraphicFlixel
#define INCLUDED_flixel_system_debug__FlxDebugger_GraphicFlixel

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
HX_DECLARE_CLASS4(flixel,_hx_system,debug,_FlxDebugger,GraphicFlixel)
HX_DECLARE_CLASS2(openfl,display,BitmapData)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)

namespace flixel{
namespace _hx_system{
namespace debug{
namespace _FlxDebugger{


class HXCPP_CLASS_ATTRIBUTES GraphicFlixel_obj : public  ::openfl::display::BitmapData_obj
{
	public:
		typedef  ::openfl::display::BitmapData_obj super;
		typedef GraphicFlixel_obj OBJ_;
		GraphicFlixel_obj();

	public:
		enum { _hx_ClassId = 0x3638ee48 };

		void __construct(int width,int height, ::Dynamic transparent, ::Dynamic fillColor);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="flixel.system.debug._FlxDebugger.GraphicFlixel")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"flixel.system.debug._FlxDebugger.GraphicFlixel"); }
		static ::hx::ObjectPtr< GraphicFlixel_obj > __new(int width,int height, ::Dynamic transparent, ::Dynamic fillColor);
		static ::hx::ObjectPtr< GraphicFlixel_obj > __alloc(::hx::Ctx *_hx_ctx,int width,int height, ::Dynamic transparent, ::Dynamic fillColor);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~GraphicFlixel_obj();

		HX_DO_RTTI_ALL;
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("GraphicFlixel",04,cf,11,43); }

};

} // end namespace flixel
} // end namespace system
} // end namespace debug
} // end namespace _FlxDebugger

#endif /* INCLUDED_flixel_system_debug__FlxDebugger_GraphicFlixel */ 
