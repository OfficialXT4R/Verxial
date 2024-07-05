// Generated by Haxe 4.3.4
#include <hxcpp.h>

#ifndef INCLUDED_flixel_input_FlxInput
#include <flixel/input/FlxInput.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInput
#include <flixel/input/IFlxInput.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_95981fe4948a3fc6_3_new,"flixel.input.FlxInput","new",0x726ed100,"flixel.input.FlxInput.new","flixel/input/FlxInput.hx",3,0xe8bdaaee)
HX_LOCAL_STACK_FRAME(_hx_pos_95981fe4948a3fc6_21_press,"flixel.input.FlxInput","press",0x37dcbc23,"flixel.input.FlxInput.press","flixel/input/FlxInput.hx",21,0xe8bdaaee)
HX_LOCAL_STACK_FRAME(_hx_pos_95981fe4948a3fc6_27_release,"flixel.input.FlxInput","release",0x94a55667,"flixel.input.FlxInput.release","flixel/input/FlxInput.hx",27,0xe8bdaaee)
HX_LOCAL_STACK_FRAME(_hx_pos_95981fe4948a3fc6_33_update,"flixel.input.FlxInput","update",0x818ca969,"flixel.input.FlxInput.update","flixel/input/FlxInput.hx",33,0xe8bdaaee)
HX_LOCAL_STACK_FRAME(_hx_pos_95981fe4948a3fc6_47_reset,"flixel.input.FlxInput","reset",0x561cb26f,"flixel.input.FlxInput.reset","flixel/input/FlxInput.hx",47,0xe8bdaaee)
HX_LOCAL_STACK_FRAME(_hx_pos_95981fe4948a3fc6_54_hasState,"flixel.input.FlxInput","hasState",0x15827bb7,"flixel.input.FlxInput.hasState","flixel/input/FlxInput.hx",54,0xe8bdaaee)
HX_LOCAL_STACK_FRAME(_hx_pos_95981fe4948a3fc6_65_get_justReleased,"flixel.input.FlxInput","get_justReleased",0x305322f2,"flixel.input.FlxInput.get_justReleased","flixel/input/FlxInput.hx",65,0xe8bdaaee)
HX_LOCAL_STACK_FRAME(_hx_pos_95981fe4948a3fc6_70_get_released,"flixel.input.FlxInput","get_released",0x4d112826,"flixel.input.FlxInput.get_released","flixel/input/FlxInput.hx",70,0xe8bdaaee)
HX_LOCAL_STACK_FRAME(_hx_pos_95981fe4948a3fc6_75_get_pressed,"flixel.input.FlxInput","get_pressed",0x1bddd359,"flixel.input.FlxInput.get_pressed","flixel/input/FlxInput.hx",75,0xe8bdaaee)
HX_LOCAL_STACK_FRAME(_hx_pos_95981fe4948a3fc6_80_get_justPressed,"flixel.input.FlxInput","get_justPressed",0xfa72360d,"flixel.input.FlxInput.get_justPressed","flixel/input/FlxInput.hx",80,0xe8bdaaee)
namespace flixel{
namespace input{

void FlxInput_obj::__construct( ::Dynamic ID){
            	HX_STACKFRAME(&_hx_pos_95981fe4948a3fc6_3_new)
HXLINE(  13)		this->last = 0;
HXLINE(  12)		this->current = 0;
HXLINE(  17)		this->ID = ID;
            	}

Dynamic FlxInput_obj::__CreateEmpty() { return new FlxInput_obj; }

void *FlxInput_obj::_hx_vtable = 0;

Dynamic FlxInput_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FlxInput_obj > _hx_result = new FlxInput_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool FlxInput_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x6f581646;
}

static ::flixel::input::IFlxInput_obj _hx_flixel_input_FlxInput__hx_flixel_input_IFlxInput= {
	( bool (::hx::Object::*)())&::flixel::input::FlxInput_obj::get_justReleased,
	( bool (::hx::Object::*)())&::flixel::input::FlxInput_obj::get_released,
	( bool (::hx::Object::*)())&::flixel::input::FlxInput_obj::get_pressed,
	( bool (::hx::Object::*)())&::flixel::input::FlxInput_obj::get_justPressed,
};

void *FlxInput_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0x52baf533: return &_hx_flixel_input_FlxInput__hx_flixel_input_IFlxInput;
	}
	#ifdef HXCPP_SCRIPTABLE
	return super::_hx_getInterface(inHash);
	#else
	return 0;
	#endif
}

void FlxInput_obj::press(){
            	HX_STACKFRAME(&_hx_pos_95981fe4948a3fc6_21_press)
HXLINE(  22)		this->last = this->current;
HXLINE(  23)		int _hx_tmp;
HXDLIN(  23)		bool _hx_tmp1;
HXDLIN(  23)		if ((this->current != 1)) {
HXLINE(  23)			_hx_tmp1 = (this->current == 2);
            		}
            		else {
HXLINE(  23)			_hx_tmp1 = true;
            		}
HXDLIN(  23)		if (_hx_tmp1) {
HXLINE(  23)			_hx_tmp = 1;
            		}
            		else {
HXLINE(  23)			_hx_tmp = 2;
            		}
HXDLIN(  23)		this->current = _hx_tmp;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxInput_obj,press,(void))

void FlxInput_obj::release(){
            	HX_STACKFRAME(&_hx_pos_95981fe4948a3fc6_27_release)
HXLINE(  28)		this->last = this->current;
HXLINE(  29)		int _hx_tmp;
HXDLIN(  29)		bool _hx_tmp1;
HXDLIN(  29)		if ((this->current != 1)) {
HXLINE(  29)			_hx_tmp1 = (this->current == 2);
            		}
            		else {
HXLINE(  29)			_hx_tmp1 = true;
            		}
HXDLIN(  29)		if (_hx_tmp1) {
HXLINE(  29)			_hx_tmp = -1;
            		}
            		else {
HXLINE(  29)			_hx_tmp = 0;
            		}
HXDLIN(  29)		this->current = _hx_tmp;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxInput_obj,release,(void))

void FlxInput_obj::update(){
            	HX_STACKFRAME(&_hx_pos_95981fe4948a3fc6_33_update)
HXLINE(  34)		bool _hx_tmp;
HXDLIN(  34)		if ((this->last == -1)) {
HXLINE(  34)			_hx_tmp = (this->current == -1);
            		}
            		else {
HXLINE(  34)			_hx_tmp = false;
            		}
HXDLIN(  34)		if (_hx_tmp) {
HXLINE(  36)			this->current = 0;
            		}
            		else {
HXLINE(  38)			bool _hx_tmp1;
HXDLIN(  38)			if ((this->last == 2)) {
HXLINE(  38)				_hx_tmp1 = (this->current == 2);
            			}
            			else {
HXLINE(  38)				_hx_tmp1 = false;
            			}
HXDLIN(  38)			if (_hx_tmp1) {
HXLINE(  40)				this->current = 1;
            			}
            		}
HXLINE(  43)		this->last = this->current;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxInput_obj,update,(void))

void FlxInput_obj::reset(){
            	HX_STACKFRAME(&_hx_pos_95981fe4948a3fc6_47_reset)
HXLINE(  48)		this->current = 0;
HXLINE(  49)		this->last = 0;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxInput_obj,reset,(void))

bool FlxInput_obj::hasState(int state){
            	HX_STACKFRAME(&_hx_pos_95981fe4948a3fc6_54_hasState)
HXDLIN(  54)		switch((int)(state)){
            			case (int)-1: {
HXLINE(  56)				return (this->current == -1);
            			}
            			break;
            			case (int)0: {
HXLINE(  57)				if ((this->current != 0)) {
HXLINE(  57)					return (this->current == -1);
            				}
            				else {
HXLINE(  57)					return true;
            				}
            			}
            			break;
            			case (int)1: {
HXLINE(  58)				if ((this->current != 1)) {
HXLINE(  58)					return (this->current == 2);
            				}
            				else {
HXLINE(  58)					return true;
            				}
            			}
            			break;
            			case (int)2: {
HXLINE(  59)				return (this->current == 2);
            			}
            			break;
            		}
HXLINE(  54)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxInput_obj,hasState,return )

bool FlxInput_obj::get_justReleased(){
            	HX_STACKFRAME(&_hx_pos_95981fe4948a3fc6_65_get_justReleased)
HXDLIN(  65)		return (this->current == -1);
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxInput_obj,get_justReleased,return )

bool FlxInput_obj::get_released(){
            	HX_STACKFRAME(&_hx_pos_95981fe4948a3fc6_70_get_released)
HXDLIN(  70)		if ((this->current != 0)) {
HXDLIN(  70)			return (this->current == -1);
            		}
            		else {
HXDLIN(  70)			return true;
            		}
HXDLIN(  70)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxInput_obj,get_released,return )

bool FlxInput_obj::get_pressed(){
            	HX_STACKFRAME(&_hx_pos_95981fe4948a3fc6_75_get_pressed)
HXDLIN(  75)		if ((this->current != 1)) {
HXDLIN(  75)			return (this->current == 2);
            		}
            		else {
HXDLIN(  75)			return true;
            		}
HXDLIN(  75)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxInput_obj,get_pressed,return )

bool FlxInput_obj::get_justPressed(){
            	HX_STACKFRAME(&_hx_pos_95981fe4948a3fc6_80_get_justPressed)
HXDLIN(  80)		return (this->current == 2);
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxInput_obj,get_justPressed,return )


::hx::ObjectPtr< FlxInput_obj > FlxInput_obj::__new( ::Dynamic ID) {
	::hx::ObjectPtr< FlxInput_obj > __this = new FlxInput_obj();
	__this->__construct(ID);
	return __this;
}

::hx::ObjectPtr< FlxInput_obj > FlxInput_obj::__alloc(::hx::Ctx *_hx_ctx, ::Dynamic ID) {
	FlxInput_obj *__this = (FlxInput_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FlxInput_obj), true, "flixel.input.FlxInput"));
	*(void **)__this = FlxInput_obj::_hx_vtable;
	__this->__construct(ID);
	return __this;
}

FlxInput_obj::FlxInput_obj()
{
}

void FlxInput_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxInput);
	HX_MARK_MEMBER_NAME(ID,"ID");
	HX_MARK_MEMBER_NAME(current,"current");
	HX_MARK_MEMBER_NAME(last,"last");
	HX_MARK_END_CLASS();
}

void FlxInput_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(ID,"ID");
	HX_VISIT_MEMBER_NAME(current,"current");
	HX_VISIT_MEMBER_NAME(last,"last");
}

::hx::Val FlxInput_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"ID") ) { return ::hx::Val( ID ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"last") ) { return ::hx::Val( last ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"press") ) { return ::hx::Val( press_dyn() ); }
		if (HX_FIELD_EQ(inName,"reset") ) { return ::hx::Val( reset_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"pressed") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_pressed() ); }
		if (HX_FIELD_EQ(inName,"current") ) { return ::hx::Val( current ); }
		if (HX_FIELD_EQ(inName,"release") ) { return ::hx::Val( release_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"released") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_released() ); }
		if (HX_FIELD_EQ(inName,"hasState") ) { return ::hx::Val( hasState_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"justPressed") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_justPressed() ); }
		if (HX_FIELD_EQ(inName,"get_pressed") ) { return ::hx::Val( get_pressed_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"justReleased") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_justReleased() ); }
		if (HX_FIELD_EQ(inName,"get_released") ) { return ::hx::Val( get_released_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get_justPressed") ) { return ::hx::Val( get_justPressed_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"get_justReleased") ) { return ::hx::Val( get_justReleased_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val FlxInput_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"ID") ) { ID=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"last") ) { last=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"current") ) { current=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxInput_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("ID",db,3f,00,00));
	outFields->push(HX_("justReleased",09,1b,5b,66));
	outFields->push(HX_("released",bd,88,e7,76));
	outFields->push(HX_("pressed",a2,d2,e6,39));
	outFields->push(HX_("justPressed",d6,0d,a7,f2));
	outFields->push(HX_("current",39,9c,e3,cb));
	outFields->push(HX_("last",56,0a,ad,47));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo FlxInput_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(FlxInput_obj,ID),HX_("ID",db,3f,00,00)},
	{::hx::fsInt,(int)offsetof(FlxInput_obj,current),HX_("current",39,9c,e3,cb)},
	{::hx::fsInt,(int)offsetof(FlxInput_obj,last),HX_("last",56,0a,ad,47)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *FlxInput_obj_sStaticStorageInfo = 0;
#endif

static ::String FlxInput_obj_sMemberFields[] = {
	HX_("ID",db,3f,00,00),
	HX_("current",39,9c,e3,cb),
	HX_("last",56,0a,ad,47),
	HX_("press",83,53,88,c8),
	HX_("release",c7,85,ed,58),
	HX_("update",09,86,05,87),
	HX_("reset",cf,49,c8,e6),
	HX_("hasState",57,c0,63,10),
	HX_("get_justReleased",92,07,fa,6a),
	HX_("get_released",c6,3c,01,2c),
	HX_("get_pressed",b9,32,e1,bf),
	HX_("get_justPressed",6d,c5,88,b3),
	::String(null()) };

::hx::Class FlxInput_obj::__mClass;

void FlxInput_obj::__register()
{
	FlxInput_obj _hx_dummy;
	FlxInput_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.input.FlxInput",0e,91,fa,24);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(FlxInput_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< FlxInput_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxInput_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxInput_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace input
