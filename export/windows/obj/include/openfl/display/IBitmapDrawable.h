// Generated by Haxe 4.3.4
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#define INCLUDED_openfl_display_IBitmapDrawable

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,geom,ColorTransform)
HX_DECLARE_CLASS2(openfl,geom,Matrix)
HX_DECLARE_CLASS2(openfl,geom,Rectangle)

namespace openfl{
namespace display{


class HXCPP_CLASS_ATTRIBUTES IBitmapDrawable_obj {
	public:
		typedef ::hx::Object super;
		HX_DO_INTERFACE_RTTI;

		void (::hx::Object :: *_hx__hx___getBounds)( ::openfl::geom::Rectangle rect, ::openfl::geom::Matrix matrix); 
		static inline void _hx___getBounds( ::Dynamic _hx_, ::openfl::geom::Rectangle rect, ::openfl::geom::Matrix matrix) {
			(_hx_.mPtr->*( ::hx::interface_cast< ::openfl::display::IBitmapDrawable_obj *>(_hx_.mPtr->_hx_getInterface(0xc1c6fbe4)))->_hx__hx___getBounds)(rect,matrix);
		}
		void (::hx::Object :: *_hx__hx___update)(bool transformOnly,bool updateChildren); 
		static inline void _hx___update( ::Dynamic _hx_,bool transformOnly,bool updateChildren) {
			(_hx_.mPtr->*( ::hx::interface_cast< ::openfl::display::IBitmapDrawable_obj *>(_hx_.mPtr->_hx_getInterface(0xc1c6fbe4)))->_hx__hx___update)(transformOnly,updateChildren);
		}
		void (::hx::Object :: *_hx__hx___updateTransforms)( ::openfl::geom::Matrix overrideTransform); 
		static inline void _hx___updateTransforms( ::Dynamic _hx_, ::openfl::geom::Matrix overrideTransform) {
			(_hx_.mPtr->*( ::hx::interface_cast< ::openfl::display::IBitmapDrawable_obj *>(_hx_.mPtr->_hx_getInterface(0xc1c6fbe4)))->_hx__hx___updateTransforms)(overrideTransform);
		}
};

} // end namespace openfl
} // end namespace display

#endif /* INCLUDED_openfl_display_IBitmapDrawable */ 
