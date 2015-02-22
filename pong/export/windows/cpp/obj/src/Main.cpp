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
#ifndef INCLUDED_Obstacle
#include <Obstacle.h>
#endif
#ifndef INCLUDED_Platform
#include <Platform.h>
#endif
#ifndef INCLUDED_Player
#include <Player.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_openfl__v2_Assets
#include <openfl/_v2/Assets.h>
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
HX_STACK_FRAME("Main","new",0x6616a5cb,"Main.new","Main.hx",25,0x087e5c05)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(61)
	this->direction = (int)1;
	HX_STACK_LINE(316)
	super::__construct();
	HX_STACK_LINE(317)
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
		HX_STACK_FRAME("Main","resize",0x39257969,"Main.resize","Main.hx",67,0x087e5c05)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(67)
		if ((!(this->inited))){
			HX_STACK_LINE(67)
			this->init();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Main_obj,resize,(void))

Void Main_obj::init( ){
{
		HX_STACK_FRAME("Main","init",0xea732345,"Main.init","Main.hx",72,0x087e5c05)
		HX_STACK_THIS(this)
		HX_STACK_LINE(73)
		if ((this->inited)){
			HX_STACK_LINE(73)
			return null();
		}
		HX_STACK_LINE(74)
		this->inited = true;
		HX_STACK_LINE(76)
		::Platform _g = ::Platform_obj::__new();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(76)
		this->platform1 = _g;
		HX_STACK_LINE(77)
		this->platform1->set_y((int)5);
		HX_STACK_LINE(78)
		this->platform1->set_x((int)200);
		HX_STACK_LINE(79)
		this->addChild(this->platform1);
		HX_STACK_LINE(81)
		::Platform _g1 = ::Platform_obj::__new();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(81)
		this->platform2 = _g1;
		HX_STACK_LINE(82)
		this->platform2->set_x((int)200);
		HX_STACK_LINE(83)
		this->platform2->set_y((int)480);
		HX_STACK_LINE(84)
		this->addChild(this->platform2);
		HX_STACK_LINE(86)
		::Block _g2 = ::Block_obj::__new();		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(86)
		this->block1 = _g2;
		HX_STACK_LINE(87)
		this->block1->set_x((int)225);
		HX_STACK_LINE(88)
		this->block1->set_y((int)250);
		HX_STACK_LINE(89)
		this->addChild(this->block1);
		HX_STACK_LINE(91)
		::Obstacle _g3 = ::Obstacle_obj::__new();		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(91)
		this->obs1 = _g3;
		HX_STACK_LINE(92)
		this->obs1->set_x((int)100);
		HX_STACK_LINE(93)
		this->obs1->set_y((int)400);
		HX_STACK_LINE(94)
		this->addChild(this->obs1);
		HX_STACK_LINE(96)
		::Obstacle _g4 = ::Obstacle_obj::__new();		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(96)
		this->obs2 = _g4;
		HX_STACK_LINE(97)
		this->obs2->set_x((int)400);
		HX_STACK_LINE(98)
		this->obs2->set_y((int)100);
		HX_STACK_LINE(99)
		this->addChild(this->obs2);
		HX_STACK_LINE(101)
		::Ball _g5 = ::Ball_obj::__new();		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(101)
		this->ball = _g5;
		HX_STACK_LINE(102)
		this->ball->set_x((int)250);
		HX_STACK_LINE(103)
		this->ball->set_y((int)250);
		HX_STACK_LINE(104)
		this->addChild(this->ball);
		HX_STACK_LINE(106)
		::openfl::_v2::display::BitmapData bd = ::openfl::_v2::Assets_obj::getBitmapData(HX_CSTRING("images:String.png"),null());		HX_STACK_VAR(bd,"bd");
		HX_STACK_LINE(107)
		::openfl::_v2::display::Bitmap b = ::openfl::_v2::display::Bitmap_obj::__new(bd,null(),null());		HX_STACK_VAR(b,"b");
		HX_STACK_LINE(109)
		this->addChild(b);
		HX_STACK_LINE(117)
		::openfl::_v2::text::TextFormat scoreFormat = ::openfl::_v2::text::TextFormat_obj::__new(HX_CSTRING("Verdana"),(int)24,(int)12303291,true,null(),null(),null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(scoreFormat,"scoreFormat");
		HX_STACK_LINE(118)
		scoreFormat->align = ::openfl::_v2::text::TextFormatAlign_obj::CENTER;
		HX_STACK_LINE(120)
		::openfl::_v2::text::TextField _g6 = ::openfl::_v2::text::TextField_obj::__new();		HX_STACK_VAR(_g6,"_g6");
		HX_STACK_LINE(120)
		this->scoreField = _g6;
		HX_STACK_LINE(121)
		this->addChild(this->scoreField);
		HX_STACK_LINE(122)
		this->scoreField->set_width((int)500);
		HX_STACK_LINE(123)
		this->scoreField->set_y((int)30);
		HX_STACK_LINE(124)
		this->scoreField->set_defaultTextFormat(scoreFormat);
		HX_STACK_LINE(125)
		this->scoreField->set_selectable(false);
		HX_STACK_LINE(127)
		::openfl::_v2::text::TextFormat messageFormat = ::openfl::_v2::text::TextFormat_obj::__new(HX_CSTRING("Verdana"),(int)18,(int)12303291,true,null(),null(),null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(messageFormat,"messageFormat");
		HX_STACK_LINE(128)
		messageFormat->align = ::openfl::_v2::text::TextFormatAlign_obj::CENTER;
		HX_STACK_LINE(130)
		::openfl::_v2::text::TextField _g7 = ::openfl::_v2::text::TextField_obj::__new();		HX_STACK_VAR(_g7,"_g7");
		HX_STACK_LINE(130)
		this->messageField = _g7;
		HX_STACK_LINE(131)
		this->addChild(this->messageField);
		HX_STACK_LINE(132)
		this->messageField->set_width((int)500);
		HX_STACK_LINE(133)
		this->messageField->set_y((int)400);
		HX_STACK_LINE(134)
		this->messageField->set_defaultTextFormat(messageFormat);
		HX_STACK_LINE(135)
		this->messageField->set_selectable(false);
		HX_STACK_LINE(136)
		this->messageField->set_text(HX_CSTRING("Press SPACE to start\nUse ARROW KEYS to move your platform"));
		HX_STACK_LINE(138)
		this->scorePlayer = (int)0;
		HX_STACK_LINE(139)
		this->scoreAI = (int)0;
		HX_STACK_LINE(140)
		this->arrowKeyUp = false;
		HX_STACK_LINE(141)
		this->arrowKeyDown = false;
		HX_STACK_LINE(142)
		this->platformSpeed = (int)7;
		HX_STACK_LINE(143)
		this->ballSpeed = (int)7;
		HX_STACK_LINE(144)
		this->blockSpeed = (int)7;
		HX_STACK_LINE(145)
		::openfl::_v2::geom::Point _g8 = ::openfl::_v2::geom::Point_obj::__new((int)225,(int)250);		HX_STACK_VAR(_g8,"_g8");
		HX_STACK_LINE(145)
		this->blockMovement = _g8;
		HX_STACK_LINE(146)
		::openfl::_v2::geom::Point _g9 = ::openfl::_v2::geom::Point_obj::__new((int)0,(int)0);		HX_STACK_VAR(_g9,"_g9");
		HX_STACK_LINE(146)
		this->ballMovement = _g9;
		HX_STACK_LINE(147)
		this->setGameState(::GameState_obj::Paused);
		HX_STACK_LINE(149)
		this->get_stage()->addEventListener(::openfl::_v2::events::KeyboardEvent_obj::KEY_DOWN,this->keyDown_dyn(),null(),null(),null());
		HX_STACK_LINE(150)
		this->get_stage()->addEventListener(::openfl::_v2::events::KeyboardEvent_obj::KEY_UP,this->keyUp_dyn(),null(),null(),null());
		HX_STACK_LINE(151)
		this->addEventListener(::openfl::_v2::events::Event_obj::ENTER_FRAME,this->everyFrame_dyn(),null(),null(),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Main_obj,init,(void))

Void Main_obj::setGameState( ::GameState state){
{
		HX_STACK_FRAME("Main","setGameState",0x0450c9f2,"Main.setGameState","Main.hx",154,0x087e5c05)
		HX_STACK_THIS(this)
		HX_STACK_ARG(state,"state")
		HX_STACK_LINE(155)
		this->currentGameState = state;
		HX_STACK_LINE(156)
		this->updateScore();
		HX_STACK_LINE(157)
		if (((state == ::GameState_obj::Paused))){
			HX_STACK_LINE(158)
			this->messageField->set_alpha((int)1);
		}
		else{
			HX_STACK_LINE(160)
			this->messageField->set_alpha((int)0);
			HX_STACK_LINE(161)
			this->platform1->set_x((int)200);
			HX_STACK_LINE(162)
			this->platform2->set_x((int)200);
			HX_STACK_LINE(163)
			this->block1->set_x((int)225);
			HX_STACK_LINE(164)
			this->block1->set_y((int)250);
			HX_STACK_LINE(165)
			this->ball->set_y((int)250);
			HX_STACK_LINE(166)
			this->ball->set_x((int)250);
			HX_STACK_LINE(167)
			Float _g = ::Math_obj::random();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(167)
			int direction;		HX_STACK_VAR(direction,"direction");
			HX_STACK_LINE(167)
			if (((_g > .5))){
				HX_STACK_LINE(167)
				direction = (int)1;
			}
			else{
				HX_STACK_LINE(167)
				direction = (int)-1;
			}
			HX_STACK_LINE(168)
			Float _g1 = ::Math_obj::random();		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(168)
			Float _g2 = (_g1 * ::Math_obj::PI);		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(168)
			Float _g3 = (Float(_g2) / Float((int)2));		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(168)
			Float randomAngle = (_g3 - (int)45);		HX_STACK_VAR(randomAngle,"randomAngle");
			HX_STACK_LINE(169)
			Float _g4 = ::Math_obj::cos(randomAngle);		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(169)
			Float _g5 = (direction * _g4);		HX_STACK_VAR(_g5,"_g5");
			HX_STACK_LINE(169)
			Float _g6 = (_g5 * this->ballSpeed);		HX_STACK_VAR(_g6,"_g6");
			HX_STACK_LINE(169)
			this->ballMovement->y = _g6;
			HX_STACK_LINE(170)
			Float _g7 = ::Math_obj::sin(randomAngle);		HX_STACK_VAR(_g7,"_g7");
			HX_STACK_LINE(170)
			Float _g8 = (_g7 * this->ballSpeed);		HX_STACK_VAR(_g8,"_g8");
			HX_STACK_LINE(170)
			this->ballMovement->x = _g8;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Main_obj,setGameState,(void))

Void Main_obj::keyDown( ::openfl::_v2::events::KeyboardEvent event){
{
		HX_STACK_FRAME("Main","keyDown",0x0078d08c,"Main.keyDown","Main.hx",176,0x087e5c05)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(176)
		if (((bool((this->currentGameState == ::GameState_obj::Paused)) && bool((event->keyCode == (int)32))))){
			HX_STACK_LINE(177)
			this->setGameState(::GameState_obj::Playing);
		}
		else{
			HX_STACK_LINE(178)
			if (((event->keyCode == (int)37))){
				HX_STACK_LINE(179)
				this->arrowKeyUp = true;
			}
			else{
				HX_STACK_LINE(180)
				if (((event->keyCode == (int)39))){
					HX_STACK_LINE(181)
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
		HX_STACK_FRAME("Main","keyUp",0x5b320005,"Main.keyUp","Main.hx",186,0x087e5c05)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(186)
		if (((event->keyCode == (int)37))){
			HX_STACK_LINE(187)
			this->arrowKeyUp = false;
		}
		else{
			HX_STACK_LINE(188)
			if (((event->keyCode == (int)39))){
				HX_STACK_LINE(189)
				this->arrowKeyDown = false;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Main_obj,keyUp,(void))

Void Main_obj::everyFrame( ::openfl::_v2::events::Event event){
{
		HX_STACK_FRAME("Main","everyFrame",0xc084a887,"Main.everyFrame","Main.hx",194,0x087e5c05)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(194)
		if (((this->currentGameState == ::GameState_obj::Playing))){
			HX_STACK_LINE(197)
			if ((this->arrowKeyUp)){
				HX_STACK_LINE(198)
				::Platform _g = this->platform1;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(198)
				Float _g1 = _g->get_x();		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(198)
				Float _g11 = (_g1 - this->platformSpeed);		HX_STACK_VAR(_g11,"_g11");
				HX_STACK_LINE(198)
				_g->set_x(_g11);
			}
			HX_STACK_LINE(200)
			if ((this->arrowKeyDown)){
				HX_STACK_LINE(201)
				::Platform _g = this->platform1;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(201)
				Float _g2 = _g->get_x();		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(201)
				Float _g3 = (_g2 + this->platformSpeed);		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(201)
				_g->set_x(_g3);
			}
			HX_STACK_LINE(204)
			Float _g4 = this->ball->get_y();		HX_STACK_VAR(_g4,"_g4");
			struct _Function_2_1{
				inline static bool Block( hx::ObjectPtr< ::Main_obj > __this){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Main.hx",204,0x087e5c05)
					{
						HX_STACK_LINE(204)
						Float _g5 = __this->ball->get_x();		HX_STACK_VAR(_g5,"_g5");
						HX_STACK_LINE(204)
						Float _g6 = __this->platform2->get_x();		HX_STACK_VAR(_g6,"_g6");
						HX_STACK_LINE(204)
						Float _g7 = (_g6 + (int)70);		HX_STACK_VAR(_g7,"_g7");
						HX_STACK_LINE(204)
						return (_g5 > _g7);
					}
					return null();
				}
			};
			HX_STACK_LINE(204)
			if (((  (((_g4 > (int)300))) ? bool(_Function_2_1::Block(this)) : bool(false) ))){
				HX_STACK_LINE(205)
				::Platform _g = this->platform2;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(205)
				Float _g8 = _g->get_x();		HX_STACK_VAR(_g8,"_g8");
				HX_STACK_LINE(205)
				Float _g9 = (_g8 + this->platformSpeed);		HX_STACK_VAR(_g9,"_g9");
				HX_STACK_LINE(205)
				_g->set_x(_g9);
			}
			HX_STACK_LINE(207)
			Float _g10 = this->ball->get_y();		HX_STACK_VAR(_g10,"_g10");
			struct _Function_2_2{
				inline static bool Block( hx::ObjectPtr< ::Main_obj > __this){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Main.hx",207,0x087e5c05)
					{
						HX_STACK_LINE(207)
						Float _g11 = __this->ball->get_x();		HX_STACK_VAR(_g11,"_g11");
						HX_STACK_LINE(207)
						Float _g12 = __this->platform2->get_x();		HX_STACK_VAR(_g12,"_g12");
						HX_STACK_LINE(207)
						Float _g13 = (_g12 + (int)30);		HX_STACK_VAR(_g13,"_g13");
						HX_STACK_LINE(207)
						return (_g11 < _g13);
					}
					return null();
				}
			};
			HX_STACK_LINE(207)
			if (((  (((_g10 > (int)300))) ? bool(_Function_2_2::Block(this)) : bool(false) ))){
				HX_STACK_LINE(208)
				::Platform _g = this->platform2;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(208)
				Float _g14 = _g->get_x();		HX_STACK_VAR(_g14,"_g14");
				HX_STACK_LINE(208)
				Float _g15 = (_g14 - this->platformSpeed);		HX_STACK_VAR(_g15,"_g15");
				HX_STACK_LINE(208)
				_g->set_x(_g15);
			}
			HX_STACK_LINE(211)
			Float _g16 = this->platform1->get_x();		HX_STACK_VAR(_g16,"_g16");
			HX_STACK_LINE(211)
			if (((_g16 < (int)5))){
				HX_STACK_LINE(211)
				this->platform1->set_x((int)5);
			}
			HX_STACK_LINE(212)
			Float _g17 = this->platform1->get_x();		HX_STACK_VAR(_g17,"_g17");
			HX_STACK_LINE(212)
			if (((_g17 > (int)395))){
				HX_STACK_LINE(212)
				this->platform1->set_x((int)395);
			}
			HX_STACK_LINE(214)
			Float _g18 = this->platform2->get_x();		HX_STACK_VAR(_g18,"_g18");
			HX_STACK_LINE(214)
			if (((_g18 < (int)5))){
				HX_STACK_LINE(214)
				this->platform2->set_x((int)5);
			}
			HX_STACK_LINE(215)
			Float _g19 = this->platform2->get_x();		HX_STACK_VAR(_g19,"_g19");
			HX_STACK_LINE(215)
			if (((_g19 > (int)395))){
				HX_STACK_LINE(215)
				this->platform2->set_x((int)395);
			}
			HX_STACK_LINE(217)
			{
				HX_STACK_LINE(217)
				::Ball _g = this->ball;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(217)
				Float _g20 = _g->get_y();		HX_STACK_VAR(_g20,"_g20");
				HX_STACK_LINE(217)
				Float _g21 = (_g20 + this->ballMovement->y);		HX_STACK_VAR(_g21,"_g21");
				HX_STACK_LINE(217)
				_g->set_y(_g21);
			}
			HX_STACK_LINE(218)
			{
				HX_STACK_LINE(218)
				::Ball _g = this->ball;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(218)
				Float _g22 = _g->get_x();		HX_STACK_VAR(_g22,"_g22");
				HX_STACK_LINE(218)
				Float _g23 = (_g22 + this->ballMovement->x);		HX_STACK_VAR(_g23,"_g23");
				HX_STACK_LINE(218)
				_g->set_x(_g23);
			}
			struct _Function_2_3{
				inline static bool Block( hx::ObjectPtr< ::Main_obj > __this){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Main.hx",223,0x087e5c05)
					{
						HX_STACK_LINE(223)
						Float _g24 = __this->ball->get_y();		HX_STACK_VAR(_g24,"_g24");
						HX_STACK_LINE(223)
						return (_g24 <= (int)435);
					}
					return null();
				}
			};
			struct _Function_2_4{
				inline static bool Block( hx::ObjectPtr< ::Main_obj > __this){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Main.hx",223,0x087e5c05)
					{
						HX_STACK_LINE(223)
						Float _g25 = __this->ball->get_x();		HX_STACK_VAR(_g25,"_g25");
						HX_STACK_LINE(223)
						Float _g26 = __this->obs1->get_x();		HX_STACK_VAR(_g26,"_g26");
						HX_STACK_LINE(223)
						return (_g25 >= _g26);
					}
					return null();
				}
			};
			struct _Function_2_5{
				inline static bool Block( hx::ObjectPtr< ::Main_obj > __this){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Main.hx",223,0x087e5c05)
					{
						HX_STACK_LINE(223)
						Float _g27 = __this->ball->get_x();		HX_STACK_VAR(_g27,"_g27");
						HX_STACK_LINE(223)
						Float _g28 = __this->obs1->get_x();		HX_STACK_VAR(_g28,"_g28");
						HX_STACK_LINE(223)
						Float _g29 = (_g28 + (int)25);		HX_STACK_VAR(_g29,"_g29");
						HX_STACK_LINE(223)
						return (_g27 <= _g29);
					}
					return null();
				}
			};
			HX_STACK_LINE(223)
			if (((  (((  (((  (((this->ballMovement->y < (int)0))) ? bool(_Function_2_3::Block(this)) : bool(false) ))) ? bool(_Function_2_4::Block(this)) : bool(false) ))) ? bool(_Function_2_5::Block(this)) : bool(false) ))){
				HX_STACK_LINE(224)
				this->bounceBall();
				HX_STACK_LINE(225)
				Float _g30 = this->ball->get_x();		HX_STACK_VAR(_g30,"_g30");
				HX_STACK_LINE(225)
				::String _g31 = (HX_CSTRING("BAllx ::") + _g30);		HX_STACK_VAR(_g31,"_g31");
				HX_STACK_LINE(225)
				::String _g32 = (_g31 + HX_CSTRING("ball movement.y::"));		HX_STACK_VAR(_g32,"_g32");
				HX_STACK_LINE(225)
				::String _g33 = (_g32 + this->ballMovement->y);		HX_STACK_VAR(_g33,"_g33");
				HX_STACK_LINE(225)
				::String _g34 = (_g33 + HX_CSTRING("ball.y"));		HX_STACK_VAR(_g34,"_g34");
				HX_STACK_LINE(225)
				Float _g35 = this->ball->get_y();		HX_STACK_VAR(_g35,"_g35");
				HX_STACK_LINE(225)
				::String _g36 = (_g34 + _g35);		HX_STACK_VAR(_g36,"_g36");
				HX_STACK_LINE(225)
				::haxe::Log_obj::trace(_g36,hx::SourceInfo(HX_CSTRING("Main.hx"),225,HX_CSTRING("Main"),HX_CSTRING("everyFrame")));
			}
			struct _Function_2_6{
				inline static bool Block( hx::ObjectPtr< ::Main_obj > __this){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Main.hx",228,0x087e5c05)
					{
						HX_STACK_LINE(228)
						Float _g37 = __this->ball->get_y();		HX_STACK_VAR(_g37,"_g37");
						HX_STACK_LINE(228)
						return (_g37 >= (int)405);
					}
					return null();
				}
			};
			struct _Function_2_7{
				inline static bool Block( hx::ObjectPtr< ::Main_obj > __this){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Main.hx",228,0x087e5c05)
					{
						HX_STACK_LINE(228)
						Float _g38 = __this->ball->get_x();		HX_STACK_VAR(_g38,"_g38");
						HX_STACK_LINE(228)
						Float _g39 = __this->obs1->get_x();		HX_STACK_VAR(_g39,"_g39");
						HX_STACK_LINE(228)
						return (_g38 >= _g39);
					}
					return null();
				}
			};
			struct _Function_2_8{
				inline static bool Block( hx::ObjectPtr< ::Main_obj > __this){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Main.hx",228,0x087e5c05)
					{
						HX_STACK_LINE(228)
						Float _g40 = __this->ball->get_x();		HX_STACK_VAR(_g40,"_g40");
						HX_STACK_LINE(228)
						Float _g41 = __this->obs1->get_x();		HX_STACK_VAR(_g41,"_g41");
						HX_STACK_LINE(228)
						Float _g42 = (_g41 + (int)25);		HX_STACK_VAR(_g42,"_g42");
						HX_STACK_LINE(228)
						return (_g40 <= _g42);
					}
					return null();
				}
			};
			HX_STACK_LINE(228)
			if (((  (((  (((  (((this->ballMovement->y > (int)0))) ? bool(_Function_2_6::Block(this)) : bool(false) ))) ? bool(_Function_2_7::Block(this)) : bool(false) ))) ? bool(_Function_2_8::Block(this)) : bool(false) ))){
				HX_STACK_LINE(229)
				this->bounceBall();
				HX_STACK_LINE(230)
				Float _g43 = this->ball->get_x();		HX_STACK_VAR(_g43,"_g43");
				HX_STACK_LINE(230)
				::String _g44 = (HX_CSTRING("BAllx ::") + _g43);		HX_STACK_VAR(_g44,"_g44");
				HX_STACK_LINE(230)
				::String _g45 = (_g44 + HX_CSTRING("ball movement.y::"));		HX_STACK_VAR(_g45,"_g45");
				HX_STACK_LINE(230)
				::String _g46 = (_g45 + this->ballMovement->y);		HX_STACK_VAR(_g46,"_g46");
				HX_STACK_LINE(230)
				::String _g47 = (_g46 + HX_CSTRING("ball.y"));		HX_STACK_VAR(_g47,"_g47");
				HX_STACK_LINE(230)
				Float _g48 = this->ball->get_y();		HX_STACK_VAR(_g48,"_g48");
				HX_STACK_LINE(230)
				::String _g49 = (_g47 + _g48);		HX_STACK_VAR(_g49,"_g49");
				HX_STACK_LINE(230)
				::haxe::Log_obj::trace(_g49,hx::SourceInfo(HX_CSTRING("Main.hx"),230,HX_CSTRING("Main"),HX_CSTRING("everyFrame")));
			}
			struct _Function_2_9{
				inline static bool Block( hx::ObjectPtr< ::Main_obj > __this){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Main.hx",233,0x087e5c05)
					{
						HX_STACK_LINE(233)
						Float _g50 = __this->ball->get_y();		HX_STACK_VAR(_g50,"_g50");
						HX_STACK_LINE(233)
						return (_g50 >= (int)400);
					}
					return null();
				}
			};
			struct _Function_2_10{
				inline static bool Block( hx::ObjectPtr< ::Main_obj > __this){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Main.hx",233,0x087e5c05)
					{
						HX_STACK_LINE(233)
						Float _g51 = __this->ball->get_y();		HX_STACK_VAR(_g51,"_g51");
						HX_STACK_LINE(233)
						return (_g51 <= (int)430);
					}
					return null();
				}
			};
			struct _Function_2_11{
				inline static bool Block( hx::ObjectPtr< ::Main_obj > __this){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Main.hx",233,0x087e5c05)
					{
						HX_STACK_LINE(233)
						Float _g52 = __this->ball->get_x();		HX_STACK_VAR(_g52,"_g52");
						HX_STACK_LINE(233)
						Float _g53 = __this->obs1->get_x();		HX_STACK_VAR(_g53,"_g53");
						HX_STACK_LINE(233)
						Float _g54 = (_g53 + (int)25);		HX_STACK_VAR(_g54,"_g54");
						HX_STACK_LINE(233)
						return (_g52 == _g54);
					}
					return null();
				}
			};
			HX_STACK_LINE(233)
			if (((  (((  (((  (((this->ballMovement->x < (int)0))) ? bool(_Function_2_9::Block(this)) : bool(false) ))) ? bool(_Function_2_10::Block(this)) : bool(false) ))) ? bool(_Function_2_11::Block(this)) : bool(false) ))){
				HX_STACK_LINE(234)
				this->bounceBall();
			}
			struct _Function_2_12{
				inline static bool Block( hx::ObjectPtr< ::Main_obj > __this){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Main.hx",237,0x087e5c05)
					{
						HX_STACK_LINE(237)
						Float _g55 = __this->ball->get_y();		HX_STACK_VAR(_g55,"_g55");
						HX_STACK_LINE(237)
						return (_g55 >= (int)400);
					}
					return null();
				}
			};
			struct _Function_2_13{
				inline static bool Block( hx::ObjectPtr< ::Main_obj > __this){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Main.hx",237,0x087e5c05)
					{
						HX_STACK_LINE(237)
						Float _g56 = __this->ball->get_y();		HX_STACK_VAR(_g56,"_g56");
						HX_STACK_LINE(237)
						return (_g56 <= (int)430);
					}
					return null();
				}
			};
			struct _Function_2_14{
				inline static bool Block( hx::ObjectPtr< ::Main_obj > __this){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Main.hx",237,0x087e5c05)
					{
						HX_STACK_LINE(237)
						Float _g57 = __this->ball->get_x();		HX_STACK_VAR(_g57,"_g57");
						HX_STACK_LINE(237)
						Float _g58 = __this->obs1->get_x();		HX_STACK_VAR(_g58,"_g58");
						HX_STACK_LINE(237)
						return (_g57 == _g58);
					}
					return null();
				}
			};
			HX_STACK_LINE(237)
			if (((  (((  (((  (((this->ballMovement->x > (int)0))) ? bool(_Function_2_12::Block(this)) : bool(false) ))) ? bool(_Function_2_13::Block(this)) : bool(false) ))) ? bool(_Function_2_14::Block(this)) : bool(false) ))){
				HX_STACK_LINE(238)
				this->bounceBall();
			}
			struct _Function_2_15{
				inline static bool Block( hx::ObjectPtr< ::Main_obj > __this){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Main.hx",243,0x087e5c05)
					{
						HX_STACK_LINE(243)
						Float _g59 = __this->block1->get_x();		HX_STACK_VAR(_g59,"_g59");
						HX_STACK_LINE(243)
						return (_g59 <= (int)455);
					}
					return null();
				}
			};
			HX_STACK_LINE(243)
			if (((  (((this->direction == (int)1))) ? bool(_Function_2_15::Block(this)) : bool(false) ))){
				HX_STACK_LINE(246)
				::Block _g = this->block1;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(246)
				Float _g60 = _g->get_x();		HX_STACK_VAR(_g60,"_g60");
				HX_STACK_LINE(246)
				Float _g61 = (_g60 + (this->blockSpeed * this->direction));		HX_STACK_VAR(_g61,"_g61");
				HX_STACK_LINE(246)
				_g->set_x(_g61);
			}
			HX_STACK_LINE(248)
			Float _g62 = this->block1->get_x();		HX_STACK_VAR(_g62,"_g62");
			struct _Function_2_16{
				inline static bool Block( hx::ObjectPtr< ::Main_obj > __this){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Main.hx",248,0x087e5c05)
					{
						HX_STACK_LINE(248)
						Float _g63 = __this->block1->get_x();		HX_STACK_VAR(_g63,"_g63");
						HX_STACK_LINE(248)
						return (_g63 >= (int)455);
					}
					return null();
				}
			};
			HX_STACK_LINE(248)
			if (((  ((!(((_g62 >= (int)448))))) ? bool(_Function_2_16::Block(this)) : bool(true) ))){
				HX_STACK_LINE(251)
				this->direction = (int)-1;
			}
			struct _Function_2_17{
				inline static bool Block( hx::ObjectPtr< ::Main_obj > __this){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Main.hx",254,0x087e5c05)
					{
						HX_STACK_LINE(254)
						Float _g64 = __this->block1->get_x();		HX_STACK_VAR(_g64,"_g64");
						HX_STACK_LINE(254)
						return (_g64 >= (int)5);
					}
					return null();
				}
			};
			HX_STACK_LINE(254)
			if (((  (((this->direction == (int)-1))) ? bool(_Function_2_17::Block(this)) : bool(false) ))){
				HX_STACK_LINE(258)
				::Block _g = this->block1;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(258)
				Float _g65 = _g->get_x();		HX_STACK_VAR(_g65,"_g65");
				HX_STACK_LINE(258)
				Float _g66 = (_g65 + (this->blockSpeed * this->direction));		HX_STACK_VAR(_g66,"_g66");
				HX_STACK_LINE(258)
				_g->set_x(_g66);
			}
			struct _Function_2_18{
				inline static bool Block( hx::ObjectPtr< ::Main_obj > __this){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Main.hx",262,0x087e5c05)
					{
						HX_STACK_LINE(262)
						Float _g67 = __this->block1->get_x();		HX_STACK_VAR(_g67,"_g67");
						HX_STACK_LINE(262)
						return (_g67 <= (int)5);
					}
					return null();
				}
			};
			HX_STACK_LINE(262)
			if (((  (((this->direction == (int)-1))) ? bool(_Function_2_18::Block(this)) : bool(false) ))){
				HX_STACK_LINE(265)
				this->direction = (int)1;
			}
			struct _Function_2_19{
				inline static bool Block( hx::ObjectPtr< ::Main_obj > __this){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Main.hx",269,0x087e5c05)
					{
						HX_STACK_LINE(269)
						Float _g68 = __this->ball->get_y();		HX_STACK_VAR(_g68,"_g68");
						HX_STACK_LINE(269)
						return (_g68 < (int)30);
					}
					return null();
				}
			};
			struct _Function_2_20{
				inline static bool Block( hx::ObjectPtr< ::Main_obj > __this){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Main.hx",269,0x087e5c05)
					{
						HX_STACK_LINE(269)
						Float _g69 = __this->ball->get_x();		HX_STACK_VAR(_g69,"_g69");
						HX_STACK_LINE(269)
						Float _g70 = __this->platform1->get_x();		HX_STACK_VAR(_g70,"_g70");
						HX_STACK_LINE(269)
						return (_g69 >= _g70);
					}
					return null();
				}
			};
			struct _Function_2_21{
				inline static bool Block( hx::ObjectPtr< ::Main_obj > __this){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Main.hx",269,0x087e5c05)
					{
						HX_STACK_LINE(269)
						Float _g71 = __this->ball->get_x();		HX_STACK_VAR(_g71,"_g71");
						HX_STACK_LINE(269)
						Float _g72 = __this->platform1->get_x();		HX_STACK_VAR(_g72,"_g72");
						HX_STACK_LINE(269)
						Float _g73 = (_g72 + (int)100);		HX_STACK_VAR(_g73,"_g73");
						HX_STACK_LINE(269)
						return (_g71 <= _g73);
					}
					return null();
				}
			};
			HX_STACK_LINE(269)
			if (((  (((  (((  (((this->ballMovement->y < (int)0))) ? bool(_Function_2_19::Block(this)) : bool(false) ))) ? bool(_Function_2_20::Block(this)) : bool(false) ))) ? bool(_Function_2_21::Block(this)) : bool(false) ))){
				HX_STACK_LINE(270)
				this->bounceBall();
				HX_STACK_LINE(271)
				this->ball->set_y((int)30);
			}
			struct _Function_2_22{
				inline static bool Block( hx::ObjectPtr< ::Main_obj > __this){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Main.hx",273,0x087e5c05)
					{
						HX_STACK_LINE(273)
						Float _g74 = __this->ball->get_y();		HX_STACK_VAR(_g74,"_g74");
						HX_STACK_LINE(273)
						return (_g74 > (int)470);
					}
					return null();
				}
			};
			struct _Function_2_23{
				inline static bool Block( hx::ObjectPtr< ::Main_obj > __this){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Main.hx",273,0x087e5c05)
					{
						HX_STACK_LINE(273)
						Float _g75 = __this->ball->get_x();		HX_STACK_VAR(_g75,"_g75");
						HX_STACK_LINE(273)
						Float _g76 = __this->platform2->get_x();		HX_STACK_VAR(_g76,"_g76");
						HX_STACK_LINE(273)
						return (_g75 >= _g76);
					}
					return null();
				}
			};
			struct _Function_2_24{
				inline static bool Block( hx::ObjectPtr< ::Main_obj > __this){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Main.hx",273,0x087e5c05)
					{
						HX_STACK_LINE(273)
						Float _g77 = __this->ball->get_x();		HX_STACK_VAR(_g77,"_g77");
						HX_STACK_LINE(273)
						Float _g78 = __this->platform2->get_x();		HX_STACK_VAR(_g78,"_g78");
						HX_STACK_LINE(273)
						Float _g79 = (_g78 + (int)100);		HX_STACK_VAR(_g79,"_g79");
						HX_STACK_LINE(273)
						return (_g77 <= _g79);
					}
					return null();
				}
			};
			HX_STACK_LINE(273)
			if (((  (((  (((  (((this->ballMovement->y > (int)0))) ? bool(_Function_2_22::Block(this)) : bool(false) ))) ? bool(_Function_2_23::Block(this)) : bool(false) ))) ? bool(_Function_2_24::Block(this)) : bool(false) ))){
				HX_STACK_LINE(274)
				this->bounceBall();
				HX_STACK_LINE(275)
				this->ball->set_y((int)470);
			}
			HX_STACK_LINE(285)
			Float _g80 = this->ball->get_x();		HX_STACK_VAR(_g80,"_g80");
			struct _Function_2_25{
				inline static bool Block( hx::ObjectPtr< ::Main_obj > __this){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Main.hx",285,0x087e5c05)
					{
						HX_STACK_LINE(285)
						Float _g81 = __this->ball->get_x();		HX_STACK_VAR(_g81,"_g81");
						HX_STACK_LINE(285)
						return (_g81 > (int)495);
					}
					return null();
				}
			};
			HX_STACK_LINE(285)
			if (((  ((!(((_g80 < (int)5))))) ? bool(_Function_2_25::Block(this)) : bool(true) ))){
				HX_STACK_LINE(285)
				hx::MultEq(this->ballMovement->x,(int)-1);
			}
			HX_STACK_LINE(287)
			Float _g82 = this->ball->get_y();		HX_STACK_VAR(_g82,"_g82");
			HX_STACK_LINE(287)
			if (((_g82 < (int)5))){
				HX_STACK_LINE(287)
				this->winGame(::Player_obj::AI);
			}
			HX_STACK_LINE(288)
			Float _g83 = this->ball->get_y();		HX_STACK_VAR(_g83,"_g83");
			HX_STACK_LINE(288)
			if (((_g83 > (int)495))){
				HX_STACK_LINE(288)
				this->winGame(::Player_obj::Human);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Main_obj,everyFrame,(void))

Void Main_obj::bounceBall( ){
{
		HX_STACK_FRAME("Main","bounceBall",0x95b4759c,"Main.bounceBall","Main.hx",292,0x087e5c05)
		HX_STACK_THIS(this)
		HX_STACK_LINE(293)
		int direction;		HX_STACK_VAR(direction,"direction");
		HX_STACK_LINE(293)
		if (((this->ballMovement->y > (int)0))){
			HX_STACK_LINE(293)
			direction = (int)-1;
		}
		else{
			HX_STACK_LINE(293)
			direction = (int)1;
		}
		HX_STACK_LINE(294)
		Float _g = ::Math_obj::random();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(294)
		Float _g1 = (_g * ::Math_obj::PI);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(294)
		Float _g2 = (Float(_g1) / Float((int)2));		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(294)
		Float randomAngle = (_g2 - (int)45);		HX_STACK_VAR(randomAngle,"randomAngle");
		HX_STACK_LINE(295)
		Float _g3 = ::Math_obj::cos(randomAngle);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(295)
		Float _g4 = (direction * _g3);		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(295)
		Float _g5 = (_g4 * this->ballSpeed);		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(295)
		this->ballMovement->y = _g5;
		HX_STACK_LINE(296)
		Float _g6 = ::Math_obj::sin(randomAngle);		HX_STACK_VAR(_g6,"_g6");
		HX_STACK_LINE(296)
		Float _g7 = (_g6 * this->ballSpeed);		HX_STACK_VAR(_g7,"_g7");
		HX_STACK_LINE(296)
		this->ballMovement->x = _g7;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Main_obj,bounceBall,(void))

Void Main_obj::winGame( ::Player player){
{
		HX_STACK_FRAME("Main","winGame",0x39706d19,"Main.winGame","Main.hx",299,0x087e5c05)
		HX_STACK_THIS(this)
		HX_STACK_ARG(player,"player")
		HX_STACK_LINE(300)
		if (((player == ::Player_obj::Human))){
			HX_STACK_LINE(301)
			(this->scorePlayer)++;
		}
		else{
			HX_STACK_LINE(303)
			(this->scoreAI)++;
		}
		HX_STACK_LINE(305)
		this->setGameState(::GameState_obj::Paused);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Main_obj,winGame,(void))

Void Main_obj::updateScore( ){
{
		HX_STACK_FRAME("Main","updateScore",0x5d7894f4,"Main.updateScore","Main.hx",309,0x087e5c05)
		HX_STACK_THIS(this)
		HX_STACK_LINE(309)
		this->scoreField->set_text(((this->scorePlayer + HX_CSTRING(":")) + this->scoreAI));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Main_obj,updateScore,(void))

Void Main_obj::added( Dynamic e){
{
		HX_STACK_FRAME("Main","added",0x98771aeb,"Main.added","Main.hx",321,0x087e5c05)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(322)
		this->removeEventListener(::openfl::_v2::events::Event_obj::ADDED_TO_STAGE,this->added_dyn(),null());
		HX_STACK_LINE(323)
		this->get_stage()->addEventListener(::openfl::_v2::events::Event_obj::RESIZE,this->resize_dyn(),null(),null(),null());
		HX_STACK_LINE(327)
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
		HX_STACK_FRAME("Main","main",0xed0e206e,"Main.main","Main.hx",332,0x087e5c05)
		HX_STACK_LINE(334)
		::openfl::_v2::Lib_obj::get_current()->get_stage()->set_align(::openfl::display::StageAlign_obj::TOP_LEFT);
		HX_STACK_LINE(335)
		::openfl::_v2::Lib_obj::get_current()->get_stage()->set_scaleMode(::openfl::display::StageScaleMode_obj::NO_SCALE);
		HX_STACK_LINE(336)
		::Main _g = ::Main_obj::__new();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(336)
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
	HX_MARK_MEMBER_NAME(scorePlayer,"scorePlayer");
	HX_MARK_MEMBER_NAME(scoreAI,"scoreAI");
	HX_MARK_MEMBER_NAME(scoreField,"scoreField");
	HX_MARK_MEMBER_NAME(messageField,"messageField");
	HX_MARK_MEMBER_NAME(currentGameState,"currentGameState");
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
	HX_VISIT_MEMBER_NAME(scorePlayer,"scorePlayer");
	HX_VISIT_MEMBER_NAME(scoreAI,"scoreAI");
	HX_VISIT_MEMBER_NAME(scoreField,"scoreField");
	HX_VISIT_MEMBER_NAME(messageField,"messageField");
	HX_VISIT_MEMBER_NAME(currentGameState,"currentGameState");
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
	case 4:
		if (HX_FIELD_EQ(inName,"main") ) { return main_dyn(); }
		if (HX_FIELD_EQ(inName,"obs1") ) { return obs1; }
		if (HX_FIELD_EQ(inName,"obs2") ) { return obs2; }
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
	case 4:
		if (HX_FIELD_EQ(inName,"obs1") ) { obs1=inValue.Cast< ::Obstacle >(); return inValue; }
		if (HX_FIELD_EQ(inName,"obs2") ) { obs2=inValue.Cast< ::Obstacle >(); return inValue; }
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
	outFields->push(HX_CSTRING("scorePlayer"));
	outFields->push(HX_CSTRING("scoreAI"));
	outFields->push(HX_CSTRING("scoreField"));
	outFields->push(HX_CSTRING("messageField"));
	outFields->push(HX_CSTRING("currentGameState"));
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
	{hx::fsInt,(int)offsetof(Main_obj,scorePlayer),HX_CSTRING("scorePlayer")},
	{hx::fsInt,(int)offsetof(Main_obj,scoreAI),HX_CSTRING("scoreAI")},
	{hx::fsObject /*::openfl::_v2::text::TextField*/ ,(int)offsetof(Main_obj,scoreField),HX_CSTRING("scoreField")},
	{hx::fsObject /*::openfl::_v2::text::TextField*/ ,(int)offsetof(Main_obj,messageField),HX_CSTRING("messageField")},
	{hx::fsObject /*::GameState*/ ,(int)offsetof(Main_obj,currentGameState),HX_CSTRING("currentGameState")},
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
	HX_CSTRING("scorePlayer"),
	HX_CSTRING("scoreAI"),
	HX_CSTRING("scoreField"),
	HX_CSTRING("messageField"),
	HX_CSTRING("currentGameState"),
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

