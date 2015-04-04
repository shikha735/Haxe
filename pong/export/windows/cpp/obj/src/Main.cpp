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
#ifndef INCLUDED_MyBitmapData
#include <MyBitmapData.h>
#endif
#ifndef INCLUDED_Obstacle
#include <Obstacle.h>
#endif
#ifndef INCLUDED_Paddle
#include <Paddle.h>
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
#ifndef INCLUDED_openfl__v2_display_Bitmap
#include <openfl/_v2/display/Bitmap.h>
#endif
#ifndef INCLUDED_openfl__v2_display_BitmapData
#include <openfl/_v2/display/BitmapData.h>
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
#ifndef INCLUDED_openfl_display_PixelSnapping
#include <openfl/display/PixelSnapping.h>
#endif
#ifndef INCLUDED_openfl_display_StageAlign
#include <openfl/display/StageAlign.h>
#endif
#ifndef INCLUDED_openfl_display_StageScaleMode
#include <openfl/display/StageScaleMode.h>
#endif

Void Main_obj::__construct()
{
HX_STACK_FRAME("Main","new",0x6616a5cb,"Main.new","Main.hx",34,0x087e5c05)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(73)
	this->direction = (int)1;
	HX_STACK_LINE(339)
	super::__construct();
	HX_STACK_LINE(340)
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
		HX_STACK_FRAME("Main","resize",0x39257969,"Main.resize","Main.hx",78,0x087e5c05)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(78)
		if ((!(this->inited))){
			HX_STACK_LINE(78)
			this->init();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Main_obj,resize,(void))

Void Main_obj::init( ){
{
		HX_STACK_FRAME("Main","init",0xea732345,"Main.init","Main.hx",83,0x087e5c05)
		HX_STACK_THIS(this)
		HX_STACK_LINE(84)
		if ((this->inited)){
			HX_STACK_LINE(84)
			return null();
		}
		HX_STACK_LINE(85)
		this->inited = true;
		HX_STACK_LINE(87)
		::Platform _g = ::Platform_obj::__new();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(87)
		this->platform1 = _g;
		HX_STACK_LINE(88)
		this->platform1->set_y((int)5);
		HX_STACK_LINE(89)
		this->platform1->set_x((int)200);
		HX_STACK_LINE(90)
		this->addChild(this->platform1);
		HX_STACK_LINE(92)
		::Platform _g1 = ::Platform_obj::__new();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(92)
		this->platform2 = _g1;
		HX_STACK_LINE(93)
		this->platform2->set_x((int)200);
		HX_STACK_LINE(94)
		this->platform2->set_y((int)480);
		HX_STACK_LINE(95)
		this->addChild(this->platform2);
		HX_STACK_LINE(97)
		::Block _g2 = ::Block_obj::__new();		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(97)
		this->block1 = _g2;
		HX_STACK_LINE(98)
		this->block1->set_x((int)225);
		HX_STACK_LINE(99)
		this->block1->set_y((int)250);
		HX_STACK_LINE(100)
		this->addChild(this->block1);
		HX_STACK_LINE(102)
		::Obstacle _g3 = ::Obstacle_obj::__new();		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(102)
		this->obs1 = _g3;
		HX_STACK_LINE(103)
		this->obs1->set_x((int)100);
		HX_STACK_LINE(104)
		this->obs1->set_y((int)400);
		HX_STACK_LINE(105)
		this->addChild(this->obs1);
		HX_STACK_LINE(107)
		::Obstacle _g4 = ::Obstacle_obj::__new();		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(107)
		this->obs2 = _g4;
		HX_STACK_LINE(108)
		this->obs2->set_x((int)400);
		HX_STACK_LINE(109)
		this->obs2->set_y((int)100);
		HX_STACK_LINE(110)
		this->addChild(this->obs2);
		HX_STACK_LINE(112)
		::Ball _g5 = ::Ball_obj::__new();		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(112)
		this->ball = _g5;
		HX_STACK_LINE(113)
		this->ball->set_x((int)250);
		HX_STACK_LINE(114)
		this->ball->set_y((int)250);
		HX_STACK_LINE(115)
		this->addChild(this->ball);
		HX_STACK_LINE(117)
		::MyBitmapData _g6 = ::MyBitmapData_obj::__new((int)0,(int)0,null(),null());		HX_STACK_VAR(_g6,"_g6");
		HX_STACK_LINE(117)
		::openfl::_v2::display::Bitmap _g7 = ::openfl::_v2::display::Bitmap_obj::__new(_g6,null(),null());		HX_STACK_VAR(_g7,"_g7");
		HX_STACK_LINE(117)
		this->star1 = _g7;
		HX_STACK_LINE(118)
		Float _g8 = ::Math_obj::random();		HX_STACK_VAR(_g8,"_g8");
		HX_STACK_LINE(118)
		Float _g9 = (_g8 * (int)300);		HX_STACK_VAR(_g9,"_g9");
		HX_STACK_LINE(118)
		this->star1->set_x(_g9);
		HX_STACK_LINE(119)
		Float _g10 = ::Math_obj::random();		HX_STACK_VAR(_g10,"_g10");
		HX_STACK_LINE(119)
		Float _g11 = (_g10 * (int)300);		HX_STACK_VAR(_g11,"_g11");
		HX_STACK_LINE(119)
		this->star1->set_y(_g11);
		HX_STACK_LINE(120)
		this->addChild(this->star1);
		HX_STACK_LINE(122)
		::openfl::_v2::text::TextFormat scoreFormat = ::openfl::_v2::text::TextFormat_obj::__new(HX_CSTRING("Verdana"),(int)24,(int)12303291,true,null(),null(),null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(scoreFormat,"scoreFormat");
		HX_STACK_LINE(123)
		scoreFormat->align = ::openfl::_v2::text::TextFormatAlign_obj::CENTER;
		HX_STACK_LINE(125)
		::openfl::_v2::text::TextField _g12 = ::openfl::_v2::text::TextField_obj::__new();		HX_STACK_VAR(_g12,"_g12");
		HX_STACK_LINE(125)
		this->scoreField = _g12;
		HX_STACK_LINE(126)
		this->addChild(this->scoreField);
		HX_STACK_LINE(127)
		this->scoreField->set_width((int)500);
		HX_STACK_LINE(128)
		this->scoreField->set_y((int)30);
		HX_STACK_LINE(129)
		this->scoreField->set_defaultTextFormat(scoreFormat);
		HX_STACK_LINE(130)
		this->scoreField->set_selectable(false);
		HX_STACK_LINE(132)
		::openfl::_v2::text::TextFormat messageFormat = ::openfl::_v2::text::TextFormat_obj::__new(HX_CSTRING("Verdana"),(int)18,(int)12303291,true,null(),null(),null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(messageFormat,"messageFormat");
		HX_STACK_LINE(133)
		messageFormat->align = ::openfl::_v2::text::TextFormatAlign_obj::CENTER;
		HX_STACK_LINE(135)
		::openfl::_v2::text::TextField _g13 = ::openfl::_v2::text::TextField_obj::__new();		HX_STACK_VAR(_g13,"_g13");
		HX_STACK_LINE(135)
		this->messageField = _g13;
		HX_STACK_LINE(136)
		this->addChild(this->messageField);
		HX_STACK_LINE(137)
		this->messageField->set_width((int)500);
		HX_STACK_LINE(138)
		this->messageField->set_y((int)400);
		HX_STACK_LINE(139)
		this->messageField->set_defaultTextFormat(messageFormat);
		HX_STACK_LINE(140)
		this->messageField->set_selectable(false);
		HX_STACK_LINE(141)
		this->messageField->set_text(HX_CSTRING("Press SPACE to start\nUse ARROW KEYS to move your platform"));
		HX_STACK_LINE(143)
		this->scorePlayer = (int)0;
		HX_STACK_LINE(144)
		this->scoreAI = (int)0;
		HX_STACK_LINE(145)
		this->arrowKeyUp = false;
		HX_STACK_LINE(146)
		this->arrowKeyDown = false;
		HX_STACK_LINE(147)
		this->platformSpeed = (int)7;
		HX_STACK_LINE(148)
		this->ballSpeed = (int)7;
		HX_STACK_LINE(149)
		this->blockSpeed = (int)7;
		HX_STACK_LINE(150)
		::openfl::_v2::geom::Point _g14 = ::openfl::_v2::geom::Point_obj::__new((int)225,(int)250);		HX_STACK_VAR(_g14,"_g14");
		HX_STACK_LINE(150)
		this->blockMovement = _g14;
		HX_STACK_LINE(151)
		::openfl::_v2::geom::Point _g15 = ::openfl::_v2::geom::Point_obj::__new((int)0,(int)0);		HX_STACK_VAR(_g15,"_g15");
		HX_STACK_LINE(151)
		this->ballMovement = _g15;
		HX_STACK_LINE(152)
		this->setGameState(::GameState_obj::Paused);
		HX_STACK_LINE(154)
		this->get_stage()->addEventListener(::openfl::_v2::events::KeyboardEvent_obj::KEY_DOWN,this->keyDown_dyn(),null(),null(),null());
		HX_STACK_LINE(155)
		this->get_stage()->addEventListener(::openfl::_v2::events::KeyboardEvent_obj::KEY_UP,this->keyUp_dyn(),null(),null(),null());
		HX_STACK_LINE(156)
		this->addEventListener(::openfl::_v2::events::Event_obj::ENTER_FRAME,this->everyFrame_dyn(),null(),null(),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Main_obj,init,(void))

Void Main_obj::setGameState( ::GameState state){
{
		HX_STACK_FRAME("Main","setGameState",0x0450c9f2,"Main.setGameState","Main.hx",159,0x087e5c05)
		HX_STACK_THIS(this)
		HX_STACK_ARG(state,"state")
		HX_STACK_LINE(160)
		this->currentGameState = state;
		HX_STACK_LINE(161)
		this->updateScore();
		HX_STACK_LINE(162)
		if (((state == ::GameState_obj::Paused))){
			HX_STACK_LINE(163)
			this->messageField->set_alpha((int)1);
		}
		else{
			HX_STACK_LINE(165)
			this->messageField->set_alpha((int)0);
			HX_STACK_LINE(166)
			this->platform1->set_x((int)200);
			HX_STACK_LINE(167)
			this->platform2->set_x((int)200);
			HX_STACK_LINE(168)
			this->block1->set_x((int)225);
			HX_STACK_LINE(169)
			this->block1->set_y((int)250);
			HX_STACK_LINE(170)
			this->ball->set_y((int)250);
			HX_STACK_LINE(171)
			this->ball->set_x((int)250);
			HX_STACK_LINE(172)
			Float _g = ::Math_obj::random();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(172)
			int direction;		HX_STACK_VAR(direction,"direction");
			HX_STACK_LINE(172)
			if (((_g > .5))){
				HX_STACK_LINE(172)
				direction = (int)1;
			}
			else{
				HX_STACK_LINE(172)
				direction = (int)-1;
			}
			HX_STACK_LINE(173)
			Float _g1 = ::Math_obj::random();		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(173)
			Float _g2 = (_g1 * ::Math_obj::PI);		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(173)
			Float _g3 = (Float(_g2) / Float((int)2));		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(173)
			Float randomAngle = (_g3 - (int)45);		HX_STACK_VAR(randomAngle,"randomAngle");
			HX_STACK_LINE(174)
			Float _g4 = ::Math_obj::cos(randomAngle);		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(174)
			Float _g5 = (direction * _g4);		HX_STACK_VAR(_g5,"_g5");
			HX_STACK_LINE(174)
			Float _g6 = (_g5 * this->ballSpeed);		HX_STACK_VAR(_g6,"_g6");
			HX_STACK_LINE(174)
			this->ballMovement->y = _g6;
			HX_STACK_LINE(175)
			Float _g7 = ::Math_obj::sin(randomAngle);		HX_STACK_VAR(_g7,"_g7");
			HX_STACK_LINE(175)
			Float _g8 = (_g7 * this->ballSpeed);		HX_STACK_VAR(_g8,"_g8");
			HX_STACK_LINE(175)
			this->ballMovement->x = _g8;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Main_obj,setGameState,(void))

Void Main_obj::keyDown( ::openfl::_v2::events::KeyboardEvent event){
{
		HX_STACK_FRAME("Main","keyDown",0x0078d08c,"Main.keyDown","Main.hx",181,0x087e5c05)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(181)
		if (((bool((this->currentGameState == ::GameState_obj::Paused)) && bool((event->keyCode == (int)32))))){
			HX_STACK_LINE(182)
			this->setGameState(::GameState_obj::Playing);
		}
		else{
			HX_STACK_LINE(183)
			if (((event->keyCode == (int)37))){
				HX_STACK_LINE(184)
				this->arrowKeyUp = true;
			}
			else{
				HX_STACK_LINE(185)
				if (((event->keyCode == (int)39))){
					HX_STACK_LINE(186)
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
		HX_STACK_FRAME("Main","keyUp",0x5b320005,"Main.keyUp","Main.hx",191,0x087e5c05)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(191)
		if (((event->keyCode == (int)37))){
			HX_STACK_LINE(192)
			this->arrowKeyUp = false;
		}
		else{
			HX_STACK_LINE(193)
			if (((event->keyCode == (int)39))){
				HX_STACK_LINE(194)
				this->arrowKeyDown = false;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Main_obj,keyUp,(void))

Void Main_obj::everyFrame( ::openfl::_v2::events::Event event){
{
		HX_STACK_FRAME("Main","everyFrame",0xc084a887,"Main.everyFrame","Main.hx",199,0x087e5c05)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(199)
		if (((this->currentGameState == ::GameState_obj::Playing))){
			HX_STACK_LINE(202)
			if ((this->arrowKeyUp)){
				HX_STACK_LINE(203)
				::Platform _g = this->platform1;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(203)
				Float _g1 = _g->get_x();		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(203)
				Float _g11 = (_g1 - this->platformSpeed);		HX_STACK_VAR(_g11,"_g11");
				HX_STACK_LINE(203)
				_g->set_x(_g11);
			}
			HX_STACK_LINE(205)
			if ((this->arrowKeyDown)){
				HX_STACK_LINE(206)
				::Platform _g = this->platform1;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(206)
				Float _g2 = _g->get_x();		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(206)
				Float _g3 = (_g2 + this->platformSpeed);		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(206)
				_g->set_x(_g3);
			}
			HX_STACK_LINE(209)
			Float _g4 = this->ball->get_y();		HX_STACK_VAR(_g4,"_g4");
			struct _Function_2_1{
				inline static bool Block( hx::ObjectPtr< ::Main_obj > __this){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Main.hx",209,0x087e5c05)
					{
						HX_STACK_LINE(209)
						Float _g5 = __this->ball->get_x();		HX_STACK_VAR(_g5,"_g5");
						HX_STACK_LINE(209)
						Float _g6 = __this->platform2->get_x();		HX_STACK_VAR(_g6,"_g6");
						HX_STACK_LINE(209)
						Float _g7 = (_g6 + (int)70);		HX_STACK_VAR(_g7,"_g7");
						HX_STACK_LINE(209)
						return (_g5 > _g7);
					}
					return null();
				}
			};
			HX_STACK_LINE(209)
			if (((  (((_g4 > (int)300))) ? bool(_Function_2_1::Block(this)) : bool(false) ))){
				HX_STACK_LINE(210)
				::Platform _g = this->platform2;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(210)
				Float _g8 = _g->get_x();		HX_STACK_VAR(_g8,"_g8");
				HX_STACK_LINE(210)
				Float _g9 = (_g8 + this->platformSpeed);		HX_STACK_VAR(_g9,"_g9");
				HX_STACK_LINE(210)
				_g->set_x(_g9);
			}
			HX_STACK_LINE(212)
			Float _g10 = this->ball->get_y();		HX_STACK_VAR(_g10,"_g10");
			struct _Function_2_2{
				inline static bool Block( hx::ObjectPtr< ::Main_obj > __this){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Main.hx",212,0x087e5c05)
					{
						HX_STACK_LINE(212)
						Float _g11 = __this->ball->get_x();		HX_STACK_VAR(_g11,"_g11");
						HX_STACK_LINE(212)
						Float _g12 = __this->platform2->get_x();		HX_STACK_VAR(_g12,"_g12");
						HX_STACK_LINE(212)
						Float _g13 = (_g12 + (int)30);		HX_STACK_VAR(_g13,"_g13");
						HX_STACK_LINE(212)
						return (_g11 < _g13);
					}
					return null();
				}
			};
			HX_STACK_LINE(212)
			if (((  (((_g10 > (int)300))) ? bool(_Function_2_2::Block(this)) : bool(false) ))){
				HX_STACK_LINE(213)
				::Platform _g = this->platform2;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(213)
				Float _g14 = _g->get_x();		HX_STACK_VAR(_g14,"_g14");
				HX_STACK_LINE(213)
				Float _g15 = (_g14 - this->platformSpeed);		HX_STACK_VAR(_g15,"_g15");
				HX_STACK_LINE(213)
				_g->set_x(_g15);
			}
			HX_STACK_LINE(216)
			Float _g16 = this->platform1->get_x();		HX_STACK_VAR(_g16,"_g16");
			HX_STACK_LINE(216)
			if (((_g16 < (int)5))){
				HX_STACK_LINE(216)
				this->platform1->set_x((int)5);
			}
			HX_STACK_LINE(217)
			Float _g17 = this->platform1->get_x();		HX_STACK_VAR(_g17,"_g17");
			HX_STACK_LINE(217)
			if (((_g17 > (int)395))){
				HX_STACK_LINE(217)
				this->platform1->set_x((int)395);
			}
			HX_STACK_LINE(219)
			Float _g18 = this->platform2->get_x();		HX_STACK_VAR(_g18,"_g18");
			HX_STACK_LINE(219)
			if (((_g18 < (int)5))){
				HX_STACK_LINE(219)
				this->platform2->set_x((int)5);
			}
			HX_STACK_LINE(220)
			Float _g19 = this->platform2->get_x();		HX_STACK_VAR(_g19,"_g19");
			HX_STACK_LINE(220)
			if (((_g19 > (int)395))){
				HX_STACK_LINE(220)
				this->platform2->set_x((int)395);
			}
			HX_STACK_LINE(222)
			{
				HX_STACK_LINE(222)
				::Ball _g = this->ball;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(222)
				Float _g20 = _g->get_y();		HX_STACK_VAR(_g20,"_g20");
				HX_STACK_LINE(222)
				Float _g21 = (_g20 + this->ballMovement->y);		HX_STACK_VAR(_g21,"_g21");
				HX_STACK_LINE(222)
				_g->set_y(_g21);
			}
			HX_STACK_LINE(223)
			{
				HX_STACK_LINE(223)
				::Ball _g = this->ball;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(223)
				Float _g22 = _g->get_x();		HX_STACK_VAR(_g22,"_g22");
				HX_STACK_LINE(223)
				Float _g23 = (_g22 + this->ballMovement->x);		HX_STACK_VAR(_g23,"_g23");
				HX_STACK_LINE(223)
				_g->set_x(_g23);
			}
			HX_STACK_LINE(226)
			Float _g24 = this->ball->get_x();		HX_STACK_VAR(_g24,"_g24");
			HX_STACK_LINE(226)
			Float _g25 = this->obs1->get_x();		HX_STACK_VAR(_g25,"_g25");
			struct _Function_2_3{
				inline static bool Block( hx::ObjectPtr< ::Main_obj > __this){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Main.hx",226,0x087e5c05)
					{
						HX_STACK_LINE(226)
						Float _g26 = __this->ball->get_x();		HX_STACK_VAR(_g26,"_g26");
						HX_STACK_LINE(226)
						Float _g27 = __this->obs1->get_x();		HX_STACK_VAR(_g27,"_g27");
						HX_STACK_LINE(226)
						Float _g28 = (_g27 + (int)30);		HX_STACK_VAR(_g28,"_g28");
						HX_STACK_LINE(226)
						return (_g26 <= _g28);
					}
					return null();
				}
			};
			struct _Function_2_4{
				inline static bool Block( hx::ObjectPtr< ::Main_obj > __this){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Main.hx",226,0x087e5c05)
					{
						HX_STACK_LINE(226)
						Float _g29 = __this->ball->get_y();		HX_STACK_VAR(_g29,"_g29");
						HX_STACK_LINE(226)
						Float _g30 = __this->obs1->get_y();		HX_STACK_VAR(_g30,"_g30");
						HX_STACK_LINE(226)
						return (_g29 >= _g30);
					}
					return null();
				}
			};
			struct _Function_2_5{
				inline static bool Block( hx::ObjectPtr< ::Main_obj > __this){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Main.hx",226,0x087e5c05)
					{
						HX_STACK_LINE(226)
						Float _g31 = __this->ball->get_y();		HX_STACK_VAR(_g31,"_g31");
						HX_STACK_LINE(226)
						Float _g32 = __this->obs1->get_y();		HX_STACK_VAR(_g32,"_g32");
						HX_STACK_LINE(226)
						Float _g33 = (_g32 + (int)30);		HX_STACK_VAR(_g33,"_g33");
						HX_STACK_LINE(226)
						return (_g31 <= _g33);
					}
					return null();
				}
			};
			HX_STACK_LINE(226)
			if (((  (((  (((  (((_g24 >= _g25))) ? bool(_Function_2_3::Block(this)) : bool(false) ))) ? bool(_Function_2_4::Block(this)) : bool(false) ))) ? bool(_Function_2_5::Block(this)) : bool(false) ))){
				HX_STACK_LINE(228)
				this->bounceBall();
			}
			HX_STACK_LINE(232)
			Float _g34 = this->ball->get_x();		HX_STACK_VAR(_g34,"_g34");
			HX_STACK_LINE(232)
			Float _g35 = this->obs2->get_x();		HX_STACK_VAR(_g35,"_g35");
			struct _Function_2_6{
				inline static bool Block( hx::ObjectPtr< ::Main_obj > __this){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Main.hx",232,0x087e5c05)
					{
						HX_STACK_LINE(232)
						Float _g36 = __this->ball->get_x();		HX_STACK_VAR(_g36,"_g36");
						HX_STACK_LINE(232)
						Float _g37 = __this->obs2->get_x();		HX_STACK_VAR(_g37,"_g37");
						HX_STACK_LINE(232)
						Float _g38 = (_g37 + (int)30);		HX_STACK_VAR(_g38,"_g38");
						HX_STACK_LINE(232)
						return (_g36 <= _g38);
					}
					return null();
				}
			};
			struct _Function_2_7{
				inline static bool Block( hx::ObjectPtr< ::Main_obj > __this){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Main.hx",232,0x087e5c05)
					{
						HX_STACK_LINE(232)
						Float _g39 = __this->ball->get_y();		HX_STACK_VAR(_g39,"_g39");
						HX_STACK_LINE(232)
						Float _g40 = __this->obs2->get_y();		HX_STACK_VAR(_g40,"_g40");
						HX_STACK_LINE(232)
						return (_g39 >= _g40);
					}
					return null();
				}
			};
			struct _Function_2_8{
				inline static bool Block( hx::ObjectPtr< ::Main_obj > __this){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Main.hx",232,0x087e5c05)
					{
						HX_STACK_LINE(232)
						Float _g41 = __this->ball->get_y();		HX_STACK_VAR(_g41,"_g41");
						HX_STACK_LINE(232)
						Float _g42 = __this->obs2->get_y();		HX_STACK_VAR(_g42,"_g42");
						HX_STACK_LINE(232)
						Float _g43 = (_g42 + (int)30);		HX_STACK_VAR(_g43,"_g43");
						HX_STACK_LINE(232)
						return (_g41 <= _g43);
					}
					return null();
				}
			};
			HX_STACK_LINE(232)
			if (((  (((  (((  (((_g34 >= _g35))) ? bool(_Function_2_6::Block(this)) : bool(false) ))) ? bool(_Function_2_7::Block(this)) : bool(false) ))) ? bool(_Function_2_8::Block(this)) : bool(false) ))){
				HX_STACK_LINE(234)
				this->bounceBall();
			}
			HX_STACK_LINE(239)
			Float _g44 = this->ball->get_x();		HX_STACK_VAR(_g44,"_g44");
			HX_STACK_LINE(239)
			Float _g45 = this->block1->get_x();		HX_STACK_VAR(_g45,"_g45");
			struct _Function_2_9{
				inline static bool Block( hx::ObjectPtr< ::Main_obj > __this){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Main.hx",239,0x087e5c05)
					{
						HX_STACK_LINE(239)
						Float _g46 = __this->ball->get_x();		HX_STACK_VAR(_g46,"_g46");
						HX_STACK_LINE(239)
						Float _g47 = __this->block1->get_x();		HX_STACK_VAR(_g47,"_g47");
						HX_STACK_LINE(239)
						Float _g48 = (_g47 + (int)50);		HX_STACK_VAR(_g48,"_g48");
						HX_STACK_LINE(239)
						return (_g46 <= _g48);
					}
					return null();
				}
			};
			struct _Function_2_10{
				inline static bool Block( hx::ObjectPtr< ::Main_obj > __this){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Main.hx",239,0x087e5c05)
					{
						HX_STACK_LINE(239)
						Float _g49 = __this->ball->get_y();		HX_STACK_VAR(_g49,"_g49");
						HX_STACK_LINE(239)
						Float _g50 = __this->block1->get_y();		HX_STACK_VAR(_g50,"_g50");
						HX_STACK_LINE(239)
						return (_g49 >= _g50);
					}
					return null();
				}
			};
			struct _Function_2_11{
				inline static bool Block( hx::ObjectPtr< ::Main_obj > __this){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Main.hx",239,0x087e5c05)
					{
						HX_STACK_LINE(239)
						Float _g51 = __this->ball->get_y();		HX_STACK_VAR(_g51,"_g51");
						HX_STACK_LINE(239)
						Float _g52 = __this->block1->get_y();		HX_STACK_VAR(_g52,"_g52");
						HX_STACK_LINE(239)
						Float _g53 = (_g52 + (int)20);		HX_STACK_VAR(_g53,"_g53");
						HX_STACK_LINE(239)
						return (_g51 <= _g53);
					}
					return null();
				}
			};
			HX_STACK_LINE(239)
			if (((  (((  (((  (((_g44 >= _g45))) ? bool(_Function_2_9::Block(this)) : bool(false) ))) ? bool(_Function_2_10::Block(this)) : bool(false) ))) ? bool(_Function_2_11::Block(this)) : bool(false) ))){
				HX_STACK_LINE(240)
				this->bounceBall();
			}
			struct _Function_2_12{
				inline static bool Block( hx::ObjectPtr< ::Main_obj > __this){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Main.hx",247,0x087e5c05)
					{
						HX_STACK_LINE(247)
						Float _g54 = __this->block1->get_x();		HX_STACK_VAR(_g54,"_g54");
						HX_STACK_LINE(247)
						return (_g54 <= (int)455);
					}
					return null();
				}
			};
			HX_STACK_LINE(247)
			if (((  (((this->direction == (int)1))) ? bool(_Function_2_12::Block(this)) : bool(false) ))){
				HX_STACK_LINE(250)
				::Block _g = this->block1;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(250)
				Float _g55 = _g->get_x();		HX_STACK_VAR(_g55,"_g55");
				HX_STACK_LINE(250)
				Float _g56 = (_g55 + (this->blockSpeed * this->direction));		HX_STACK_VAR(_g56,"_g56");
				HX_STACK_LINE(250)
				_g->set_x(_g56);
			}
			HX_STACK_LINE(252)
			Float _g57 = this->block1->get_x();		HX_STACK_VAR(_g57,"_g57");
			struct _Function_2_13{
				inline static bool Block( hx::ObjectPtr< ::Main_obj > __this){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Main.hx",252,0x087e5c05)
					{
						HX_STACK_LINE(252)
						Float _g58 = __this->block1->get_x();		HX_STACK_VAR(_g58,"_g58");
						HX_STACK_LINE(252)
						return (_g58 >= (int)455);
					}
					return null();
				}
			};
			HX_STACK_LINE(252)
			if (((  ((!(((_g57 >= (int)448))))) ? bool(_Function_2_13::Block(this)) : bool(true) ))){
				HX_STACK_LINE(255)
				this->direction = (int)-1;
			}
			struct _Function_2_14{
				inline static bool Block( hx::ObjectPtr< ::Main_obj > __this){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Main.hx",258,0x087e5c05)
					{
						HX_STACK_LINE(258)
						Float _g59 = __this->block1->get_x();		HX_STACK_VAR(_g59,"_g59");
						HX_STACK_LINE(258)
						return (_g59 >= (int)5);
					}
					return null();
				}
			};
			HX_STACK_LINE(258)
			if (((  (((this->direction == (int)-1))) ? bool(_Function_2_14::Block(this)) : bool(false) ))){
				HX_STACK_LINE(262)
				::Block _g = this->block1;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(262)
				Float _g60 = _g->get_x();		HX_STACK_VAR(_g60,"_g60");
				HX_STACK_LINE(262)
				Float _g61 = (_g60 + (this->blockSpeed * this->direction));		HX_STACK_VAR(_g61,"_g61");
				HX_STACK_LINE(262)
				_g->set_x(_g61);
			}
			struct _Function_2_15{
				inline static bool Block( hx::ObjectPtr< ::Main_obj > __this){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Main.hx",266,0x087e5c05)
					{
						HX_STACK_LINE(266)
						Float _g62 = __this->block1->get_x();		HX_STACK_VAR(_g62,"_g62");
						HX_STACK_LINE(266)
						return (_g62 <= (int)5);
					}
					return null();
				}
			};
			HX_STACK_LINE(266)
			if (((  (((this->direction == (int)-1))) ? bool(_Function_2_15::Block(this)) : bool(false) ))){
				HX_STACK_LINE(269)
				this->direction = (int)1;
			}
			struct _Function_2_16{
				inline static bool Block( hx::ObjectPtr< ::Main_obj > __this){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Main.hx",273,0x087e5c05)
					{
						HX_STACK_LINE(273)
						Float _g63 = __this->ball->get_y();		HX_STACK_VAR(_g63,"_g63");
						HX_STACK_LINE(273)
						return (_g63 < (int)30);
					}
					return null();
				}
			};
			struct _Function_2_17{
				inline static bool Block( hx::ObjectPtr< ::Main_obj > __this){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Main.hx",273,0x087e5c05)
					{
						HX_STACK_LINE(273)
						Float _g64 = __this->ball->get_x();		HX_STACK_VAR(_g64,"_g64");
						HX_STACK_LINE(273)
						Float _g65 = __this->platform1->get_x();		HX_STACK_VAR(_g65,"_g65");
						HX_STACK_LINE(273)
						return (_g64 >= _g65);
					}
					return null();
				}
			};
			struct _Function_2_18{
				inline static bool Block( hx::ObjectPtr< ::Main_obj > __this){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Main.hx",273,0x087e5c05)
					{
						HX_STACK_LINE(273)
						Float _g66 = __this->ball->get_x();		HX_STACK_VAR(_g66,"_g66");
						HX_STACK_LINE(273)
						Float _g67 = __this->platform1->get_x();		HX_STACK_VAR(_g67,"_g67");
						HX_STACK_LINE(273)
						Float _g68 = (_g67 + (int)100);		HX_STACK_VAR(_g68,"_g68");
						HX_STACK_LINE(273)
						return (_g66 <= _g68);
					}
					return null();
				}
			};
			HX_STACK_LINE(273)
			if (((  (((  (((  (((this->ballMovement->y < (int)0))) ? bool(_Function_2_16::Block(this)) : bool(false) ))) ? bool(_Function_2_17::Block(this)) : bool(false) ))) ? bool(_Function_2_18::Block(this)) : bool(false) ))){
				HX_STACK_LINE(274)
				this->bounceBall();
				HX_STACK_LINE(275)
				this->ball->set_y((int)30);
				HX_STACK_LINE(276)
				this->pd = ::Paddle_obj::paddle1;
			}
			struct _Function_2_19{
				inline static bool Block( hx::ObjectPtr< ::Main_obj > __this){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Main.hx",279,0x087e5c05)
					{
						HX_STACK_LINE(279)
						Float _g69 = __this->ball->get_y();		HX_STACK_VAR(_g69,"_g69");
						HX_STACK_LINE(279)
						return (_g69 > (int)470);
					}
					return null();
				}
			};
			struct _Function_2_20{
				inline static bool Block( hx::ObjectPtr< ::Main_obj > __this){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Main.hx",279,0x087e5c05)
					{
						HX_STACK_LINE(279)
						Float _g70 = __this->ball->get_x();		HX_STACK_VAR(_g70,"_g70");
						HX_STACK_LINE(279)
						Float _g71 = __this->platform2->get_x();		HX_STACK_VAR(_g71,"_g71");
						HX_STACK_LINE(279)
						return (_g70 >= _g71);
					}
					return null();
				}
			};
			struct _Function_2_21{
				inline static bool Block( hx::ObjectPtr< ::Main_obj > __this){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Main.hx",279,0x087e5c05)
					{
						HX_STACK_LINE(279)
						Float _g72 = __this->ball->get_x();		HX_STACK_VAR(_g72,"_g72");
						HX_STACK_LINE(279)
						Float _g73 = __this->platform2->get_x();		HX_STACK_VAR(_g73,"_g73");
						HX_STACK_LINE(279)
						Float _g74 = (_g73 + (int)100);		HX_STACK_VAR(_g74,"_g74");
						HX_STACK_LINE(279)
						return (_g72 <= _g74);
					}
					return null();
				}
			};
			HX_STACK_LINE(279)
			if (((  (((  (((  (((this->ballMovement->y > (int)0))) ? bool(_Function_2_19::Block(this)) : bool(false) ))) ? bool(_Function_2_20::Block(this)) : bool(false) ))) ? bool(_Function_2_21::Block(this)) : bool(false) ))){
				HX_STACK_LINE(280)
				this->bounceBall();
				HX_STACK_LINE(281)
				this->ball->set_y((int)470);
				HX_STACK_LINE(282)
				this->pd = ::Paddle_obj::paddle2;
			}
			HX_STACK_LINE(287)
			Float _g75 = this->ball->get_x();		HX_STACK_VAR(_g75,"_g75");
			HX_STACK_LINE(287)
			Float _g76 = this->star1->get_x();		HX_STACK_VAR(_g76,"_g76");
			struct _Function_2_22{
				inline static bool Block( hx::ObjectPtr< ::Main_obj > __this){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Main.hx",287,0x087e5c05)
					{
						HX_STACK_LINE(287)
						Float _g77 = __this->ball->get_x();		HX_STACK_VAR(_g77,"_g77");
						HX_STACK_LINE(287)
						Float _g78 = __this->star1->get_x();		HX_STACK_VAR(_g78,"_g78");
						HX_STACK_LINE(287)
						Float _g79 = (_g78 + (int)50);		HX_STACK_VAR(_g79,"_g79");
						HX_STACK_LINE(287)
						return (_g77 <= _g79);
					}
					return null();
				}
			};
			struct _Function_2_23{
				inline static bool Block( hx::ObjectPtr< ::Main_obj > __this){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Main.hx",287,0x087e5c05)
					{
						HX_STACK_LINE(287)
						Float _g80 = __this->ball->get_y();		HX_STACK_VAR(_g80,"_g80");
						HX_STACK_LINE(287)
						Float _g81 = __this->star1->get_y();		HX_STACK_VAR(_g81,"_g81");
						HX_STACK_LINE(287)
						return (_g80 >= _g81);
					}
					return null();
				}
			};
			struct _Function_2_24{
				inline static bool Block( hx::ObjectPtr< ::Main_obj > __this){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Main.hx",287,0x087e5c05)
					{
						HX_STACK_LINE(287)
						Float _g82 = __this->ball->get_y();		HX_STACK_VAR(_g82,"_g82");
						HX_STACK_LINE(287)
						Float _g83 = __this->star1->get_y();		HX_STACK_VAR(_g83,"_g83");
						HX_STACK_LINE(287)
						Float _g84 = (_g83 + (int)37);		HX_STACK_VAR(_g84,"_g84");
						HX_STACK_LINE(287)
						return (_g82 <= _g84);
					}
					return null();
				}
			};
			HX_STACK_LINE(287)
			if (((  (((  (((  (((_g75 >= _g76))) ? bool(_Function_2_22::Block(this)) : bool(false) ))) ? bool(_Function_2_23::Block(this)) : bool(false) ))) ? bool(_Function_2_24::Block(this)) : bool(false) ))){
				HX_STACK_LINE(288)
				Float _g85 = ::Math_obj::random();		HX_STACK_VAR(_g85,"_g85");
				HX_STACK_LINE(288)
				Float _g86 = (_g85 * (int)300);		HX_STACK_VAR(_g86,"_g86");
				HX_STACK_LINE(288)
				this->star1->set_x(_g86);
				HX_STACK_LINE(289)
				Float _g87 = ::Math_obj::random();		HX_STACK_VAR(_g87,"_g87");
				HX_STACK_LINE(289)
				Float _g88 = (_g87 * (int)300);		HX_STACK_VAR(_g88,"_g88");
				HX_STACK_LINE(289)
				this->star1->set_y(_g88);
				HX_STACK_LINE(290)
				if (((this->pd == ::Paddle_obj::paddle1))){
					HX_STACK_LINE(291)
					(this->scorePlayer)++;
					HX_STACK_LINE(292)
					this->updateScore();
				}
				else{
					HX_STACK_LINE(294)
					(this->scoreAI)++;
					HX_STACK_LINE(295)
					this->updateScore();
				}
			}
			HX_STACK_LINE(308)
			Float _g89 = this->ball->get_x();		HX_STACK_VAR(_g89,"_g89");
			struct _Function_2_25{
				inline static bool Block( hx::ObjectPtr< ::Main_obj > __this){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Main.hx",308,0x087e5c05)
					{
						HX_STACK_LINE(308)
						Float _g90 = __this->ball->get_x();		HX_STACK_VAR(_g90,"_g90");
						HX_STACK_LINE(308)
						return (_g90 > (int)495);
					}
					return null();
				}
			};
			HX_STACK_LINE(308)
			if (((  ((!(((_g89 < (int)5))))) ? bool(_Function_2_25::Block(this)) : bool(true) ))){
				HX_STACK_LINE(308)
				hx::MultEq(this->ballMovement->x,(int)-1);
			}
			HX_STACK_LINE(310)
			Float _g91 = this->ball->get_y();		HX_STACK_VAR(_g91,"_g91");
			HX_STACK_LINE(310)
			if (((_g91 < (int)5))){
				HX_STACK_LINE(310)
				this->winGame(::Player_obj::AI);
			}
			HX_STACK_LINE(311)
			Float _g92 = this->ball->get_y();		HX_STACK_VAR(_g92,"_g92");
			HX_STACK_LINE(311)
			if (((_g92 > (int)495))){
				HX_STACK_LINE(311)
				this->winGame(::Player_obj::Human);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Main_obj,everyFrame,(void))

Void Main_obj::bounceBall( ){
{
		HX_STACK_FRAME("Main","bounceBall",0x95b4759c,"Main.bounceBall","Main.hx",315,0x087e5c05)
		HX_STACK_THIS(this)
		HX_STACK_LINE(316)
		int direction;		HX_STACK_VAR(direction,"direction");
		HX_STACK_LINE(316)
		if (((this->ballMovement->y > (int)0))){
			HX_STACK_LINE(316)
			direction = (int)-1;
		}
		else{
			HX_STACK_LINE(316)
			direction = (int)1;
		}
		HX_STACK_LINE(317)
		Float _g = ::Math_obj::random();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(317)
		Float _g1 = (_g * ::Math_obj::PI);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(317)
		Float _g2 = (Float(_g1) / Float((int)2));		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(317)
		Float randomAngle = (_g2 - (int)45);		HX_STACK_VAR(randomAngle,"randomAngle");
		HX_STACK_LINE(318)
		Float _g3 = ::Math_obj::cos(randomAngle);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(318)
		Float _g4 = (direction * _g3);		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(318)
		Float _g5 = (_g4 * this->ballSpeed);		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(318)
		this->ballMovement->y = _g5;
		HX_STACK_LINE(319)
		Float _g6 = ::Math_obj::sin(randomAngle);		HX_STACK_VAR(_g6,"_g6");
		HX_STACK_LINE(319)
		Float _g7 = (_g6 * this->ballSpeed);		HX_STACK_VAR(_g7,"_g7");
		HX_STACK_LINE(319)
		this->ballMovement->x = _g7;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Main_obj,bounceBall,(void))

Void Main_obj::winGame( ::Player player){
{
		HX_STACK_FRAME("Main","winGame",0x39706d19,"Main.winGame","Main.hx",322,0x087e5c05)
		HX_STACK_THIS(this)
		HX_STACK_ARG(player,"player")
		HX_STACK_LINE(323)
		if (((player == ::Player_obj::Human))){
			HX_STACK_LINE(324)
			(this->scorePlayer)++;
		}
		else{
			HX_STACK_LINE(326)
			(this->scoreAI)++;
		}
		HX_STACK_LINE(328)
		this->setGameState(::GameState_obj::Paused);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Main_obj,winGame,(void))

Void Main_obj::updateScore( ){
{
		HX_STACK_FRAME("Main","updateScore",0x5d7894f4,"Main.updateScore","Main.hx",332,0x087e5c05)
		HX_STACK_THIS(this)
		HX_STACK_LINE(332)
		this->scoreField->set_text(((this->scorePlayer + HX_CSTRING(":")) + this->scoreAI));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Main_obj,updateScore,(void))

Void Main_obj::added( Dynamic e){
{
		HX_STACK_FRAME("Main","added",0x98771aeb,"Main.added","Main.hx",344,0x087e5c05)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(345)
		this->removeEventListener(::openfl::_v2::events::Event_obj::ADDED_TO_STAGE,this->added_dyn(),null());
		HX_STACK_LINE(346)
		this->get_stage()->addEventListener(::openfl::_v2::events::Event_obj::RESIZE,this->resize_dyn(),null(),null(),null());
		HX_STACK_LINE(350)
		this->init();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Main_obj,added,(void))

int Main_obj::paddle_pos;

int Main_obj::wdt;

int Main_obj::cor;

int Main_obj::pwidth;

int Main_obj::centerX;

int Main_obj::centerY;

int Main_obj::mid;

int Main_obj::pdl;

int Main_obj::diameter;

int Main_obj::bkl;

int Main_obj::bkh;

Void Main_obj::main( ){
{
		HX_STACK_FRAME("Main","main",0xed0e206e,"Main.main","Main.hx",355,0x087e5c05)
		HX_STACK_LINE(359)
		::openfl::_v2::Lib_obj::get_current()->get_stage()->set_align(::openfl::display::StageAlign_obj::TOP_LEFT);
		HX_STACK_LINE(360)
		::openfl::_v2::Lib_obj::get_current()->get_stage()->set_scaleMode(::openfl::display::StageScaleMode_obj::NO_SCALE);
		HX_STACK_LINE(361)
		::Main _g = ::Main_obj::__new();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(361)
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
	HX_MARK_MEMBER_NAME(i,"i");
	HX_MARK_MEMBER_NAME(platform1,"platform1");
	HX_MARK_MEMBER_NAME(platform2,"platform2");
	HX_MARK_MEMBER_NAME(block1,"block1");
	HX_MARK_MEMBER_NAME(obs1,"obs1");
	HX_MARK_MEMBER_NAME(obs2,"obs2");
	HX_MARK_MEMBER_NAME(ball,"ball");
	HX_MARK_MEMBER_NAME(star1,"star1");
	HX_MARK_MEMBER_NAME(star2,"star2");
	HX_MARK_MEMBER_NAME(scorePlayer,"scorePlayer");
	HX_MARK_MEMBER_NAME(scoreAI,"scoreAI");
	HX_MARK_MEMBER_NAME(scoreField,"scoreField");
	HX_MARK_MEMBER_NAME(messageField,"messageField");
	HX_MARK_MEMBER_NAME(currentGameState,"currentGameState");
	HX_MARK_MEMBER_NAME(pd,"pd");
	HX_MARK_MEMBER_NAME(arrowKeyUp,"arrowKeyUp");
	HX_MARK_MEMBER_NAME(arrowKeyDown,"arrowKeyDown");
	HX_MARK_MEMBER_NAME(platformSpeed,"platformSpeed");
	HX_MARK_MEMBER_NAME(blockSpeed,"blockSpeed");
	HX_MARK_MEMBER_NAME(ballMovement,"ballMovement");
	HX_MARK_MEMBER_NAME(ballSpeed,"ballSpeed");
	HX_MARK_MEMBER_NAME(blockMovement,"blockMovement");
	HX_MARK_MEMBER_NAME(direction,"direction");
	::openfl::_v2::display::DisplayObjectContainer_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Main_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(inited,"inited");
	HX_VISIT_MEMBER_NAME(i,"i");
	HX_VISIT_MEMBER_NAME(platform1,"platform1");
	HX_VISIT_MEMBER_NAME(platform2,"platform2");
	HX_VISIT_MEMBER_NAME(block1,"block1");
	HX_VISIT_MEMBER_NAME(obs1,"obs1");
	HX_VISIT_MEMBER_NAME(obs2,"obs2");
	HX_VISIT_MEMBER_NAME(ball,"ball");
	HX_VISIT_MEMBER_NAME(star1,"star1");
	HX_VISIT_MEMBER_NAME(star2,"star2");
	HX_VISIT_MEMBER_NAME(scorePlayer,"scorePlayer");
	HX_VISIT_MEMBER_NAME(scoreAI,"scoreAI");
	HX_VISIT_MEMBER_NAME(scoreField,"scoreField");
	HX_VISIT_MEMBER_NAME(messageField,"messageField");
	HX_VISIT_MEMBER_NAME(currentGameState,"currentGameState");
	HX_VISIT_MEMBER_NAME(pd,"pd");
	HX_VISIT_MEMBER_NAME(arrowKeyUp,"arrowKeyUp");
	HX_VISIT_MEMBER_NAME(arrowKeyDown,"arrowKeyDown");
	HX_VISIT_MEMBER_NAME(platformSpeed,"platformSpeed");
	HX_VISIT_MEMBER_NAME(blockSpeed,"blockSpeed");
	HX_VISIT_MEMBER_NAME(ballMovement,"ballMovement");
	HX_VISIT_MEMBER_NAME(ballSpeed,"ballSpeed");
	HX_VISIT_MEMBER_NAME(blockMovement,"blockMovement");
	HX_VISIT_MEMBER_NAME(direction,"direction");
	::openfl::_v2::display::DisplayObjectContainer_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Main_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"i") ) { return i; }
		break;
	case 2:
		if (HX_FIELD_EQ(inName,"pd") ) { return pd; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"main") ) { return main_dyn(); }
		if (HX_FIELD_EQ(inName,"obs1") ) { return obs1; }
		if (HX_FIELD_EQ(inName,"obs2") ) { return obs2; }
		if (HX_FIELD_EQ(inName,"ball") ) { return ball; }
		if (HX_FIELD_EQ(inName,"init") ) { return init_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"star1") ) { return star1; }
		if (HX_FIELD_EQ(inName,"star2") ) { return star2; }
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
		if (HX_FIELD_EQ(inName,"direction") ) { return direction; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"scoreField") ) { return scoreField; }
		if (HX_FIELD_EQ(inName,"arrowKeyUp") ) { return arrowKeyUp; }
		if (HX_FIELD_EQ(inName,"blockSpeed") ) { return blockSpeed; }
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
		if (HX_FIELD_EQ(inName,"blockMovement") ) { return blockMovement; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"currentGameState") ) { return currentGameState; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Main_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"i") ) { i=inValue.Cast< Float >(); return inValue; }
		break;
	case 2:
		if (HX_FIELD_EQ(inName,"pd") ) { pd=inValue.Cast< ::Paddle >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"obs1") ) { obs1=inValue.Cast< ::Obstacle >(); return inValue; }
		if (HX_FIELD_EQ(inName,"obs2") ) { obs2=inValue.Cast< ::Obstacle >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ball") ) { ball=inValue.Cast< ::Ball >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"star1") ) { star1=inValue.Cast< ::openfl::_v2::display::Bitmap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"star2") ) { star2=inValue.Cast< ::openfl::_v2::display::Bitmap >(); return inValue; }
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
		if (HX_FIELD_EQ(inName,"direction") ) { direction=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"scoreField") ) { scoreField=inValue.Cast< ::openfl::_v2::text::TextField >(); return inValue; }
		if (HX_FIELD_EQ(inName,"arrowKeyUp") ) { arrowKeyUp=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"blockSpeed") ) { blockSpeed=inValue.Cast< int >(); return inValue; }
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
		if (HX_FIELD_EQ(inName,"blockMovement") ) { blockMovement=inValue.Cast< ::openfl::_v2::geom::Point >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"currentGameState") ) { currentGameState=inValue.Cast< ::GameState >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Main_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("inited"));
	outFields->push(HX_CSTRING("i"));
	outFields->push(HX_CSTRING("platform1"));
	outFields->push(HX_CSTRING("platform2"));
	outFields->push(HX_CSTRING("block1"));
	outFields->push(HX_CSTRING("obs1"));
	outFields->push(HX_CSTRING("obs2"));
	outFields->push(HX_CSTRING("ball"));
	outFields->push(HX_CSTRING("star1"));
	outFields->push(HX_CSTRING("star2"));
	outFields->push(HX_CSTRING("scorePlayer"));
	outFields->push(HX_CSTRING("scoreAI"));
	outFields->push(HX_CSTRING("scoreField"));
	outFields->push(HX_CSTRING("messageField"));
	outFields->push(HX_CSTRING("currentGameState"));
	outFields->push(HX_CSTRING("pd"));
	outFields->push(HX_CSTRING("arrowKeyUp"));
	outFields->push(HX_CSTRING("arrowKeyDown"));
	outFields->push(HX_CSTRING("platformSpeed"));
	outFields->push(HX_CSTRING("blockSpeed"));
	outFields->push(HX_CSTRING("ballMovement"));
	outFields->push(HX_CSTRING("ballSpeed"));
	outFields->push(HX_CSTRING("blockMovement"));
	outFields->push(HX_CSTRING("direction"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("paddle_pos"),
	HX_CSTRING("wdt"),
	HX_CSTRING("cor"),
	HX_CSTRING("pwidth"),
	HX_CSTRING("centerX"),
	HX_CSTRING("centerY"),
	HX_CSTRING("mid"),
	HX_CSTRING("pdl"),
	HX_CSTRING("diameter"),
	HX_CSTRING("bkl"),
	HX_CSTRING("bkh"),
	HX_CSTRING("main"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(Main_obj,inited),HX_CSTRING("inited")},
	{hx::fsFloat,(int)offsetof(Main_obj,i),HX_CSTRING("i")},
	{hx::fsObject /*::Platform*/ ,(int)offsetof(Main_obj,platform1),HX_CSTRING("platform1")},
	{hx::fsObject /*::Platform*/ ,(int)offsetof(Main_obj,platform2),HX_CSTRING("platform2")},
	{hx::fsObject /*::Block*/ ,(int)offsetof(Main_obj,block1),HX_CSTRING("block1")},
	{hx::fsObject /*::Obstacle*/ ,(int)offsetof(Main_obj,obs1),HX_CSTRING("obs1")},
	{hx::fsObject /*::Obstacle*/ ,(int)offsetof(Main_obj,obs2),HX_CSTRING("obs2")},
	{hx::fsObject /*::Ball*/ ,(int)offsetof(Main_obj,ball),HX_CSTRING("ball")},
	{hx::fsObject /*::openfl::_v2::display::Bitmap*/ ,(int)offsetof(Main_obj,star1),HX_CSTRING("star1")},
	{hx::fsObject /*::openfl::_v2::display::Bitmap*/ ,(int)offsetof(Main_obj,star2),HX_CSTRING("star2")},
	{hx::fsInt,(int)offsetof(Main_obj,scorePlayer),HX_CSTRING("scorePlayer")},
	{hx::fsInt,(int)offsetof(Main_obj,scoreAI),HX_CSTRING("scoreAI")},
	{hx::fsObject /*::openfl::_v2::text::TextField*/ ,(int)offsetof(Main_obj,scoreField),HX_CSTRING("scoreField")},
	{hx::fsObject /*::openfl::_v2::text::TextField*/ ,(int)offsetof(Main_obj,messageField),HX_CSTRING("messageField")},
	{hx::fsObject /*::GameState*/ ,(int)offsetof(Main_obj,currentGameState),HX_CSTRING("currentGameState")},
	{hx::fsObject /*::Paddle*/ ,(int)offsetof(Main_obj,pd),HX_CSTRING("pd")},
	{hx::fsBool,(int)offsetof(Main_obj,arrowKeyUp),HX_CSTRING("arrowKeyUp")},
	{hx::fsBool,(int)offsetof(Main_obj,arrowKeyDown),HX_CSTRING("arrowKeyDown")},
	{hx::fsInt,(int)offsetof(Main_obj,platformSpeed),HX_CSTRING("platformSpeed")},
	{hx::fsInt,(int)offsetof(Main_obj,blockSpeed),HX_CSTRING("blockSpeed")},
	{hx::fsObject /*::openfl::_v2::geom::Point*/ ,(int)offsetof(Main_obj,ballMovement),HX_CSTRING("ballMovement")},
	{hx::fsInt,(int)offsetof(Main_obj,ballSpeed),HX_CSTRING("ballSpeed")},
	{hx::fsObject /*::openfl::_v2::geom::Point*/ ,(int)offsetof(Main_obj,blockMovement),HX_CSTRING("blockMovement")},
	{hx::fsInt,(int)offsetof(Main_obj,direction),HX_CSTRING("direction")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("inited"),
	HX_CSTRING("i"),
	HX_CSTRING("platform1"),
	HX_CSTRING("platform2"),
	HX_CSTRING("block1"),
	HX_CSTRING("obs1"),
	HX_CSTRING("obs2"),
	HX_CSTRING("ball"),
	HX_CSTRING("star1"),
	HX_CSTRING("star2"),
	HX_CSTRING("scorePlayer"),
	HX_CSTRING("scoreAI"),
	HX_CSTRING("scoreField"),
	HX_CSTRING("messageField"),
	HX_CSTRING("currentGameState"),
	HX_CSTRING("pd"),
	HX_CSTRING("arrowKeyUp"),
	HX_CSTRING("arrowKeyDown"),
	HX_CSTRING("platformSpeed"),
	HX_CSTRING("blockSpeed"),
	HX_CSTRING("ballMovement"),
	HX_CSTRING("ballSpeed"),
	HX_CSTRING("blockMovement"),
	HX_CSTRING("direction"),
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
	HX_MARK_MEMBER_NAME(Main_obj::paddle_pos,"paddle_pos");
	HX_MARK_MEMBER_NAME(Main_obj::wdt,"wdt");
	HX_MARK_MEMBER_NAME(Main_obj::cor,"cor");
	HX_MARK_MEMBER_NAME(Main_obj::pwidth,"pwidth");
	HX_MARK_MEMBER_NAME(Main_obj::centerX,"centerX");
	HX_MARK_MEMBER_NAME(Main_obj::centerY,"centerY");
	HX_MARK_MEMBER_NAME(Main_obj::mid,"mid");
	HX_MARK_MEMBER_NAME(Main_obj::pdl,"pdl");
	HX_MARK_MEMBER_NAME(Main_obj::diameter,"diameter");
	HX_MARK_MEMBER_NAME(Main_obj::bkl,"bkl");
	HX_MARK_MEMBER_NAME(Main_obj::bkh,"bkh");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Main_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Main_obj::paddle_pos,"paddle_pos");
	HX_VISIT_MEMBER_NAME(Main_obj::wdt,"wdt");
	HX_VISIT_MEMBER_NAME(Main_obj::cor,"cor");
	HX_VISIT_MEMBER_NAME(Main_obj::pwidth,"pwidth");
	HX_VISIT_MEMBER_NAME(Main_obj::centerX,"centerX");
	HX_VISIT_MEMBER_NAME(Main_obj::centerY,"centerY");
	HX_VISIT_MEMBER_NAME(Main_obj::mid,"mid");
	HX_VISIT_MEMBER_NAME(Main_obj::pdl,"pdl");
	HX_VISIT_MEMBER_NAME(Main_obj::diameter,"diameter");
	HX_VISIT_MEMBER_NAME(Main_obj::bkl,"bkl");
	HX_VISIT_MEMBER_NAME(Main_obj::bkh,"bkh");
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
	paddle_pos= (int)200;
	wdt= (int)500;
	cor= (int)5;
	pwidth= (int)15;
	centerX= (int)225;
	centerY= (int)250;
	mid= (int)250;
	pdl= (int)100;
	diameter= (int)10;
	bkl= (int)50;
	bkh= (int)20;
}

