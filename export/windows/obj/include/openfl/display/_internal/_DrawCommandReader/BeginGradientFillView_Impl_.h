// Generated by Haxe 4.3.4
#ifndef INCLUDED_openfl_display__internal__DrawCommandReader_BeginGradientFillView_Impl_
#define INCLUDED_openfl_display__internal__DrawCommandReader_BeginGradientFillView_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(openfl,display,_internal,DrawCommandReader)
HX_DECLARE_CLASS4(openfl,display,_internal,_DrawCommandReader,BeginGradientFillView_Impl_)
HX_DECLARE_CLASS2(openfl,geom,Matrix)

namespace openfl{
namespace display{
namespace _internal{
namespace _DrawCommandReader{


class HXCPP_CLASS_ATTRIBUTES BeginGradientFillView_Impl__obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef BeginGradientFillView_Impl__obj OBJ_;
		BeginGradientFillView_Impl__obj();

	public:
		enum { _hx_ClassId = 0x6e1963e4 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="openfl.display._internal._DrawCommandReader.BeginGradientFillView_Impl_")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"openfl.display._internal._DrawCommandReader.BeginGradientFillView_Impl_"); }

		inline static ::hx::ObjectPtr< BeginGradientFillView_Impl__obj > __new() {
			::hx::ObjectPtr< BeginGradientFillView_Impl__obj > __this = new BeginGradientFillView_Impl__obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< BeginGradientFillView_Impl__obj > __alloc(::hx::Ctx *_hx_ctx) {
			BeginGradientFillView_Impl__obj *__this = (BeginGradientFillView_Impl__obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(BeginGradientFillView_Impl__obj), false, "openfl.display._internal._DrawCommandReader.BeginGradientFillView_Impl_"));
			*(void **)__this = BeginGradientFillView_Impl__obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~BeginGradientFillView_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("BeginGradientFillView_Impl_",21,ec,2f,ff); }

		static  ::openfl::display::_internal::DrawCommandReader _new( ::openfl::display::_internal::DrawCommandReader d);
		static ::Dynamic _new_dyn();

		static  ::Dynamic get_type( ::openfl::display::_internal::DrawCommandReader this1);
		static ::Dynamic get_type_dyn();

		static ::Array< int > get_colors( ::openfl::display::_internal::DrawCommandReader this1);
		static ::Dynamic get_colors_dyn();

		static ::Array< Float > get_alphas( ::openfl::display::_internal::DrawCommandReader this1);
		static ::Dynamic get_alphas_dyn();

		static ::Array< int > get_ratios( ::openfl::display::_internal::DrawCommandReader this1);
		static ::Dynamic get_ratios_dyn();

		static  ::openfl::geom::Matrix get_matrix( ::openfl::display::_internal::DrawCommandReader this1);
		static ::Dynamic get_matrix_dyn();

		static  ::Dynamic get_spreadMethod( ::openfl::display::_internal::DrawCommandReader this1);
		static ::Dynamic get_spreadMethod_dyn();

		static  ::Dynamic get_interpolationMethod( ::openfl::display::_internal::DrawCommandReader this1);
		static ::Dynamic get_interpolationMethod_dyn();

		static Float get_focalPointRatio( ::openfl::display::_internal::DrawCommandReader this1);
		static ::Dynamic get_focalPointRatio_dyn();

};

} // end namespace openfl
} // end namespace display
} // end namespace _internal
} // end namespace _DrawCommandReader

#endif /* INCLUDED_openfl_display__internal__DrawCommandReader_BeginGradientFillView_Impl_ */ 
