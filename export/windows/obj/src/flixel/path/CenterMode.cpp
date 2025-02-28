// Generated by Haxe 4.3.4
#include <hxcpp.h>

#ifndef INCLUDED_flixel_math_FlxBasePoint
#include <flixel/math/FlxBasePoint.h>
#endif
#ifndef INCLUDED_flixel_path_CenterMode
#include <flixel/path/CenterMode.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
namespace flixel{
namespace path{

::flixel::path::CenterMode CenterMode_obj::CENTER;

::flixel::path::CenterMode CenterMode_obj::CUSTOM( ::flixel::math::FlxBasePoint offset)
{
	return ::hx::CreateEnum< CenterMode_obj >(HX_("CUSTOM",b1,33,15,f2),3,1)->_hx_init(0,offset);
}

::flixel::path::CenterMode CenterMode_obj::ORIGIN;

::flixel::path::CenterMode CenterMode_obj::TOP_LEFT;

bool CenterMode_obj::__GetStatic(const ::String &inName, ::Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("CENTER",d5,d1,5d,b8)) { outValue = CenterMode_obj::CENTER; return true; }
	if (inName==HX_("CUSTOM",b1,33,15,f2)) { outValue = CenterMode_obj::CUSTOM_dyn(); return true; }
	if (inName==HX_("ORIGIN",e6,c5,83,fd)) { outValue = CenterMode_obj::ORIGIN; return true; }
	if (inName==HX_("TOP_LEFT",51,e1,bb,7b)) { outValue = CenterMode_obj::TOP_LEFT; return true; }
	return super::__GetStatic(inName, outValue, inCallProp);
}

HX_DEFINE_CREATE_ENUM(CenterMode_obj)

int CenterMode_obj::__FindIndex(::String inName)
{
	if (inName==HX_("CENTER",d5,d1,5d,b8)) return 1;
	if (inName==HX_("CUSTOM",b1,33,15,f2)) return 3;
	if (inName==HX_("ORIGIN",e6,c5,83,fd)) return 2;
	if (inName==HX_("TOP_LEFT",51,e1,bb,7b)) return 0;
	return super::__FindIndex(inName);
}

STATIC_HX_DEFINE_DYNAMIC_FUNC1(CenterMode_obj,CUSTOM,return)

int CenterMode_obj::__FindArgCount(::String inName)
{
	if (inName==HX_("CENTER",d5,d1,5d,b8)) return 0;
	if (inName==HX_("CUSTOM",b1,33,15,f2)) return 1;
	if (inName==HX_("ORIGIN",e6,c5,83,fd)) return 0;
	if (inName==HX_("TOP_LEFT",51,e1,bb,7b)) return 0;
	return super::__FindArgCount(inName);
}

::hx::Val CenterMode_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("CENTER",d5,d1,5d,b8)) return CENTER;
	if (inName==HX_("CUSTOM",b1,33,15,f2)) return CUSTOM_dyn();
	if (inName==HX_("ORIGIN",e6,c5,83,fd)) return ORIGIN;
	if (inName==HX_("TOP_LEFT",51,e1,bb,7b)) return TOP_LEFT;
	return super::__Field(inName,inCallProp);
}

static ::String CenterMode_obj_sStaticFields[] = {
	HX_("TOP_LEFT",51,e1,bb,7b),
	HX_("CENTER",d5,d1,5d,b8),
	HX_("ORIGIN",e6,c5,83,fd),
	HX_("CUSTOM",b1,33,15,f2),
	::String(null())
};

::hx::Class CenterMode_obj::__mClass;

Dynamic __Create_CenterMode_obj() { return new CenterMode_obj; }

void CenterMode_obj::__register()
{

::hx::Static(__mClass) = ::hx::_hx_RegisterClass(HX_("flixel.path.CenterMode",0f,7e,a8,6f), ::hx::TCanCast< CenterMode_obj >,CenterMode_obj_sStaticFields,0,
	&__Create_CenterMode_obj, &__Create,
	&super::__SGetClass(), &CreateCenterMode_obj, 0
#ifdef HXCPP_VISIT_ALLOCS
    , 0
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
	__mClass->mGetStaticField = &CenterMode_obj::__GetStatic;
}

void CenterMode_obj::__boot()
{
CENTER = ::hx::CreateConstEnum< CenterMode_obj >(HX_("CENTER",d5,d1,5d,b8),1);
ORIGIN = ::hx::CreateConstEnum< CenterMode_obj >(HX_("ORIGIN",e6,c5,83,fd),2);
TOP_LEFT = ::hx::CreateConstEnum< CenterMode_obj >(HX_("TOP_LEFT",51,e1,bb,7b),0);
}


} // end namespace flixel
} // end namespace path
