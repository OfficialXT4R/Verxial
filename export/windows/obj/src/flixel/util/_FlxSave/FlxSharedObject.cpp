// Generated by Haxe 4.3.4
#include <hxcpp.h>

#ifndef INCLUDED_EReg
#include <EReg.h>
#endif
#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_flixel_util_FlxSave
#include <flixel/util/FlxSave.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util__FlxSave_FlxSharedObject
#include <flixel/util/_FlxSave/FlxSharedObject.h>
#endif
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_Serializer
#include <haxe/Serializer.h>
#endif
#ifndef INCLUDED_haxe_Unserializer
#include <haxe/Unserializer.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_io_Encoding
#include <haxe/io/Encoding.h>
#endif
#ifndef INCLUDED_haxe_io_Output
#include <haxe/io/Output.h>
#endif
#ifndef INCLUDED_haxe_io_Path
#include <haxe/io/Path.h>
#endif
#ifndef INCLUDED_lime_app_Application
#include <lime/app/Application.h>
#endif
#ifndef INCLUDED_lime_app_IModule
#include <lime/app/IModule.h>
#endif
#ifndef INCLUDED_lime_app_Module
#include <lime/app/Module.h>
#endif
#ifndef INCLUDED_lime_app__Event_Int_Void
#include <lime/app/_Event_Int_Void.h>
#endif
#ifndef INCLUDED_lime_system_System
#include <lime/system/System.h>
#endif
#ifndef INCLUDED_openfl_Lib
#include <openfl/Lib.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_display_MovieClip
#include <openfl/display/MovieClip.h>
#endif
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl_display_Stage
#include <openfl/display/Stage.h>
#endif
#ifndef INCLUDED_openfl_errors_Error
#include <openfl/errors/Error.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_net_SharedObject
#include <openfl/net/SharedObject.h>
#endif
#ifndef INCLUDED_sys_FileSystem
#include <sys/FileSystem.h>
#endif
#ifndef INCLUDED_sys_io_File
#include <sys/io/File.h>
#endif
#ifndef INCLUDED_sys_io_FileOutput
#include <sys/io/FileOutput.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_6b726de06a800834_375_new,"flixel.util._FlxSave.FlxSharedObject","new",0x75b61ac4,"flixel.util._FlxSave.FlxSharedObject.new","flixel/util/FlxSave.hx",375,0xc43cd0a9)
HX_LOCAL_STACK_FRAME(_hx_pos_6b726de06a800834_610_flush,"flixel.util._FlxSave.FlxSharedObject","flush",0x4cf00e28,"flixel.util._FlxSave.FlxSharedObject.flush","flixel/util/FlxSave.hx",610,0xc43cd0a9)
HX_LOCAL_STACK_FRAME(_hx_pos_6b726de06a800834_639_clear,"flixel.util._FlxSave.FlxSharedObject","clear",0x92b01cf1,"flixel.util._FlxSave.FlxSharedObject.clear","flixel/util/FlxSave.hx",639,0xc43cd0a9)
HX_LOCAL_STACK_FRAME(_hx_pos_6b726de06a800834_393_init,"flixel.util._FlxSave.FlxSharedObject","init",0x865a082c,"flixel.util._FlxSave.FlxSharedObject.init","flixel/util/FlxSave.hx",393,0xc43cd0a9)
HX_LOCAL_STACK_FRAME(_hx_pos_6b726de06a800834_405_onExit,"flixel.util._FlxSave.FlxSharedObject","onExit",0xa5694bf9,"flixel.util._FlxSave.FlxSharedObject.onExit","flixel/util/FlxSave.hx",405,0xc43cd0a9)
HX_LOCAL_STACK_FRAME(_hx_pos_6b726de06a800834_413_getDefaultLocalPath,"flixel.util._FlxSave.FlxSharedObject","getDefaultLocalPath",0x05078ec9,"flixel.util._FlxSave.FlxSharedObject.getDefaultLocalPath","flixel/util/FlxSave.hx",413,0xc43cd0a9)
HX_LOCAL_STACK_FRAME(_hx_pos_6b726de06a800834_425_getLocal,"flixel.util._FlxSave.FlxSharedObject","getLocal",0x04896411,"flixel.util._FlxSave.FlxSharedObject.getLocal","flixel/util/FlxSave.hx",425,0xc43cd0a9)
HX_LOCAL_STACK_FRAME(_hx_pos_6b726de06a800834_528_getData,"flixel.util._FlxSave.FlxSharedObject","getData",0x1e475244,"flixel.util._FlxSave.FlxSharedObject.getData","flixel/util/FlxSave.hx",528,0xc43cd0a9)
HX_LOCAL_STACK_FRAME(_hx_pos_6b726de06a800834_542_getPath,"flixel.util._FlxSave.FlxSharedObject","getPath",0x2635e1bf,"flixel.util._FlxSave.FlxSharedObject.getPath","flixel/util/FlxSave.hx",542,0xc43cd0a9)
HX_LOCAL_STACK_FRAME(_hx_pos_6b726de06a800834_584_exists,"flixel.util._FlxSave.FlxSharedObject","exists",0x7fa169f8,"flixel.util._FlxSave.FlxSharedObject.exists","flixel/util/FlxSave.hx",584,0xc43cd0a9)
HX_LOCAL_STACK_FRAME(_hx_pos_6b726de06a800834_593_newExists,"flixel.util._FlxSave.FlxSharedObject","newExists",0x9b2917c0,"flixel.util._FlxSave.FlxSharedObject.newExists","flixel/util/FlxSave.hx",593,0xc43cd0a9)
HX_LOCAL_STACK_FRAME(_hx_pos_6b726de06a800834_598_getLegacyPath,"flixel.util._FlxSave.FlxSharedObject","getLegacyPath",0x55c9f028,"flixel.util._FlxSave.FlxSharedObject.getLegacyPath","flixel/util/FlxSave.hx",598,0xc43cd0a9)
HX_LOCAL_STACK_FRAME(_hx_pos_6b726de06a800834_606_legacyExists,"flixel.util._FlxSave.FlxSharedObject","legacyExists",0x0ca8b221,"flixel.util._FlxSave.FlxSharedObject.legacyExists","flixel/util/FlxSave.hx",606,0xc43cd0a9)
namespace flixel{
namespace util{
namespace _FlxSave{

void FlxSharedObject_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_6b726de06a800834_375_new)
HXDLIN( 375)		super::__construct();
            	}

Dynamic FlxSharedObject_obj::__CreateEmpty() { return new FlxSharedObject_obj; }

void *FlxSharedObject_obj::_hx_vtable = 0;

Dynamic FlxSharedObject_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FlxSharedObject_obj > _hx_result = new FlxSharedObject_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool FlxSharedObject_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x39ea9431) {
		if (inClassId<=(int)0x0c89e854) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x0c89e854;
		} else {
			return inClassId==(int)0x39ea9431;
		}
	} else {
		return inClassId==(int)0x66b864e8;
	}
}

 ::Dynamic FlxSharedObject_obj::flush(::hx::Null< int >  __o_minDiskSpace){
            		int minDiskSpace = __o_minDiskSpace.Default(0);
            	HX_STACKFRAME(&_hx_pos_6b726de06a800834_610_flush)
HXLINE( 611)		if ((::Reflect_obj::fields(this->data)->length == 0)) {
HXLINE( 613)			return 0;
            		}
HXLINE( 616)		::String encodedData = ::haxe::Serializer_obj::run(this->data);
HXLINE( 618)		try {
            			HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE( 620)			::String path = ::flixel::util::_FlxSave::FlxSharedObject_obj::getPath(this->_hx___localPath,this->_hx___name);
HXLINE( 621)			::String directory = ::haxe::io::Path_obj::directory(path);
HXLINE( 623)			if (!(::sys::FileSystem_obj::exists(directory))) {
HXLINE( 624)				::openfl::net::SharedObject_obj::_hx___mkdir(directory);
            			}
HXLINE( 626)			 ::sys::io::FileOutput output = ::sys::io::File_obj::write(path,false);
HXLINE( 627)			output->writeString(encodedData,null());
HXLINE( 628)			output->close();
            		} catch( ::Dynamic _hx_e) {
            			if (_hx_e.IsClass<  ::Dynamic >() ){
            				HX_STACK_BEGIN_CATCH
            				 ::Dynamic _g = _hx_e;
HXLINE( 630)				{
HXLINE( 630)					null();
            				}
HXLINE( 632)				return 1;
            			}
            			else {
            				HX_STACK_DO_THROW(_hx_e);
            			}
            		}
HXLINE( 635)		return 0;
            	}


void FlxSharedObject_obj::clear(){
            	HX_STACKFRAME(&_hx_pos_6b726de06a800834_639_clear)
HXLINE( 640)		this->data =  ::Dynamic(::hx::Anon_obj::Create(0));
HXLINE( 642)		try {
            			HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE( 644)			::String path = ::flixel::util::_FlxSave::FlxSharedObject_obj::getPath(this->_hx___localPath,this->_hx___name);
HXLINE( 646)			if (::sys::FileSystem_obj::exists(path)) {
HXLINE( 647)				::sys::FileSystem_obj::deleteFile(path);
            			}
            		} catch( ::Dynamic _hx_e) {
            			if (_hx_e.IsClass<  ::Dynamic >() ){
            				HX_STACK_BEGIN_CATCH
            				 ::Dynamic _g = _hx_e;
HXLINE( 649)				{
HXLINE( 649)					null();
            				}
            			}
            			else {
            				HX_STACK_DO_THROW(_hx_e);
            			}
            		}
            	}


 ::haxe::ds::StringMap FlxSharedObject_obj::all;

void FlxSharedObject_obj::init(){
            	HX_GC_STACKFRAME(&_hx_pos_6b726de06a800834_393_init)
HXDLIN( 393)		if (::hx::IsNull( ::flixel::util::_FlxSave::FlxSharedObject_obj::all )) {
HXLINE( 395)			::flixel::util::_FlxSave::FlxSharedObject_obj::all =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXLINE( 397)			 ::lime::app::Application app = ::lime::app::Application_obj::current;
HXLINE( 398)			if (::hx::IsNotNull( app )) {
HXLINE( 399)				app->onExit->add(::flixel::util::_FlxSave::FlxSharedObject_obj::onExit_dyn(),null(),null());
            			}
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(FlxSharedObject_obj,init,(void))

void FlxSharedObject_obj::onExit(int _){
            	HX_STACKFRAME(&_hx_pos_6b726de06a800834_405_onExit)
HXDLIN( 405)		 ::Dynamic sharedObject = ::flixel::util::_FlxSave::FlxSharedObject_obj::all->iterator();
HXDLIN( 405)		while(( (bool)(sharedObject->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXDLIN( 405)			 ::flixel::util::_FlxSave::FlxSharedObject sharedObject1 = ( ( ::flixel::util::_FlxSave::FlxSharedObject)(sharedObject->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE( 406)			sharedObject1->flush(null());
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxSharedObject_obj,onExit,(void))

::String FlxSharedObject_obj::getDefaultLocalPath(){
            	HX_STACKFRAME(&_hx_pos_6b726de06a800834_413_getDefaultLocalPath)
HXLINE( 414)		 ::haxe::ds::StringMap meta = ::openfl::Lib_obj::get_current()->stage->application->meta;
HXLINE( 415)		::String path = meta->get_string(HX_("company",3d,15,69,83));
HXLINE( 416)		bool _hx_tmp;
HXDLIN( 416)		if (::hx::IsNotNull( path )) {
HXLINE( 416)			_hx_tmp = (path == HX_("",00,00,00,00));
            		}
            		else {
HXLINE( 416)			_hx_tmp = true;
            		}
HXDLIN( 416)		if (_hx_tmp) {
HXLINE( 417)			path = HX_("HaxeFlixel",42,8f,0c,ac);
            		}
            		else {
HXLINE( 419)			path = ::flixel::util::FlxSave_obj::validate(path);
            		}
HXLINE( 421)		return path;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(FlxSharedObject_obj,getDefaultLocalPath,return )

 ::openfl::net::SharedObject FlxSharedObject_obj::getLocal(::String name,::String localPath){
            	HX_GC_STACKFRAME(&_hx_pos_6b726de06a800834_425_getLocal)
HXLINE( 426)		bool _hx_tmp;
HXDLIN( 426)		if (::hx::IsNotNull( name )) {
HXLINE( 426)			_hx_tmp = (name == HX_("",00,00,00,00));
            		}
            		else {
HXLINE( 426)			_hx_tmp = true;
            		}
HXDLIN( 426)		if (_hx_tmp) {
HXLINE( 427)			HX_STACK_DO_THROW( ::openfl::errors::Error_obj::__alloc( HX_CTX ,((HX_("Error: Invalid name:\"",aa,50,0d,31) + name) + HX_("\".",cc,1d,00,00)),null()));
            		}
HXLINE( 429)		if (::hx::IsNull( localPath )) {
HXLINE( 430)			localPath = HX_("",00,00,00,00);
            		}
HXLINE( 432)		::String id = ((localPath + HX_("/",2f,00,00,00)) + name);
HXLINE( 434)		::flixel::util::_FlxSave::FlxSharedObject_obj::init();
HXLINE( 436)		if (!(::flixel::util::_FlxSave::FlxSharedObject_obj::all->exists(id))) {
HXLINE( 438)			::String encodedData = null();
HXLINE( 440)			try {
            				HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE( 442)				if ( ::EReg_obj::__alloc( HX_CTX ,HX_("(?:^|/)\\.\\./",f0,42,36,d5),HX_("",00,00,00,00))->match(localPath)) {
HXLINE( 443)					HX_STACK_DO_THROW( ::openfl::errors::Error_obj::__alloc( HX_CTX ,HX_("../ not allowed in localPath",2b,03,b2,ea),null()));
            				}
HXLINE( 445)				encodedData = ::flixel::util::_FlxSave::FlxSharedObject_obj::getData(name,localPath);
            			} catch( ::Dynamic _hx_e) {
            				if (_hx_e.IsClass<  ::Dynamic >() ){
            					HX_STACK_BEGIN_CATCH
            					 ::Dynamic _g = _hx_e;
HXLINE( 447)					{
HXLINE( 447)						null();
            					}
            				}
            				else {
            					HX_STACK_DO_THROW(_hx_e);
            				}
            			}
HXLINE( 449)			if ((localPath == HX_("",00,00,00,00))) {
HXLINE( 450)				localPath = ::flixel::util::_FlxSave::FlxSharedObject_obj::getDefaultLocalPath();
            			}
HXLINE( 452)			 ::flixel::util::_FlxSave::FlxSharedObject sharedObject =  ::flixel::util::_FlxSave::FlxSharedObject_obj::__alloc( HX_CTX );
HXLINE( 453)			sharedObject->data =  ::Dynamic(::hx::Anon_obj::Create(0));
HXLINE( 454)			sharedObject->_hx___localPath = localPath;
HXLINE( 455)			sharedObject->_hx___name = name;
HXLINE( 457)			bool _hx_tmp1;
HXDLIN( 457)			if (::hx::IsNotNull( encodedData )) {
HXLINE( 457)				_hx_tmp1 = (encodedData != HX_("",00,00,00,00));
            			}
            			else {
HXLINE( 457)				_hx_tmp1 = false;
            			}
HXDLIN( 457)			if (_hx_tmp1) {
HXLINE( 459)				try {
            					HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE( 461)					 ::haxe::Unserializer unserializer =  ::haxe::Unserializer_obj::__alloc( HX_CTX ,encodedData);
HXLINE( 462)					 ::Dynamic resolver =  ::Dynamic(::hx::Anon_obj::Create(2)
            						->setFixed(0,HX_("resolveClass",ac,bd,dd,80),::openfl::net::SharedObject_obj::_hx___resolveClass_dyn())
            						->setFixed(1,HX_("resolveEnum",0d,90,51,de),::Type_obj::resolveEnum_dyn()));
HXLINE( 463)					unserializer->setResolver(resolver);
HXLINE( 464)					sharedObject->data = unserializer->unserialize();
            				} catch( ::Dynamic _hx_e) {
            					if (_hx_e.IsClass<  ::Dynamic >() ){
            						HX_STACK_BEGIN_CATCH
            						 ::Dynamic _g1 = _hx_e;
HXLINE( 466)						{
HXLINE( 466)							null();
            						}
            					}
            					else {
            						HX_STACK_DO_THROW(_hx_e);
            					}
            				}
            			}
HXLINE( 469)			::flixel::util::_FlxSave::FlxSharedObject_obj::all->set(id,sharedObject);
            		}
HXLINE( 472)		return ( ( ::openfl::net::SharedObject)(::flixel::util::_FlxSave::FlxSharedObject_obj::all->get(id)) );
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxSharedObject_obj,getLocal,return )

::String FlxSharedObject_obj::getData(::String name,::String localPath){
            	HX_STACKFRAME(&_hx_pos_6b726de06a800834_528_getData)
HXLINE( 529)		::String path = ::flixel::util::_FlxSave::FlxSharedObject_obj::getPath(localPath,name);
HXLINE( 530)		if (::sys::FileSystem_obj::exists(path)) {
HXLINE( 531)			return ::sys::io::File_obj::getContent(path);
            		}
HXLINE( 534)		path = ::openfl::net::SharedObject_obj::_hx___getPath(localPath,name);
HXLINE( 535)		if (::sys::FileSystem_obj::exists(path)) {
HXLINE( 536)			return ::sys::io::File_obj::getContent(path);
            		}
HXLINE( 538)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxSharedObject_obj,getData,return )

::String FlxSharedObject_obj::getPath(::String localPath,::String name){
            	HX_STACKFRAME(&_hx_pos_6b726de06a800834_542_getPath)
HXLINE( 544)		if ((localPath == HX_("",00,00,00,00))) {
HXLINE( 545)			localPath = ::flixel::util::_FlxSave::FlxSharedObject_obj::getDefaultLocalPath();
            		}
HXLINE( 547)		::String directory = ::lime::_hx_system::System_obj::get_applicationStorageDirectory();
HXLINE( 548)		::String path = (::haxe::io::Path_obj::normalize((((HX_("",00,00,00,00) + directory) + HX_("/../../../",80,8e,9b,1e)) + localPath)) + HX_("/",2f,00,00,00));
HXLINE( 550)		name = ::StringTools_obj::replace(name,HX_("//",20,29,00,00),HX_("/",2f,00,00,00));
HXLINE( 551)		name = ::StringTools_obj::replace(name,HX_("//",20,29,00,00),HX_("/",2f,00,00,00));
HXLINE( 553)		if (::StringTools_obj::startsWith(name,HX_("/",2f,00,00,00))) {
HXLINE( 555)			name = name.substr(1,null());
            		}
HXLINE( 558)		if (::StringTools_obj::endsWith(name,HX_("/",2f,00,00,00))) {
HXLINE( 560)			name = name.substring(0,(name.length - 1));
            		}
HXLINE( 563)		if ((name.indexOf(HX_("/",2f,00,00,00),null()) > -1)) {
HXLINE( 565)			::Array< ::String > split = name.split(HX_("/",2f,00,00,00));
HXLINE( 566)			name = HX_("",00,00,00,00);
HXLINE( 568)			{
HXLINE( 568)				int _g = 0;
HXDLIN( 568)				int _g1 = (split->length - 1);
HXDLIN( 568)				while((_g < _g1)){
HXLINE( 568)					_g = (_g + 1);
HXDLIN( 568)					int i = (_g - 1);
HXLINE( 570)					name = (name + ((HX_("#",23,00,00,00) + split->__get(i)) + HX_("/",2f,00,00,00)));
            				}
            			}
HXLINE( 573)			name = (name + split->__get((split->length - 1)));
            		}
HXLINE( 576)		return ((path + name) + HX_(".sol",e2,74,bf,1e));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxSharedObject_obj,getPath,return )

bool FlxSharedObject_obj::exists(::String name,::String localPath){
            	HX_STACKFRAME(&_hx_pos_6b726de06a800834_584_exists)
HXDLIN( 584)		if (!(::sys::FileSystem_obj::exists(::flixel::util::_FlxSave::FlxSharedObject_obj::getPath(name,localPath)))) {
HXLINE( 585)			return ::sys::FileSystem_obj::exists(::openfl::net::SharedObject_obj::_hx___getPath(name,localPath));
            		}
            		else {
HXDLIN( 584)			return true;
            		}
HXDLIN( 584)		return false;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxSharedObject_obj,exists,return )

bool FlxSharedObject_obj::newExists(::String name,::String localPath){
            	HX_STACKFRAME(&_hx_pos_6b726de06a800834_593_newExists)
HXDLIN( 593)		return ::sys::FileSystem_obj::exists(::flixel::util::_FlxSave::FlxSharedObject_obj::getPath(localPath,name));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxSharedObject_obj,newExists,return )

::String FlxSharedObject_obj::getLegacyPath(::String localPath,::String name){
            	HX_STACKFRAME(&_hx_pos_6b726de06a800834_598_getLegacyPath)
HXDLIN( 598)		return ::openfl::net::SharedObject_obj::_hx___getPath(localPath,name);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxSharedObject_obj,getLegacyPath,return )

bool FlxSharedObject_obj::legacyExists(::String name,::String localPath){
            	HX_STACKFRAME(&_hx_pos_6b726de06a800834_606_legacyExists)
HXDLIN( 606)		return ::sys::FileSystem_obj::exists(::openfl::net::SharedObject_obj::_hx___getPath(localPath,name));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxSharedObject_obj,legacyExists,return )


::hx::ObjectPtr< FlxSharedObject_obj > FlxSharedObject_obj::__new() {
	::hx::ObjectPtr< FlxSharedObject_obj > __this = new FlxSharedObject_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< FlxSharedObject_obj > FlxSharedObject_obj::__alloc(::hx::Ctx *_hx_ctx) {
	FlxSharedObject_obj *__this = (FlxSharedObject_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FlxSharedObject_obj), true, "flixel.util._FlxSave.FlxSharedObject"));
	*(void **)__this = FlxSharedObject_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

FlxSharedObject_obj::FlxSharedObject_obj()
{
}

::hx::Val FlxSharedObject_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"flush") ) { return ::hx::Val( flush_dyn() ); }
		if (HX_FIELD_EQ(inName,"clear") ) { return ::hx::Val( clear_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool FlxSharedObject_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"all") ) { outValue = ( all ); return true; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"init") ) { outValue = init_dyn(); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"onExit") ) { outValue = onExit_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"exists") ) { outValue = exists_dyn(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"getData") ) { outValue = getData_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"getPath") ) { outValue = getPath_dyn(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"getLocal") ) { outValue = getLocal_dyn(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"newExists") ) { outValue = newExists_dyn(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"legacyExists") ) { outValue = legacyExists_dyn(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"getLegacyPath") ) { outValue = getLegacyPath_dyn(); return true; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"getDefaultLocalPath") ) { outValue = getDefaultLocalPath_dyn(); return true; }
	}
	return false;
}

bool FlxSharedObject_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"all") ) { all=ioValue.Cast<  ::haxe::ds::StringMap >(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *FlxSharedObject_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo FlxSharedObject_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(void *) &FlxSharedObject_obj::all,HX_("all",21,f9,49,00)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String FlxSharedObject_obj_sMemberFields[] = {
	HX_("flush",c4,62,9b,02),
	HX_("clear",8d,71,5b,48),
	::String(null()) };

static void FlxSharedObject_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxSharedObject_obj::all,"all");
};

#ifdef HXCPP_VISIT_ALLOCS
static void FlxSharedObject_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxSharedObject_obj::all,"all");
};

#endif

::hx::Class FlxSharedObject_obj::__mClass;

static ::String FlxSharedObject_obj_sStaticFields[] = {
	HX_("all",21,f9,49,00),
	HX_("init",10,3b,bb,45),
	HX_("onExit",dd,ff,a7,e5),
	HX_("getDefaultLocalPath",65,3c,b3,89),
	HX_("getLocal",f5,d8,c7,d8),
	HX_("getData",e0,05,e6,14),
	HX_("getPath",5b,95,d4,1c),
	HX_("exists",dc,1d,e0,bf),
	HX_("newExists",5c,ea,90,7d),
	HX_("getLegacyPath",c4,40,05,f0),
	HX_("legacyExists",05,69,8d,9a),
	::String(null())
};

void FlxSharedObject_obj::__register()
{
	FlxSharedObject_obj _hx_dummy;
	FlxSharedObject_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.util._FlxSave.FlxSharedObject",d2,a8,60,eb);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &FlxSharedObject_obj::__GetStatic;
	__mClass->mSetStaticField = &FlxSharedObject_obj::__SetStatic;
	__mClass->mMarkFunc = FlxSharedObject_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(FlxSharedObject_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(FlxSharedObject_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< FlxSharedObject_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = FlxSharedObject_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxSharedObject_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxSharedObject_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace util
} // end namespace _FlxSave
