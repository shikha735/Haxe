#include <hxcpp.h>

#ifndef INCLUDED_Ball
#include <Ball.h>
#endif
#ifndef INCLUDED_openfl__v2_display_DisplayObject
#include <openfl/_v2/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl__v2_display_DisplayObjectContainer
#include <openfl/_v2/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl__v2_display_Graphics
#include <openfl/_v2/display/Graphics.h>
#endif
#ifndef INCLUDED_openfl__v2_display_IBitmapDrawable
#include <openfl/_v2/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl__v2_display_InteractiveObject
#include <openfl/_v2/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl__v2_display_Sprite
#include <openfl/_v2/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl__v2_events_EventDispatcher
#include <openfl/_v2/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__v2_events_IEventDispatcher
#include <openfl/_v2/events/IEventDispatcher.h>
#endif

Void Ball_obj::__construct()
{
HX_STACK_FRAME("Ball","new",0xfd30aa91,"Ball.new","Ball.hx",8,0xf7f391ff)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(9)
	super::__construct();
	HX_STACK_LINE(10)
	this->get_graphics()->beginFill((int)16777215,null());
	HX_STACK_LINE(11)
	this->get_graphics()->drawCircle((int)0,(int)0,(int)10);
	HX_STACK_LINE(12)
	this->get_graphics()->endFill();
}
;
	return null();
}

//Ball_obj::~Ball_obj() { }

Dynamic Ball_obj::__CreateEmpty() { return  new Ball_obj; }
hx::ObjectPtr< Ball_obj > Ball_obj::__new()
{  hx::ObjectPtr< Ball_obj > result = new Ball_obj();
	result->__construct();
	return result;}

Dynamic Ball_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Ball_obj > result = new Ball_obj();
	result->__construct();
	return result;}


Ball_obj::Ball_obj()
{
}

Dynamic Ball_obj::__Field(const ::String &inName,bool inCallProp)
{
	return super::__Field(inName,inCallProp);
}

Dynamic Ball_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void Ball_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Ball_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Ball_obj::__mClass,"__mClass");
};

#endif

Class Ball_obj::__mClass;

void Ball_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("Ball"), hx::TCanCast< Ball_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatics
#endif
#ifdef HXCPP_SCRIPTABLE
    , sMemberStorageInfo
#endif
);
}

void Ball_obj::__boot()
{
}

