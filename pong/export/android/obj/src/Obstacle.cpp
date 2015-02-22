#include <hxcpp.h>

#ifndef INCLUDED_Obstacle
#include <Obstacle.h>
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

Void Obstacle_obj::__construct()
{
HX_STACK_FRAME("Obstacle","new",0xcbb8aae1,"Obstacle.new","Obstacle.hx",8,0xd7960baf)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(9)
	super::__construct();
	HX_STACK_LINE(10)
	this->get_graphics()->beginFill((int)16777215,null());
	HX_STACK_LINE(11)
	this->get_graphics()->drawRect((int)0,(int)0,(int)25,(int)30);
	HX_STACK_LINE(12)
	this->get_graphics()->endFill();
}
;
	return null();
}

//Obstacle_obj::~Obstacle_obj() { }

Dynamic Obstacle_obj::__CreateEmpty() { return  new Obstacle_obj; }
hx::ObjectPtr< Obstacle_obj > Obstacle_obj::__new()
{  hx::ObjectPtr< Obstacle_obj > result = new Obstacle_obj();
	result->__construct();
	return result;}

Dynamic Obstacle_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Obstacle_obj > result = new Obstacle_obj();
	result->__construct();
	return result;}


Obstacle_obj::Obstacle_obj()
{
}

Dynamic Obstacle_obj::__Field(const ::String &inName,bool inCallProp)
{
	return super::__Field(inName,inCallProp);
}

Dynamic Obstacle_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void Obstacle_obj::__GetFields(Array< ::String> &outFields)
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
	HX_MARK_MEMBER_NAME(Obstacle_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Obstacle_obj::__mClass,"__mClass");
};

#endif

Class Obstacle_obj::__mClass;

void Obstacle_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("Obstacle"), hx::TCanCast< Obstacle_obj> ,sStaticFields,sMemberFields,
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

void Obstacle_obj::__boot()
{
}

