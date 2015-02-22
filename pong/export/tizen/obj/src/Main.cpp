#include <hxcpp.h>

#ifndef INCLUDED_Ball
#include <Ball.h>
#endif
#ifndef INCLUDED_Block
#include <Block.h>
#endif
#ifndef INCLUDED_GameState
#include <GameState.h>
#endif
#ifndef INCLUDED_Main
#include <Main.h>
#endif
#ifndef INCLUDED_Platform
#include <Platform.h>
#endif
#ifndef INCLUDED_Player
#include <Player.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_openfl__v2_Lib
#include <openfl/_v2/Lib.h>
#endif
#ifndef INCLUDED_openfl__v2_display_DisplayObject
#include <openfl/_v2/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl__v2_display_DisplayObjectContainer
#include <openfl/_v2/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl__v2_display_IBitmapDrawable
#include <openfl/_v2/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl__v2_display_InteractiveObject
#include <openfl/_v2/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl__v2_display_MovieClip
#include <openfl/_v2/display/MovieClip.h>
#endif
#ifndef INCLUDED_openfl__v2_display_Sprite
#include <openfl/_v2/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl__v2_display_Stage
#include <openfl/_v2/display/Stage.h>
#endif
#ifndef INCLUDED_openfl__v2_events_Event
#include <openfl/_v2/events/Event.h>
#endif
#ifndef INCLUDED_openfl__v2_events_EventDispatcher
#include <openfl/_v2/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__v2_events_IEventDispatcher
#include <openfl/_v2/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__v2_events_KeyboardEvent
#include <openfl/_v2/events/KeyboardEvent.h>
#endif
#ifndef INCLUDED_openfl__v2_geom_Point
#include <openfl/_v2/geom/Point.h>
#endif
#ifndef INCLUDED_openfl__v2_text_TextField
#include <openfl/_v2/text/TextField.h>
#endif
#ifndef INCLUDED_openfl__v2_text_TextFormat
#include <openfl/_v2/text/TextFormat.h>
#endif
#ifndef INCLUDED_openfl__v2_text_TextFormatAlign
#include <openfl/_v2/text/TextFormatAlign.h>
#endif
#ifndef INCLUDED_openfl_display_StageAlign
#include <openfl/display/StageAlign.h>
#endif
#ifndef INCLUDED_openfl_display_StageScaleMode
#include <openfl/display/StageScaleMode.h>
#endif

Void Main_obj::__construct()
{
HX_STACK_FRAME("Main","new",0x6616a5cb,"Main.new","Main.hx",218,0x087e5c05)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(219)
	super::__construct();
	HX_STACK_LINE(220)
	this->addEventListener(::openfl::_v2::events::Event_obj::ADDED_TO_STAGE,this->added_dyn(),null(),null(),null());
}
;
	return null();
}

//Main_obj::~Main_obj() { }

Dynamic Main_obj::__CreateEmpty() { return  new Main_obj; }
hx::ObjectPtr< Main_obj > Main_obj::__new()
{  hx::ObjectPtr< Main_obj > result = new Main_obj();
	result->__construct();
	return result;}

Dynamic Main_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Main_obj > result = new Main_obj();
	result->__construct();
	return result;}

Void Main_obj::resize( Dynamic e){
{
		HX_STACK_FRAME("Main","resize",0x39257969,"Main.resize","Main.hx",45,0x087e5c05)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(45)
		if ((!(this->inited))){
			HX_STACK_LINE(45)
			this->init();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Main_obj,resize,(void))

Void Main_obj::init( ){
{
		HX_STACK_FRAME("Main","init",0xea732345,"Main.init","Main.hx",50,0x087e5c05)
		HX_STACK_THIS(this)
		HX_STACK_LINE(51)
		if ((this->inited)){
			HX_STACK_LINE(51)
			return null();
		}
		HX_STACK_LINE(52)
		this->inited = true;
		HX_STACK_LINE(54)
		::Platform _g = ::Platform_obj::__new();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(54)
		this->platform1 = _g;
		HX_STACK_LINE(55)
		this->platform1->set_y((int)5);
		HX_STACK_LINE(56)
		this->platform1->set_x((int)200);
		HX_STACK_LINE(57)
		this->addChild(this->platform1);
		HX_STACK_LINE(59)
		::Platform _g1 = ::Platform_obj::__new();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(59)
		this->platform2 = _g1;
		HX_STACK_LINE(60)
		this->platform2->set_x((int)200);
		HX_STACK_LINE(61)
		this->platform2->set_y((int)480);
		HX_STACK_LINE(62)
		this->addChild(this->platform2);
		HX_STACK_LINE(64)
		::Block _g2 = ::Block_obj::__new();		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(64)
		this->block1 = _g2;
		HX_STACK_LINE(65)
		this->block1->set_x((int)225);
		HX_STACK_LINE(66)
		this->block1->set_y((int)250);
		HX_STACK_LINE(67)
		this->addChild(this->block1);
		HX_STACK_LINE(69)
		::Ball _g3 = ::Ball_obj::__new();		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(69)
		this->ball = _g3;
		HX_STACK_LINE(70)
		this->ball->set_x((int)250);
		HX_STACK_LINE(71)
		this->ball->set_y((int)250);
		HX_STACK_LINE(72)
		this->addChild(this->ball);
		HX_STACK_LINE(74)
		::openfl::_v2::text::TextFormat scoreFormat = ::openfl::_v2::text::TextFormat_obj::__new(HX_CSTRING("Verdana"),(int)24,(int)12303291,true,null(),null(),null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(scoreFormat,"scoreFormat");
		HX_STACK_LINE(75)
		scoreFormat->align = ::openfl::_v2::text::TextFormatAlign_obj::CENTER;
		HX_STACK_LINE(77)
		::openfl::_v2::text::TextField _g4 = ::openfl::_v2::text::TextField_obj::__new();		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(77)
		this->scoreField = _g4;
		HX_STACK_LINE(78)
		this->addChild(this->scoreField);
		HX_STACK_LINE(79)
		this->scoreField->set_width((int)500);
		HX_STACK_LINE(80)
		this->scoreField->set_y((int)30);
		HX_STACK_LINE(81)
		this->scoreField->set_defaultTextFormat(scoreFormat);
		HX_STACK_LINE(82)
		this->scoreField->set_selectable(false);
		HX_STACK_LINE(84)
		::openfl::_v2::text::TextFormat messageFormat = ::openfl::_v2::text::TextFormat_obj::__new(HX_CSTRING("Verdana"),(int)18,(int)12303291,true,null(),null(),null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(messageFormat,"messageFormat");
		HX_STACK_LINE(85)
		messageFormat->align = ::openfl::_v2::text::TextFormatAlign_obj::CENTER;
		HX_STACK_LINE(87)
		::openfl::_v2::text::TextField _g5 = ::openfl::_v2::text::TextField_obj::__new();		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(87)
		this->messageField = _g5;
		HX_STACK_LINE(88)
		this->addChild(this->messageField);
		HX_STACK_LINE(89)
		this->messageField->set_width((int)500);
		HX_STACK_LINE(90)
		this->messageField->set_y((int)400);
		HX_STACK_LINE(91)
		this->messageField->set_defaultTextFormat(messageFormat);
		HX_STACK_LINE(92)
		this->messageField->set_selectable(false);
		HX_STACK_LINE(93)
		this->messageField->set_text(HX_CSTRING("Press SPACE to start\nUse ARROW KEYS to move your platform"));
		HX_STACK_LINE(95)
		this->scorePlayer = (int)0;
		HX_STACK_LINE(96)
		this->scoreAI = (int)0;
		HX_STACK_LINE(97)
		this->arrowKeyUp = false;
		HX_STACK_LINE(98)
		this->arrowKeyDown = false;
		HX_STACK_LINE(99)
		this->platformSpeed = (int)7;
		HX_STACK_LINE(100)
		this->ballSpeed = (int)7;
		HX_STACK_LINE(101)
		::openfl::_v2::geom::Point _g6 = ::openfl::_v2::geom::Point_obj::__new((int)0,(int)0);		HX_STACK_VAR(_g6,"_g6");
		HX_STACK_LINE(101)
		this->ballMovement = _g6;
		HX_STACK_LINE(102)
		this->setGameState(::GameState_obj::Paused);
		HX_STACK_LINE(104)
		this->get_stage()->addEventListener(::openfl::_v2::events::KeyboardEvent_obj::KEY_DOWN,this->keyDown_dyn(),null(),null(),null());
		HX_STACK_LINE(105)
		this->get_stage()->addEventListener(::openfl::_v2::events::KeyboardEvent_obj::KEY_UP,this->keyUp_dyn(),null(),null(),null());
		HX_STACK_LINE(106)
		this->addEventListener(::openfl::_v2::events::Event_obj::ENTER_FRAME,this->everyFrame_dyn(),null(),null(),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Main_obj,init,(void))

Void Main_obj::setGameState( ::GameState state){
{
		HX_STACK_FRAME("Main","setGameState",0x0450c9f2,"Main.setGameState","Main.hx",109,0x087e5c05)
		HX_STACK_THIS(this)
		HX_STACK_ARG(state,"state")
		HX_STACK_LINE(110)
		this->currentGameState = state;
		HX_STACK_LINE(111)
		this->updateScore();
		HX_STACK_LINE(112)
		if (((state == ::GameState_obj::Paused))){
			HX_STACK_LINE(113)
			this->messageField->set_alpha((int)1);
		}
		else{
			HX_STACK_LINE(115)
			this->messageField->set_alpha((int)0);
			HX_STACK_LINE(116)
			this->platform1->set_x((int)200);
			HX_STACK_LINE(117)
			this->platform2->set_x((int)200);
			HX_STACK_LINE(118)
			this->ball->set_y((int)250);
			HX_STACK_LINE(119)
			this->ball->set_x((int)250);
			HX_STACK_LINE(120)
			Float _g = ::Math_obj::random();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(120)
			int direction;		HX_STACK_VAR(direction,"direction");
			HX_STACK_LINE(120)
			if (((_g > .5))){
				HX_STACK_LINE(120)
				direction = (int)1;
			}
			else{
				HX_STACK_LINE(120)
				direction = (int)-1;
			}
			HX_STACK_LINE(121)
			Float _g1 = ::Math_obj::random();		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(121)
			Float _g2 = (_g1 * ::Math_obj::PI);		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(121)
			Float _g3 = (Float(_g2) / Float((int)2));		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(121)
			Float randomAngle = (_g3 - (int)45);		HX_STACK_VAR(randomAngle,"randomAngle");
			HX_STACK_LINE(122)
			Float _g4 = ::Math_obj::cos(randomAngle);		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(122)
			Float _g5 = (direction * _g4);		HX_STACK_VAR(_g5,"_g5");
			HX_STACK_LINE(122)
			Float _g6 = (_g5 * this->ballSpeed);		HX_STACK_VAR(_g6,"_g6");
			HX_STACK_LINE(122)
			this->ballMovement->y = _g6;
			HX_STACK_LINE(123)
			Float _g7 = ::Math_obj::sin(randomAngle);		HX_STACK_VAR(_g7,"_g7");
			HX_STACK_LINE(123)
			Float _g8 = (_g7 * this->ballSpeed);		HX_STACK_VAR(_g8,"_g8");
			HX_STACK_LINE(123)
			this->ballMovement->x = _g8;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Main_obj,setGameState,(void))

Void Main_obj::keyDown( ::openfl::_v2::events::KeyboardEvent event){
{
		HX_STACK_FRAME("Main","keyDown",0x0078d08c,"Main.keyDown","Main.hx",128,0x087e5c05)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(128)
		if (((bool((this->currentGameState == ::GameState_obj::Paused)) && bool((event->keyCode == (int)32))))){
			HX_STACK_LINE(129)
			this->setGameState(::GameState_obj::Playing);
		}
		else{
			HX_STACK_LINE(130)
			if (((event->keyCode == (int)37))){
				HX_STACK_LINE(131)
				this->arrowKeyUp = true;
			}
			else{
				HX_STACK_LINE(132)
				if (((event->keyCode == (int)39))){
					HX_STACK_LINE(133)
					this->arrowKeyDown = true;
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Main_obj,keyDown,(void))

Void Main_obj::keyUp( ::openfl::_v2::events::KeyboardEvent event){
{
		HX_STACK_FRAME("Main","keyUp",0x5b320005,"Main.keyUp","Main.hx",138,0x087e5c05)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(138)
		if (((event->keyCode == (int)37))){
			HX_STACK_LINE(139)
			this->arrowKeyUp = false;
		}
		else{
			HX_STACK_LINE(140)
			if (((event->keyCode == (int)39))){
				HX_STACK_LINE(141)
				this->arrowKeyDown = false;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Main_obj,keyUp,(void))

Void Main_obj::everyFrame( ::openfl::_v2::events::Event event){
{
		HX_STACK_FRAME("Main","everyFrame",0xc084a887,"Main.everyFrame","Main.hx",146,0x087e5c05)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(146)
		if (((this->currentGameState == ::GameState_obj::Playing))){
			HX_STACK_LINE(148)
			if ((this->arrowKeyUp)){
				HX_STACK_LINE(149)
				::Platform _g = this->platform1;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(149)
				Float _g1 = _g->get_x();		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(149)
				Float _g11 = (_g1 - this->platformSpeed);		HX_STACK_VAR(_g11,"_g11");
				HX_STACK_LINE(149)
				_g->set_x(_g11);
			}
			HX_STACK_LINE(151)
			if ((this->arrowKeyDown)){
				HX_STACK_LINE(152)
				::Platform _g = this->platform1;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(152)
				Float _g2 = _g->get_x();		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(152)
				Float _g3 = (_g2 + this->platformSpeed);		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(152)
				_g->set_x(_g3);
			}
			HX_STACK_LINE(155)
			Float _g4 = this->ball->get_y();		HX_STACK_VAR(_g4,"_g4");
			struct _Function_2_1{
				inline static bool Block( hx::ObjectPtr< ::Main_obj > __this){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Main.hx",155,0x087e5c05)
					{
						HX_STACK_LINE(155)
						Float _g5 = __this->ball->get_x();		HX_STACK_VAR(_g5,"_g5");
						HX_STACK_LINE(155)
						Float _g6 = __this->platform2->get_x();		HX_STACK_VAR(_g6,"_g6");
						HX_STACK_LINE(155)
						Float _g7 = (_g6 + (int)70);		HX_STACK_VAR(_g7,"_g7");
						HX_STACK_LINE(155)
						return (_g5 > _g7);
					}
					return null();
				}
			};
			HX_STACK_LINE(155)
			if (((  (((_g4 > (int)300))) ? bool(_Function_2_1::Block(this)) : bool(false) ))){
				HX_STACK_LINE(156)
				::Platform _g = this->platform2;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(156)
				Float _g8 = _g->get_x();		HX_STACK_VAR(_g8,"_g8");
				HX_STACK_LINE(156)
				Float _g9 = (_g8 + this->platformSpeed);		HX_STACK_VAR(_g9,"_g9");
				HX_STACK_LINE(156)
				_g->set_x(_g9);
			}
			HX_STACK_LINE(158)
			Float _g10 = this->ball->get_y();		HX_STACK_VAR(_g10,"_g10");
			struct _Function_2_2{
				inline static bool Block( hx::ObjectPtr< ::Main_obj > __this){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Main.hx",158,0x087e5c05)
					{
						HX_STACK_LINE(158)
						Float _g11 = __this->ball->get_x();		HX_STACK_VAR(_g11,"_g11");
						HX_STACK_LINE(158)
						Float _g12 = __this->platform2->get_x();		HX_STACK_VAR(_g12,"_g12");
						HX_STACK_LINE(158)
						Float _g13 = (_g12 + (int)30);		HX_STACK_VAR(_g13,"_g13");
						HX_STACK_LINE(158)
						return (_g11 < _g13);
					}
					return null();
				}
			};
			HX_STACK_LINE(158)
			if (((  (((_g10 > (int)300))) ? bool(_Function_2_2::Block(this)) : bool(false) ))){
				HX_STACK_LINE(159)
				::Platform _g = this->platform2;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(159)
				Float _g14 = _g->get_x();		HX_STACK_VAR(_g14,"_g14");
				HX_STACK_LINE(159)
				Float _g15 = (_g14 - this->platformSpeed);		HX_STACK_VAR(_g15,"_g15");
				HX_STACK_LINE(159)
				_g->set_x(_g15);
			}
			HX_STACK_LINE(162)
			Float _g16 = this->platform1->get_x();		HX_STACK_VAR(_g16,"_g16");
			HX_STACK_LINE(162)
			if (((_g16 < (int)5))){
				HX_STACK_LINE(162)
				this->platform1->set_x((int)5);
			}
			HX_STACK_LINE(163)
			Float _g17 = this->platform1->get_x();		HX_STACK_VAR(_g17,"_g17");
			HX_STACK_LINE(163)
			if (((_g17 > (int)395))){
				HX_STACK_LINE(163)
				this->platform1->set_x((int)395);
			}
			HX_STACK_LINE(165)
			Float _g18 = this->platform2->get_x();		HX_STACK_VAR(_g18,"_g18");
			HX_STACK_LINE(165)
			if (((_g18 < (int)5))){
				HX_STACK_LINE(165)
				this->platform2->set_x((int)5);
			}
			HX_STACK_LINE(166)
			Float _g19 = this->platform2->get_x();		HX_STACK_VAR(_g19,"_g19");
			HX_STACK_LINE(166)
			if (((_g19 > (int)395))){
				HX_STACK_LINE(166)
				this->platform2->set_x((int)395);
			}
			HX_STACK_LINE(168)
			{
				HX_STACK_LINE(168)
				::Ball _g = this->ball;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(168)
				Float _g20 = _g->get_y();		HX_STACK_VAR(_g20,"_g20");
				HX_STACK_LINE(168)
				Float _g21 = (_g20 + this->ballMovement->y);		HX_STACK_VAR(_g21,"_g21");
				HX_STACK_LINE(168)
				_g->set_y(_g21);
			}
			HX_STACK_LINE(169)
			{
				HX_STACK_LINE(169)
				::Ball _g = this->ball;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(169)
				Float _g22 = _g->get_x();		HX_STACK_VAR(_g22,"_g22");
				HX_STACK_LINE(169)
				Float _g23 = (_g22 + this->ballMovement->x);		HX_STACK_VAR(_g23,"_g23");
				HX_STACK_LINE(169)
				_g->set_x(_g23);
			}
			struct _Function_2_3{
				inline static bool Block( hx::ObjectPtr< ::Main_obj > __this){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Main.hx",171,0x087e5c05)
					{
						HX_STACK_LINE(171)
						Float _g24 = __this->ball->get_y();		HX_STACK_VAR(_g24,"_g24");
						HX_STACK_LINE(171)
						return (_g24 < (int)30);
					}
					return null();
				}
			};
			struct _Function_2_4{
				inline static bool Block( hx::ObjectPtr< ::Main_obj > __this){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Main.hx",171,0x087e5c05)
					{
						HX_STACK_LINE(171)
						Float _g25 = __this->ball->get_x();		HX_STACK_VAR(_g25,"_g25");
						HX_STACK_LINE(171)
						Float _g26 = __this->platform1->get_x();		HX_STACK_VAR(_g26,"_g26");
						HX_STACK_LINE(171)
						return (_g25 >= _g26);
					}
					return null();
				}
			};
			struct _Function_2_5{
				inline static bool Block( hx::ObjectPtr< ::Main_obj > __this){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Main.hx",171,0x087e5c05)
					{
						HX_STACK_LINE(171)
						Float _g27 = __this->ball->get_x();		HX_STACK_VAR(_g27,"_g27");
						HX_STACK_LINE(171)
						Float _g28 = __this->platform1->get_x();		HX_STACK_VAR(_g28,"_g28");
						HX_STACK_LINE(171)
						Float _g29 = (_g28 + (int)100);		HX_STACK_VAR(_g29,"_g29");
						HX_STACK_LINE(171)
						return (_g27 <= _g29);
					}
					return null();
				}
			};
			HX_STACK_LINE(171)
			if (((  (((  (((  (((this->ballMovement->y < (int)0))) ? bool(_Function_2_3::Block(this)) : bool(false) ))) ? bool(_Function_2_4::Block(this)) : bool(false) ))) ? bool(_Function_2_5::Block(this)) : bool(false) ))){
				HX_STACK_LINE(172)
				this->bounceBall();
				HX_STACK_LINE(173)
				this->ball->set_y((int)30);
			}
			struct _Function_2_6{
				inline static bool Block( hx::ObjectPtr< ::Main_obj > __this){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Main.hx",175,0x087e5c05)
					{
						HX_STACK_LINE(175)
						Float _g30 = __this->ball->get_y();		HX_STACK_VAR(_g30,"_g30");
						HX_STACK_LINE(175)
						return (_g30 > (int)470);
					}
					return null();
				}
			};
			struct _Function_2_7{
				inline static bool Block( hx::ObjectPtr< ::Main_obj > __this){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Main.hx",175,0x087e5c05)
					{
						HX_STACK_LINE(175)
						Float _g31 = __this->ball->get_x();		HX_STACK_VAR(_g31,"_g31");
						HX_STACK_LINE(175)
						Float _g32 = __this->platform2->get_x();		HX_STACK_VAR(_g32,"_g32");
						HX_STACK_LINE(175)
						return (_g31 >= _g32);
					}
					return null();
				}
			};
			struct _Function_2_8{
				inline static bool Block( hx::ObjectPtr< ::Main_obj > __this){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Main.hx",175,0x087e5c05)
					{
						HX_STACK_LINE(175)
						Float _g33 = __this->ball->get_x();		HX_STACK_VAR(_g33,"_g33");
						HX_STACK_LINE(175)
						Float _g34 = __this->platform2->get_x();		HX_STACK_VAR(_g34,"_g34");
						HX_STACK_LINE(175)
						Float _g35 = (_g34 + (int)100);		HX_STACK_VAR(_g35,"_g35");
						HX_STACK_LINE(175)
						return (_g33 <= _g35);
					}
					return null();
				}
			};
			HX_STACK_LINE(175)
			if (((  (((  (((  (((this->ballMovement->y > (int)0))) ? bool(_Function_2_6::Block(this)) : bool(false) ))) ? bool(_Function_2_7::Block(this)) : bool(false) ))) ? bool(_Function_2_8::Block(this)) : bool(false) ))){
				HX_STACK_LINE(176)
				this->bounceBall();
				HX_STACK_LINE(177)
				this->ball->set_y((int)470);
			}
			HX_STACK_LINE(188)
			Float _g36 = this->ball->get_x();		HX_STACK_VAR(_g36,"_g36");
			struct _Function_2_9{
				inline static bool Block( hx::ObjectPtr< ::Main_obj > __this){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Main.hx",188,0x087e5c05)
					{
						HX_STACK_LINE(188)
						Float _g37 = __this->ball->get_x();		HX_STACK_VAR(_g37,"_g37");
						HX_STACK_LINE(188)
						return (_g37 > (int)495);
					}
					return null();
				}
			};
			HX_STACK_LINE(188)
			if (((  ((!(((_g36 < (int)5))))) ? bool(_Function_2_9::Block(this)) : bool(true) ))){
				HX_STACK_LINE(188)
				hx::MultEq(this->ballMovement->x,(int)-1);
			}
			HX_STACK_LINE(190)
			Float _g38 = this->ball->get_y();		HX_STACK_VAR(_g38,"_g38");
			HX_STACK_LINE(190)
			if (((_g38 < (int)5))){
				HX_STACK_LINE(190)
				this->winGame(::Player_obj::AI);
			}
			HX_STACK_LINE(191)
			Float _g39 = this->ball->get_y();		HX_STACK_VAR(_g39,"_g39");
			HX_STACK_LINE(191)
			if (((_g39 > (int)495))){
				HX_STACK_LINE(191)
				this->winGame(::Player_obj::Human);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Main_obj,everyFrame,(void))

Void Main_obj::bounceBall( ){
{
		HX_STACK_FRAME("Main","bounceBall",0x95b4759c,"Main.bounceBall","Main.hx",195,0x087e5c05)
		HX_STACK_THIS(this)
		HX_STACK_LINE(196)
		int direction;		HX_STACK_VAR(direction,"direction");
		HX_STACK_LINE(196)
		if (((this->ballMovement->y > (int)0))){
			HX_STACK_LINE(196)
			direction = (int)-1;
		}
		else{
			HX_STACK_LINE(196)
			direction = (int)1;
		}
		HX_STACK_LINE(197)
		Float _g = ::Math_obj::random();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(197)
		Float _g1 = (_g * ::Math_obj::PI);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(197)
		Float _g2 = (Float(_g1) / Float((int)2));		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(197)
		Float randomAngle = (_g2 - (int)45);		HX_STACK_VAR(randomAngle,"randomAngle");
		HX_STACK_LINE(198)
		Float _g3 = ::Math_obj::cos(randomAngle);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(198)
		Float _g4 = (direction * _g3);		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(198)
		Float _g5 = (_g4 * this->ballSpeed);		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(198)
		this->ballMovement->y = _g5;
		HX_STACK_LINE(199)
		Float _g6 = ::Math_obj::sin(randomAngle);		HX_STACK_VAR(_g6,"_g6");
		HX_STACK_LINE(199)
		Float _g7 = (_g6 * this->ballSpeed);		HX_STACK_VAR(_g7,"_g7");
		HX_STACK_LINE(199)
		this->ballMovement->x = _g7;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Main_obj,bounceBall,(void))

Void Main_obj::winGame( ::Player player){
{
		HX_STACK_FRAME("Main","winGame",0x39706d19,"Main.winGame","Main.hx",202,0x087e5c05)
		HX_STACK_THIS(this)
		HX_STACK_ARG(player,"player")
		HX_STACK_LINE(203)
		if (((player == ::Player_obj::Human))){
			HX_STACK_LINE(204)
			(this->scorePlayer)++;
		}
		else{
			HX_STACK_LINE(206)
			(this->scoreAI)++;
		}
		HX_STACK_LINE(208)
		this->setGameState(::GameState_obj::Paused);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Main_obj,winGame,(void))

Void Main_obj::updateScore( ){
{
		HX_STACK_FRAME("Main","updateScore",0x5d7894f4,"Main.updateScore","Main.hx",212,0x087e5c05)
		HX_STACK_THIS(this)
		HX_STACK_LINE(212)
		this->scoreField->set_text(((this->scorePlayer + HX_CSTRING(":")) + this->scoreAI));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Main_obj,updateScore,(void))

Void Main_obj::added( Dynamic e){
{
		HX_STACK_FRAME("Main","added",0x98771aeb,"Main.added","Main.hx",224,0x087e5c05)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(225)
		this->removeEventListener(::openfl::_v2::events::Event_obj::ADDED_TO_STAGE,this->added_dyn(),null());
		HX_STACK_LINE(226)
		this->get_stage()->addEventListener(::openfl::_v2::events::Event_obj::RESIZE,this->resize_dyn(),null(),null(),null());
		HX_STACK_LINE(230)
		this->init();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Main_obj,added,(void))

Void Main_obj::main( ){
{
		HX_STACK_FRAME("Main","main",0xed0e206e,"Main.main","Main.hx",235,0x087e5c05)
		HX_STACK_LINE(237)
		::openfl::_v2::Lib_obj::get_current()->get_stage()->set_align(::openfl::display::StageAlign_obj::TOP_LEFT);
		HX_STACK_LINE(238)
		::openfl::_v2::Lib_obj::get_current()->get_stage()->set_scaleMode(::openfl::display::StageScaleMode_obj::NO_SCALE);
		HX_STACK_LINE(239)
		::Main _g = ::Main_obj::__new();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(239)
		::openfl::_v2::Lib_obj::get_current()->addChild(_g);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Main_obj,main,(void))


Main_obj::Main_obj()
{
}

void Main_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Main);
	HX_MARK_MEMBER_NAME(inited,"inited");
	HX_MARK_MEMBER_NAME(platform1,"platform1");
	HX_MARK_MEMBER_NAME(platform2,"platform2");
	HX_MARK_MEMBER_NAME(block1,"block1");
	HX_MARK_MEMBER_NAME(ball,"ball");
	HX_MARK_MEMBER_NAME(scorePlayer,"scorePlayer");
	HX_MARK_MEMBER_NAME(scoreAI,"scoreAI");
	HX_MARK_MEMBER_NAME(scoreField,"scoreField");
	HX_MARK_MEMBER_NAME(messageField,"messageField");
	HX_MARK_MEMBER_NAME(currentGameState,"currentGameState");
	HX_MARK_MEMBER_NAME(arrowKeyUp,"arrowKeyUp");
	HX_MARK_MEMBER_NAME(arrowKeyDown,"arrowKeyDown");
	HX_MARK_MEMBER_NAME(platformSpeed,"platformSpeed");
	HX_MARK_MEMBER_NAME(ballMovement,"ballMovement");
	HX_MARK_MEMBER_NAME(ballSpeed,"ballSpeed");
	::openfl::_v2::display::DisplayObjectContainer_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Main_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(inited,"inited");
	HX_VISIT_MEMBER_NAME(platform1,"platform1");
	HX_VISIT_MEMBER_NAME(platform2,"platform2");
	HX_VISIT_MEMBER_NAME(block1,"block1");
	HX_VISIT_MEMBER_NAME(ball,"ball");
	HX_VISIT_MEMBER_NAME(scorePlayer,"scorePlayer");
	HX_VISIT_MEMBER_NAME(scoreAI,"scoreAI");
	HX_VISIT_MEMBER_NAME(scoreField,"scoreField");
	HX_VISIT_MEMBER_NAME(messageField,"messageField");
	HX_VISIT_MEMBER_NAME(currentGameState,"currentGameState");
	HX_VISIT_MEMBER_NAME(arrowKeyUp,"arrowKeyUp");
	HX_VISIT_MEMBER_NAME(arrowKeyDown,"arrowKeyDown");
	HX_VISIT_MEMBER_NAME(platformSpeed,"platformSpeed");
	HX_VISIT_MEMBER_NAME(ballMovement,"ballMovement");
	HX_VISIT_MEMBER_NAME(ballSpeed,"ballSpeed");
	::openfl::_v2::display::DisplayObjectContainer_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Main_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"main") ) { return main_dyn(); }
		if (HX_FIELD_EQ(inName,"ball") ) { return ball; }
		if (HX_FIELD_EQ(inName,"init") ) { return init_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"keyUp") ) { return keyUp_dyn(); }
		if (HX_FIELD_EQ(inName,"added") ) { return added_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"inited") ) { return inited; }
		if (HX_FIELD_EQ(inName,"block1") ) { return block1; }
		if (HX_FIELD_EQ(inName,"resize") ) { return resize_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"scoreAI") ) { return scoreAI; }
		if (HX_FIELD_EQ(inName,"keyDown") ) { return keyDown_dyn(); }
		if (HX_FIELD_EQ(inName,"winGame") ) { return winGame_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"platform1") ) { return platform1; }
		if (HX_FIELD_EQ(inName,"platform2") ) { return platform2; }
		if (HX_FIELD_EQ(inName,"ballSpeed") ) { return ballSpeed; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"scoreField") ) { return scoreField; }
		if (HX_FIELD_EQ(inName,"arrowKeyUp") ) { return arrowKeyUp; }
		if (HX_FIELD_EQ(inName,"everyFrame") ) { return everyFrame_dyn(); }
		if (HX_FIELD_EQ(inName,"bounceBall") ) { return bounceBall_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"scorePlayer") ) { return scorePlayer; }
		if (HX_FIELD_EQ(inName,"updateScore") ) { return updateScore_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"messageField") ) { return messageField; }
		if (HX_FIELD_EQ(inName,"arrowKeyDown") ) { return arrowKeyDown; }
		if (HX_FIELD_EQ(inName,"ballMovement") ) { return ballMovement; }
		if (HX_FIELD_EQ(inName,"setGameState") ) { return setGameState_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"platformSpeed") ) { return platformSpeed; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"currentGameState") ) { return currentGameState; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Main_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"ball") ) { ball=inValue.Cast< ::Ball >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"inited") ) { inited=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"block1") ) { block1=inValue.Cast< ::Block >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"scoreAI") ) { scoreAI=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"platform1") ) { platform1=inValue.Cast< ::Platform >(); return inValue; }
		if (HX_FIELD_EQ(inName,"platform2") ) { platform2=inValue.Cast< ::Platform >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ballSpeed") ) { ballSpeed=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"scoreField") ) { scoreField=inValue.Cast< ::openfl::_v2::text::TextField >(); return inValue; }
		if (HX_FIELD_EQ(inName,"arrowKeyUp") ) { arrowKeyUp=inValue.Cast< bool >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"scorePlayer") ) { scorePlayer=inValue.Cast< int >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"messageField") ) { messageField=inValue.Cast< ::openfl::_v2::text::TextField >(); return inValue; }
		if (HX_FIELD_EQ(inName,"arrowKeyDown") ) { arrowKeyDown=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ballMovement") ) { ballMovement=inValue.Cast< ::openfl::_v2::geom::Point >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"platformSpeed") ) { platformSpeed=inValue.Cast< int >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"currentGameState") ) { currentGameState=inValue.Cast< ::GameState >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Main_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("inited"));
	outFields->push(HX_CSTRING("platform1"));
	outFields->push(HX_CSTRING("platform2"));
	outFields->push(HX_CSTRING("block1"));
	outFields->push(HX_CSTRING("ball"));
	outFields->push(HX_CSTRING("scorePlayer"));
	outFields->push(HX_CSTRING("scoreAI"));
	outFields->push(HX_CSTRING("scoreField"));
	outFields->push(HX_CSTRING("messageField"));
	outFields->push(HX_CSTRING("currentGameState"));
	outFields->push(HX_CSTRING("arrowKeyUp"));
	outFields->push(HX_CSTRING("arrowKeyDown"));
	outFields->push(HX_CSTRING("platformSpeed"));
	outFields->push(HX_CSTRING("ballMovement"));
	outFields->push(HX_CSTRING("ballSpeed"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("main"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(Main_obj,inited),HX_CSTRING("inited")},
	{hx::fsObject /*::Platform*/ ,(int)offsetof(Main_obj,platform1),HX_CSTRING("platform1")},
	{hx::fsObject /*::Platform*/ ,(int)offsetof(Main_obj,platform2),HX_CSTRING("platform2")},
	{hx::fsObject /*::Block*/ ,(int)offsetof(Main_obj,block1),HX_CSTRING("block1")},
	{hx::fsObject /*::Ball*/ ,(int)offsetof(Main_obj,ball),HX_CSTRING("ball")},
	{hx::fsInt,(int)offsetof(Main_obj,scorePlayer),HX_CSTRING("scorePlayer")},
	{hx::fsInt,(int)offsetof(Main_obj,scoreAI),HX_CSTRING("scoreAI")},
	{hx::fsObject /*::openfl::_v2::text::TextField*/ ,(int)offsetof(Main_obj,scoreField),HX_CSTRING("scoreField")},
	{hx::fsObject /*::openfl::_v2::text::TextField*/ ,(int)offsetof(Main_obj,messageField),HX_CSTRING("messageField")},
	{hx::fsObject /*::GameState*/ ,(int)offsetof(Main_obj,currentGameState),HX_CSTRING("currentGameState")},
	{hx::fsBool,(int)offsetof(Main_obj,arrowKeyUp),HX_CSTRING("arrowKeyUp")},
	{hx::fsBool,(int)offsetof(Main_obj,arrowKeyDown),HX_CSTRING("arrowKeyDown")},
	{hx::fsInt,(int)offsetof(Main_obj,platformSpeed),HX_CSTRING("platformSpeed")},
	{hx::fsObject /*::openfl::_v2::geom::Point*/ ,(int)offsetof(Main_obj,ballMovement),HX_CSTRING("ballMovement")},
	{hx::fsInt,(int)offsetof(Main_obj,ballSpeed),HX_CSTRING("ballSpeed")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("inited"),
	HX_CSTRING("platform1"),
	HX_CSTRING("platform2"),
	HX_CSTRING("block1"),
	HX_CSTRING("ball"),
	HX_CSTRING("scorePlayer"),
	HX_CSTRING("scoreAI"),
	HX_CSTRING("scoreField"),
	HX_CSTRING("messageField"),
	HX_CSTRING("currentGameState"),
	HX_CSTRING("arrowKeyUp"),
	HX_CSTRING("arrowKeyDown"),
	HX_CSTRING("platformSpeed"),
	HX_CSTRING("ballMovement"),
	HX_CSTRING("ballSpeed"),
	HX_CSTRING("resize"),
	HX_CSTRING("init"),
	HX_CSTRING("setGameState"),
	HX_CSTRING("keyDown"),
	HX_CSTRING("keyUp"),
	HX_CSTRING("everyFrame"),
	HX_CSTRING("bounceBall"),
	HX_CSTRING("winGame"),
	HX_CSTRING("updateScore"),
	HX_CSTRING("added"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Main_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Main_obj::__mClass,"__mClass");
};

#endif

Class Main_obj::__mClass;

void Main_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("Main"), hx::TCanCast< Main_obj> ,sStaticFields,sMemberFields,
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

void Main_obj::__boot()
{
}

