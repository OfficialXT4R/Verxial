// Generated by Haxe 4.3.4
#include <hxcpp.h>

#ifndef INCLUDED_flixel_util__FlxDirection_FlxDirection_Impl_
#include <flixel/util/_FlxDirection/FlxDirection_Impl_.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_a372be2e16c3885e_16_toString,"flixel.util._FlxDirection.FlxDirection_Impl_","toString",0xd94b02b1,"flixel.util._FlxDirection.FlxDirection_Impl_.toString","flixel/util/FlxDirection.hx",16,0x589f1fd7)
HX_LOCAL_STACK_FRAME(_hx_pos_a372be2e16c3885e_9_boot,"flixel.util._FlxDirection.FlxDirection_Impl_","boot",0x378b0fb7,"flixel.util._FlxDirection.FlxDirection_Impl_.boot","flixel/util/FlxDirection.hx",9,0x589f1fd7)
HX_LOCAL_STACK_FRAME(_hx_pos_a372be2e16c3885e_10_boot,"flixel.util._FlxDirection.FlxDirection_Impl_","boot",0x378b0fb7,"flixel.util._FlxDirection.FlxDirection_Impl_.boot","flixel/util/FlxDirection.hx",10,0x589f1fd7)
HX_LOCAL_STACK_FRAME(_hx_pos_a372be2e16c3885e_11_boot,"flixel.util._FlxDirection.FlxDirection_Impl_","boot",0x378b0fb7,"flixel.util._FlxDirection.FlxDirection_Impl_.boot","flixel/util/FlxDirection.hx",11,0x589f1fd7)
HX_LOCAL_STACK_FRAME(_hx_pos_a372be2e16c3885e_12_boot,"flixel.util._FlxDirection.FlxDirection_Impl_","boot",0x378b0fb7,"flixel.util._FlxDirection.FlxDirection_Impl_.boot","flixel/util/FlxDirection.hx",12,0x589f1fd7)
namespace flixel{
namespace util{
namespace _FlxDirection{

void FlxDirection_Impl__obj::__construct() { }

Dynamic FlxDirection_Impl__obj::__CreateEmpty() { return new FlxDirection_Impl__obj; }

void *FlxDirection_Impl__obj::_hx_vtable = 0;

Dynamic FlxDirection_Impl__obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FlxDirection_Impl__obj > _hx_result = new FlxDirection_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool FlxDirection_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x57f41e3b;
}

int FlxDirection_Impl__obj::LEFT;

int FlxDirection_Impl__obj::RIGHT;

int FlxDirection_Impl__obj::UP;

int FlxDirection_Impl__obj::DOWN;

::String FlxDirection_Impl__obj::toString(int this1){
            	HX_STACKFRAME(&_hx_pos_a372be2e16c3885e_16_toString)
HXDLIN(  16)		switch((int)(this1)){
            			case (int)1: {
HXLINE(  18)				return HX_("L",4c,00,00,00);
            			}
            			break;
            			case (int)16: {
HXLINE(  19)				return HX_("R",52,00,00,00);
            			}
            			break;
            			case (int)256: {
HXLINE(  20)				return HX_("U",55,00,00,00);
            			}
            			break;
            			case (int)4096: {
HXLINE(  21)				return HX_("D",44,00,00,00);
            			}
            			break;
            		}
HXLINE(  16)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxDirection_Impl__obj,toString,return )


FlxDirection_Impl__obj::FlxDirection_Impl__obj()
{
}

bool FlxDirection_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { outValue = toString_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *FlxDirection_Impl__obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo FlxDirection_Impl__obj_sStaticStorageInfo[] = {
	{::hx::fsInt,(void *) &FlxDirection_Impl__obj::LEFT,HX_("LEFT",07,d0,70,32)},
	{::hx::fsInt,(void *) &FlxDirection_Impl__obj::RIGHT,HX_("RIGHT",bc,43,52,67)},
	{::hx::fsInt,(void *) &FlxDirection_Impl__obj::UP,HX_("UP",5b,4a,00,00)},
	{::hx::fsInt,(void *) &FlxDirection_Impl__obj::DOWN,HX_("DOWN",62,c0,2e,2d)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void FlxDirection_Impl__obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxDirection_Impl__obj::LEFT,"LEFT");
	HX_MARK_MEMBER_NAME(FlxDirection_Impl__obj::RIGHT,"RIGHT");
	HX_MARK_MEMBER_NAME(FlxDirection_Impl__obj::UP,"UP");
	HX_MARK_MEMBER_NAME(FlxDirection_Impl__obj::DOWN,"DOWN");
};

#ifdef HXCPP_VISIT_ALLOCS
static void FlxDirection_Impl__obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxDirection_Impl__obj::LEFT,"LEFT");
	HX_VISIT_MEMBER_NAME(FlxDirection_Impl__obj::RIGHT,"RIGHT");
	HX_VISIT_MEMBER_NAME(FlxDirection_Impl__obj::UP,"UP");
	HX_VISIT_MEMBER_NAME(FlxDirection_Impl__obj::DOWN,"DOWN");
};

#endif

::hx::Class FlxDirection_Impl__obj::__mClass;

static ::String FlxDirection_Impl__obj_sStaticFields[] = {
	HX_("LEFT",07,d0,70,32),
	HX_("RIGHT",bc,43,52,67),
	HX_("UP",5b,4a,00,00),
	HX_("DOWN",62,c0,2e,2d),
	HX_("toString",ac,d0,6e,38),
	::String(null())
};

void FlxDirection_Impl__obj::__register()
{
	FlxDirection_Impl__obj _hx_dummy;
	FlxDirection_Impl__obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.util._FlxDirection.FlxDirection_Impl_",09,83,3a,ad);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &FlxDirection_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = FlxDirection_Impl__obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(FlxDirection_Impl__obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< FlxDirection_Impl__obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = FlxDirection_Impl__obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxDirection_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxDirection_Impl__obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void FlxDirection_Impl__obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_a372be2e16c3885e_9_boot)
HXDLIN(   9)		LEFT = 1;
            	}
{
            	HX_STACKFRAME(&_hx_pos_a372be2e16c3885e_10_boot)
HXDLIN(  10)		RIGHT = 16;
            	}
{
            	HX_STACKFRAME(&_hx_pos_a372be2e16c3885e_11_boot)
HXDLIN(  11)		UP = 256;
            	}
{
            	HX_STACKFRAME(&_hx_pos_a372be2e16c3885e_12_boot)
HXDLIN(  12)		DOWN = 4096;
            	}
}

} // end namespace flixel
} // end namespace util
} // end namespace _FlxDirection
