// Generated by Haxe 4.3.4
#ifndef INCLUDED_flixel_input_gamepad_id_MayflashWiiRemoteID
#define INCLUDED_flixel_input_gamepad_id_MayflashWiiRemoteID

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(flixel,input,gamepad,FlxGamepadAnalogStick)
HX_DECLARE_CLASS4(flixel,input,gamepad,id,MayflashWiiRemoteID)

namespace flixel{
namespace input{
namespace gamepad{
namespace id{


class HXCPP_CLASS_ATTRIBUTES MayflashWiiRemoteID_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef MayflashWiiRemoteID_obj OBJ_;
		MayflashWiiRemoteID_obj();

	public:
		enum { _hx_ClassId = 0x615238db };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="flixel.input.gamepad.id.MayflashWiiRemoteID")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"flixel.input.gamepad.id.MayflashWiiRemoteID"); }

		inline static ::hx::ObjectPtr< MayflashWiiRemoteID_obj > __new() {
			::hx::ObjectPtr< MayflashWiiRemoteID_obj > __this = new MayflashWiiRemoteID_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< MayflashWiiRemoteID_obj > __alloc(::hx::Ctx *_hx_ctx) {
			MayflashWiiRemoteID_obj *__this = (MayflashWiiRemoteID_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(MayflashWiiRemoteID_obj), false, "flixel.input.gamepad.id.MayflashWiiRemoteID"));
			*(void **)__this = MayflashWiiRemoteID_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~MayflashWiiRemoteID_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("MayflashWiiRemoteID",cd,97,ec,1c); }

		static void __boot();
		static int REMOTE_ONE;
		static int REMOTE_TWO;
		static int REMOTE_A;
		static int REMOTE_B;
		static int REMOTE_MINUS;
		static int REMOTE_PLUS;
		static int REMOTE_HOME;
		static int NUNCHUK_Z;
		static int NUNCHUK_C;
		static int NUNCHUK_DPAD_UP;
		static int NUNCHUK_DPAD_DOWN;
		static int NUNCHUK_DPAD_LEFT;
		static int NUNCHUK_DPAD_RIGHT;
		static int NUNCHUK_MINUS;
		static int NUNCHUK_PLUS;
		static int NUNCHUK_HOME;
		static int NUNCHUK_A;
		static int NUNCHUK_B;
		static int NUNCHUK_ONE;
		static int NUNCHUK_TWO;
		static int CLASSIC_Y;
		static int CLASSIC_X;
		static int CLASSIC_B;
		static int CLASSIC_A;
		static int CLASSIC_L;
		static int CLASSIC_R;
		static int CLASSIC_ZL;
		static int CLASSIC_ZR;
		static int CLASSIC_SELECT;
		static int CLASSIC_START;
		static int CLASSIC_HOME;
		static int CLASSIC_ONE;
		static int CLASSIC_TWO;
		static int CLASSIC_DPAD_UP;
		static int CLASSIC_DPAD_DOWN;
		static int CLASSIC_DPAD_LEFT;
		static int CLASSIC_DPAD_RIGHT;
		static int NUNCHUK_POINTER_X;
		static int NUNCHUK_POINTER_Y;
		static  ::flixel::input::gamepad::FlxGamepadAnalogStick REMOTE_DPAD;
		static  ::flixel::input::gamepad::FlxGamepadAnalogStick LEFT_ANALOG_STICK;
		static  ::flixel::input::gamepad::FlxGamepadAnalogStick RIGHT_ANALOG_STICK;
		static int LEFT_TRIGGER_FAKE;
		static int RIGHT_TRIGGER_FAKE;
		static int REMOTE_DPAD_UP;
		static int REMOTE_DPAD_DOWN;
		static int REMOTE_DPAD_LEFT;
		static int REMOTE_DPAD_RIGHT;
};

} // end namespace flixel
} // end namespace input
} // end namespace gamepad
} // end namespace id

#endif /* INCLUDED_flixel_input_gamepad_id_MayflashWiiRemoteID */ 
