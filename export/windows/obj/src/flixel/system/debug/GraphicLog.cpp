// Generated by Haxe 4.3.4
#include <hxcpp.h>

#ifndef INCLUDED_flixel_system_debug_GraphicLog
#include <flixel/system/debug/GraphicLog.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_57449aee0c72ca19_36_new,"flixel.system.debug.GraphicLog","new",0x6b03d456,"flixel.system.debug.GraphicLog.new","flixel/system/debug/FlxDebugger.hx",36,0xd9fc0a74)
namespace flixel{
namespace _hx_system{
namespace debug{

void GraphicLog_obj::__construct(int width,int height, ::Dynamic transparent, ::Dynamic fillColor){
            	HX_STACKFRAME(&_hx_pos_57449aee0c72ca19_36_new)
HXDLIN(  36)		super::__construct(width,height,transparent,fillColor);
            	}

Dynamic GraphicLog_obj::__CreateEmpty() { return new GraphicLog_obj; }

void *GraphicLog_obj::_hx_vtable = 0;

Dynamic GraphicLog_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< GraphicLog_obj > _hx_result = new GraphicLog_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _hx_result;
}

bool GraphicLog_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x073e5103) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x073e5103;
	} else {
		return inClassId==(int)0x1c2d25fc;
	}
}


::hx::ObjectPtr< GraphicLog_obj > GraphicLog_obj::__new(int width,int height, ::Dynamic transparent, ::Dynamic fillColor) {
	::hx::ObjectPtr< GraphicLog_obj > __this = new GraphicLog_obj();
	__this->__construct(width,height,transparent,fillColor);
	return __this;
}

::hx::ObjectPtr< GraphicLog_obj > GraphicLog_obj::__alloc(::hx::Ctx *_hx_ctx,int width,int height, ::Dynamic transparent, ::Dynamic fillColor) {
	GraphicLog_obj *__this = (GraphicLog_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(GraphicLog_obj), true, "flixel.system.debug.GraphicLog"));
	*(void **)__this = GraphicLog_obj::_hx_vtable;
	__this->__construct(width,height,transparent,fillColor);
	return __this;
}

GraphicLog_obj::GraphicLog_obj()
{
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *GraphicLog_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *GraphicLog_obj_sStaticStorageInfo = 0;
#endif

::hx::Class GraphicLog_obj::__mClass;

void GraphicLog_obj::__register()
{
	GraphicLog_obj _hx_dummy;
	GraphicLog_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.system.debug.GraphicLog",64,b1,09,13);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< GraphicLog_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = GraphicLog_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = GraphicLog_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace system
} // end namespace debug
