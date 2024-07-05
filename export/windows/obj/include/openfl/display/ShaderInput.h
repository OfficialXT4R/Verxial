// Generated by Haxe 4.3.4
#ifndef INCLUDED_openfl_display_ShaderInput
#define INCLUDED_openfl_display_ShaderInput

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(openfl,display,ShaderInput)
HX_DECLARE_CLASS2(openfl,display3D,Context3D)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)

namespace openfl{
namespace display{


class HXCPP_CLASS_ATTRIBUTES ShaderInput_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef ShaderInput_obj OBJ_;
		ShaderInput_obj();

	public:
		enum { _hx_ClassId = 0x1dc192e3 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="openfl.display.ShaderInput")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"openfl.display.ShaderInput"); }
		static ::hx::ObjectPtr< ShaderInput_obj > __new();
		static ::hx::ObjectPtr< ShaderInput_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~ShaderInput_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("ShaderInput",85,06,7d,79); }

		static void __boot();
		static  ::Dynamic __meta__;
		int channels;
		 ::Dynamic filter;
		int height;
		 ::Dynamic index;
		 ::Dynamic input;
		 ::Dynamic mipFilter;
		::String name;
		int width;
		 ::Dynamic wrap;
		bool _hx___isUniform;
		void _hx___disableGL( ::openfl::display3D::Context3D context,int id);
		::Dynamic _hx___disableGL_dyn();

		void _hx___updateGL( ::openfl::display3D::Context3D context,int id, ::Dynamic overrideInput, ::Dynamic overrideFilter, ::Dynamic overrideMipFilter, ::Dynamic overrideWrap);
		::Dynamic _hx___updateGL_dyn();

};

} // end namespace openfl
} // end namespace display

#endif /* INCLUDED_openfl_display_ShaderInput */ 
