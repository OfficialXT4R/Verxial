// Generated by Haxe 4.3.4
#ifndef INCLUDED_flixel_input_gamepad_id_OUYAID
#define INCLUDED_flixel_input_gamepad_id_OUYAID

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(flixel,input,gamepad,FlxGamepadAnalogStick)
HX_DECLARE_CLASS4(flixel,input,gamepad,id,OUYAID)

namespace flixel{
namespace input{
namespace gamepad{
namespace id{


class HXCPP_CLASS_ATTRIBUTES OUYAID_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef OUYAID_obj OBJ_;
		OUYAID_obj();

	public:
		enum { _hx_ClassId = 0x2476577b };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="flixel.input.gamepad.id.OUYAID")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"flixel.input.gamepad.id.OUYAID"); }

		inline static ::hx::ObjectPtr< OUYAID_obj > __new() {
			::hx::ObjectPtr< OUYAID_obj > __this = new OUYAID_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< OUYAID_obj > __alloc(::hx::Ctx *_hx_ctx) {
			OUYAID_obj *__this = (OUYAID_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(OUYAID_obj), false, "flixel.input.gamepad.id.OUYAID"));
			*(void **)__this = OUYAID_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~OUYAID_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("OUYAID",c9,5f,46,c2); }

		static void __boot();
		static int O;
		static int U;
		static int Y;
		static int A;
		static int LB;
		static int RB;
		static int LEFT_STICK_CLICK;
		static int RIGHT_STICK_CLICK;
		static int HOME;
		static int LEFT_TRIGGER;
		static int RIGHT_TRIGGER;
		static int DPAD_LEFT;
		static int DPAD_RIGHT;
		static int DPAD_DOWN;
		static int DPAD_UP;
		static  ::flixel::input::gamepad::FlxGamepadAnalogStick LEFT_ANALOG_STICK;
		static  ::flixel::input::gamepad::FlxGamepadAnalogStick RIGHT_ANALOG_STICK;
};

} // end namespace flixel
} // end namespace input
} // end namespace gamepad
} // end namespace id

#endif /* INCLUDED_flixel_input_gamepad_id_OUYAID */ 
