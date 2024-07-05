// Generated by Haxe 4.3.4
#include <hxcpp.h>

#ifndef INCLUDED_flixel_input_gamepad_FlxGamepad
#include <flixel/input/gamepad/FlxGamepad.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_lists_FlxGamepadPointerValueList
#include <flixel/input/gamepad/lists/FlxGamepadPointerValueList.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_mappings_FlxGamepadMapping
#include <flixel/input/gamepad/mappings/FlxGamepadMapping.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_f64e3bc9867ab2da_38_new,"flixel.input.gamepad.lists.FlxGamepadPointerValueList","new",0xa1fdbe8f,"flixel.input.gamepad.lists.FlxGamepadPointerValueList.new","flixel/input/gamepad/lists/FlxGamepadPointerValueList.hx",38,0x5105f03d)
HX_LOCAL_STACK_FRAME(_hx_pos_f64e3bc9867ab2da_26_get_X,"flixel.input.gamepad.lists.FlxGamepadPointerValueList","get_X",0x6405bd1e,"flixel.input.gamepad.lists.FlxGamepadPointerValueList.get_X","flixel/input/gamepad/lists/FlxGamepadPointerValueList.hx",26,0x5105f03d)
HX_LOCAL_STACK_FRAME(_hx_pos_f64e3bc9867ab2da_34_get_Y,"flixel.input.gamepad.lists.FlxGamepadPointerValueList","get_Y",0x6405bd1f,"flixel.input.gamepad.lists.FlxGamepadPointerValueList.get_Y","flixel/input/gamepad/lists/FlxGamepadPointerValueList.hx",34,0x5105f03d)
HX_LOCAL_STACK_FRAME(_hx_pos_f64e3bc9867ab2da_42_getAxis,"flixel.input.gamepad.lists.FlxGamepadPointerValueList","getAxis",0xab09fe06,"flixel.input.gamepad.lists.FlxGamepadPointerValueList.getAxis","flixel/input/gamepad/lists/FlxGamepadPointerValueList.hx",42,0x5105f03d)
HX_LOCAL_STACK_FRAME(_hx_pos_f64e3bc9867ab2da_50_get_isSupported,"flixel.input.gamepad.lists.FlxGamepadPointerValueList","get_isSupported",0x729a2d2a,"flixel.input.gamepad.lists.FlxGamepadPointerValueList.get_isSupported","flixel/input/gamepad/lists/FlxGamepadPointerValueList.hx",50,0x5105f03d)
namespace flixel{
namespace input{
namespace gamepad{
namespace lists{

void FlxGamepadPointerValueList_obj::__construct( ::flixel::input::gamepad::FlxGamepad gamepad){
            	HX_STACKFRAME(&_hx_pos_f64e3bc9867ab2da_38_new)
HXDLIN(  38)		this->gamepad = gamepad;
            	}

Dynamic FlxGamepadPointerValueList_obj::__CreateEmpty() { return new FlxGamepadPointerValueList_obj; }

void *FlxGamepadPointerValueList_obj::_hx_vtable = 0;

Dynamic FlxGamepadPointerValueList_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FlxGamepadPointerValueList_obj > _hx_result = new FlxGamepadPointerValueList_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool FlxGamepadPointerValueList_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x07140817;
}

Float FlxGamepadPointerValueList_obj::get_X(){
            	HX_STACKFRAME(&_hx_pos_f64e3bc9867ab2da_26_get_X)
HXDLIN(  26)		if (!(this->gamepad->mapping->supportsPointer)) {
HXDLIN(  26)			return ( (Float)(0) );
            		}
            		else {
HXDLIN(  26)			return this->gamepad->getAxis(28);
            		}
HXDLIN(  26)		return ((Float)0.);
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxGamepadPointerValueList_obj,get_X,return )

Float FlxGamepadPointerValueList_obj::get_Y(){
            	HX_STACKFRAME(&_hx_pos_f64e3bc9867ab2da_34_get_Y)
HXDLIN(  34)		if (!(this->gamepad->mapping->supportsPointer)) {
HXDLIN(  34)			return ( (Float)(0) );
            		}
            		else {
HXDLIN(  34)			return this->gamepad->getAxis(29);
            		}
HXDLIN(  34)		return ((Float)0.);
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxGamepadPointerValueList_obj,get_Y,return )

Float FlxGamepadPointerValueList_obj::getAxis(int id){
            	HX_STACKFRAME(&_hx_pos_f64e3bc9867ab2da_42_getAxis)
HXLINE(  43)		if (!(this->gamepad->mapping->supportsPointer)) {
HXLINE(  44)			return ( (Float)(0) );
            		}
HXLINE(  45)		return this->gamepad->getAxis(id);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxGamepadPointerValueList_obj,getAxis,return )

bool FlxGamepadPointerValueList_obj::get_isSupported(){
            	HX_STACKFRAME(&_hx_pos_f64e3bc9867ab2da_50_get_isSupported)
HXDLIN(  50)		return this->gamepad->mapping->supportsPointer;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxGamepadPointerValueList_obj,get_isSupported,return )


::hx::ObjectPtr< FlxGamepadPointerValueList_obj > FlxGamepadPointerValueList_obj::__new( ::flixel::input::gamepad::FlxGamepad gamepad) {
	::hx::ObjectPtr< FlxGamepadPointerValueList_obj > __this = new FlxGamepadPointerValueList_obj();
	__this->__construct(gamepad);
	return __this;
}

::hx::ObjectPtr< FlxGamepadPointerValueList_obj > FlxGamepadPointerValueList_obj::__alloc(::hx::Ctx *_hx_ctx, ::flixel::input::gamepad::FlxGamepad gamepad) {
	FlxGamepadPointerValueList_obj *__this = (FlxGamepadPointerValueList_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FlxGamepadPointerValueList_obj), true, "flixel.input.gamepad.lists.FlxGamepadPointerValueList"));
	*(void **)__this = FlxGamepadPointerValueList_obj::_hx_vtable;
	__this->__construct(gamepad);
	return __this;
}

FlxGamepadPointerValueList_obj::FlxGamepadPointerValueList_obj()
{
}

void FlxGamepadPointerValueList_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxGamepadPointerValueList);
	HX_MARK_MEMBER_NAME(gamepad,"gamepad");
	HX_MARK_END_CLASS();
}

void FlxGamepadPointerValueList_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(gamepad,"gamepad");
}

::hx::Val FlxGamepadPointerValueList_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"X") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_X() ); }
		if (HX_FIELD_EQ(inName,"Y") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_Y() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"get_X") ) { return ::hx::Val( get_X_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_Y") ) { return ::hx::Val( get_Y_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"gamepad") ) { return ::hx::Val( gamepad ); }
		if (HX_FIELD_EQ(inName,"getAxis") ) { return ::hx::Val( getAxis_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"isSupported") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_isSupported() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get_isSupported") ) { return ::hx::Val( get_isSupported_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val FlxGamepadPointerValueList_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"gamepad") ) { gamepad=inValue.Cast<  ::flixel::input::gamepad::FlxGamepad >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxGamepadPointerValueList_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("gamepad",a1,e0,85,89));
	outFields->push(HX_("isSupported",e4,7c,8a,f3));
	outFields->push(HX_("X",58,00,00,00));
	outFields->push(HX_("Y",59,00,00,00));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo FlxGamepadPointerValueList_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::flixel::input::gamepad::FlxGamepad */ ,(int)offsetof(FlxGamepadPointerValueList_obj,gamepad),HX_("gamepad",a1,e0,85,89)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *FlxGamepadPointerValueList_obj_sStaticStorageInfo = 0;
#endif

static ::String FlxGamepadPointerValueList_obj_sMemberFields[] = {
	HX_("gamepad",a1,e0,85,89),
	HX_("get_X",2f,a5,60,91),
	HX_("get_Y",30,a5,60,91),
	HX_("getAxis",57,cc,fb,12),
	HX_("get_isSupported",7b,34,6c,b4),
	::String(null()) };

::hx::Class FlxGamepadPointerValueList_obj::__mClass;

void FlxGamepadPointerValueList_obj::__register()
{
	FlxGamepadPointerValueList_obj _hx_dummy;
	FlxGamepadPointerValueList_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.input.gamepad.lists.FlxGamepadPointerValueList",1d,cb,61,34);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(FlxGamepadPointerValueList_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< FlxGamepadPointerValueList_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxGamepadPointerValueList_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxGamepadPointerValueList_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace input
} // end namespace gamepad
} // end namespace lists
