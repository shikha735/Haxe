#include <hxcpp.h>

#ifndef INCLUDED_Player
#include <Player.h>
#endif

::Player Player_obj::AI;

::Player Player_obj::Human;

HX_DEFINE_CREATE_ENUM(Player_obj)

int Player_obj::__FindIndex(::String inName)
{
	if (inName==HX_CSTRING("AI")) return 1;
	if (inName==HX_CSTRING("Human")) return 0;
	return super::__FindIndex(inName);
}

int Player_obj::__FindArgCount(::String inName)
{
	if (inName==HX_CSTRING("AI")) return 0;
	if (inName==HX_CSTRING("Human")) return 0;
	return super::__FindArgCount(inName);
}

Dynamic Player_obj::__Field(const ::String &inName,bool inCallProp)
{
	if (inName==HX_CSTRING("AI")) return AI;
	if (inName==HX_CSTRING("Human")) return Human;
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_CSTRING("Human"),
	HX_CSTRING("AI"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Player_obj::AI,"AI");
	HX_MARK_MEMBER_NAME(Player_obj::Human,"Human");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Player_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Player_obj::AI,"AI");
	HX_VISIT_MEMBER_NAME(Player_obj::Human,"Human");
};
#endif

static ::String sMemberFields[] = { ::String(null()) };
Class Player_obj::__mClass;

Dynamic __Create_Player_obj() { return new Player_obj; }

void Player_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("Player"), hx::TCanCast< Player_obj >,sStaticFields,sMemberFields,
	&__Create_Player_obj, &__Create,
	&super::__SGetClass(), &CreatePlayer_obj, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
}

void Player_obj::__boot()
{
hx::Static(AI) = hx::CreateEnum< Player_obj >(HX_CSTRING("AI"),1);
hx::Static(Human) = hx::CreateEnum< Player_obj >(HX_CSTRING("Human"),0);
}


