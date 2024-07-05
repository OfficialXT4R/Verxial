// Generated by Haxe 4.3.4
#ifndef INCLUDED_lime_system_BackgroundWorker
#define INCLUDED_lime_system_BackgroundWorker

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(lime,app,_Event_Dynamic_Void)
HX_DECLARE_CLASS2(lime,_hx_system,BackgroundWorker)
HX_DECLARE_CLASS2(sys,thread,Deque)
HX_DECLARE_CLASS3(sys,thread,_Thread,HaxeThread)

namespace lime{
namespace _hx_system{


class HXCPP_CLASS_ATTRIBUTES BackgroundWorker_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef BackgroundWorker_obj OBJ_;
		BackgroundWorker_obj();

	public:
		enum { _hx_ClassId = 0x4be63f70 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="lime.system.BackgroundWorker")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"lime.system.BackgroundWorker"); }
		static ::hx::ObjectPtr< BackgroundWorker_obj > __new();
		static ::hx::ObjectPtr< BackgroundWorker_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~BackgroundWorker_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("BackgroundWorker",2c,bb,2f,ae); }

		static void __boot();
		static ::String MESSAGE_COMPLETE;
		static ::String MESSAGE_ERROR;
		bool canceled;
		bool completed;
		 ::lime::app::_Event_Dynamic_Void doWork;
		 ::lime::app::_Event_Dynamic_Void onComplete;
		 ::lime::app::_Event_Dynamic_Void onError;
		 ::lime::app::_Event_Dynamic_Void onProgress;
		 ::Dynamic _hx___runMessage;
		 ::sys::thread::Deque _hx___messageQueue;
		 ::sys::thread::_Thread::HaxeThread _hx___workerThread;
		void cancel();
		::Dynamic cancel_dyn();

		void run( ::Dynamic message);
		::Dynamic run_dyn();

		void sendComplete( ::Dynamic message);
		::Dynamic sendComplete_dyn();

		void sendError( ::Dynamic message);
		::Dynamic sendError_dyn();

		void sendProgress( ::Dynamic message);
		::Dynamic sendProgress_dyn();

		void _hx___doWork();
		::Dynamic _hx___doWork_dyn();

		void _hx___update(int deltaTime);
		::Dynamic _hx___update_dyn();

};

} // end namespace lime
} // end namespace system

#endif /* INCLUDED_lime_system_BackgroundWorker */ 
