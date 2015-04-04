#include <hxcpp.h>

#ifndef INCLUDED_Paddle
#include <Paddle.h>
#endif

::Paddle Paddle_obj::paddle1;

::Paddle Paddle_obj::paddle2;

HX_DEFINE_CREATE_ENUM(Paddle_obj)

int Paddle_obj::__FindIndex(::String inName)
{
	if (inName==HX_CSTRING("paddle1")) return 0;
	if (inName==HX_CSTRING("paddle2")) return 1;
	return super::__FindIndex(inName);
}

int Paddle_obj::__FindArgCount(::String inName)
{
	if (inName==HX_CSTRING("paddle1")) return 0;
	if (inName==HX_CSTRING("paddle2")) return 0;
	return super::__FindArgCount(inName);
}

Dynamic Paddle_obj::__Field(const ::String &inName,bool inCallProp)
{
	if (inName==HX_CSTRING("paddle1")) return paddle1;
	if (inName==HX_CSTRING("paddle2")) return paddle2;
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_CSTRING("paddle1"),
	HX_CSTRING("paddle2"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Paddle_obj::paddle1,"paddle1");
	HX_MARK_MEMBER_NAME(Paddle_obj::paddle2,"paddle2");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Paddle_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Paddle_obj::paddle1,"paddle1");
	HX_VISIT_MEMBER_NAME(Paddle_obj::paddle2,"paddle2");
};
#endif

static ::String sMemberFields[] = { ::String(null()) };
Class Paddle_obj::__mClass;

Dynamic __Create_Paddle_obj() { return new Paddle_obj; }

void Paddle_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("Paddle"), hx::TCanCast< Paddle_obj >,sStaticFields,sMemberFields,
	&__Create_Paddle_obj, &__Create,
	&super::__SGetClass(), &CreatePaddle_obj, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
}

void Paddle_obj::__boot()
{
hx::Static(paddle1) = hx::CreateEnum< Paddle_obj >(HX_CSTRING("paddle1"),0);
hx::Static(paddle2) = hx::CreateEnum< Paddle_obj >(HX_CSTRING("paddle2"),1);
}


