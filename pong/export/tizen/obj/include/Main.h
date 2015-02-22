#ifndef INCLUDED_Main
#define INCLUDED_Main

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <openfl/_v2/display/Sprite.h>
HX_DECLARE_CLASS0(Ball)
HX_DECLARE_CLASS0(Block)
HX_DECLARE_CLASS0(GameState)
HX_DECLARE_CLASS0(Main)
HX_DECLARE_CLASS0(Platform)
HX_DECLARE_CLASS0(Player)
HX_DECLARE_CLASS3(openfl,_v2,display,DisplayObject)
HX_DECLARE_CLASS3(openfl,_v2,display,DisplayObjectContainer)
HX_DECLARE_CLASS3(openfl,_v2,display,IBitmapDrawable)
HX_DECLARE_CLASS3(openfl,_v2,display,InteractiveObject)
HX_DECLARE_CLASS3(openfl,_v2,display,Sprite)
HX_DECLARE_CLASS3(openfl,_v2,events,Event)
HX_DECLARE_CLASS3(openfl,_v2,events,EventDispatcher)
HX_DECLARE_CLASS3(openfl,_v2,events,IEventDispatcher)
HX_DECLARE_CLASS3(openfl,_v2,events,KeyboardEvent)
HX_DECLARE_CLASS3(openfl,_v2,geom,Point)
HX_DECLARE_CLASS3(openfl,_v2,text,TextField)


class HXCPP_CLASS_ATTRIBUTES  Main_obj : public ::openfl::_v2::display::Sprite_obj{
	public:
		typedef ::openfl::_v2::display::Sprite_obj super;
		typedef Main_obj OBJ_;
		Main_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Main_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Main_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Main"); }

		bool inited;
		::Platform platform1;
		::Platform platform2;
		::Block block1;
		::Ball ball;
		int scorePlayer;
		int scoreAI;
		::openfl::_v2::text::TextField scoreField;
		::openfl::_v2::text::TextField messageField;
		::GameState currentGameState;
		bool arrowKeyUp;
		bool arrowKeyDown;
		int platformSpeed;
		::openfl::_v2::geom::Point ballMovement;
		int ballSpeed;
		virtual Void resize( Dynamic e);
		Dynamic resize_dyn();

		virtual Void init( );
		Dynamic init_dyn();

		virtual Void setGameState( ::GameState state);
		Dynamic setGameState_dyn();

		virtual Void keyDown( ::openfl::_v2::events::KeyboardEvent event);
		Dynamic keyDown_dyn();

		virtual Void keyUp( ::openfl::_v2::events::KeyboardEvent event);
		Dynamic keyUp_dyn();

		virtual Void everyFrame( ::openfl::_v2::events::Event event);
		Dynamic everyFrame_dyn();

		virtual Void bounceBall( );
		Dynamic bounceBall_dyn();

		virtual Void winGame( ::Player player);
		Dynamic winGame_dyn();

		virtual Void updateScore( );
		Dynamic updateScore_dyn();

		virtual Void added( Dynamic e);
		Dynamic added_dyn();

		static Void main( );
		static Dynamic main_dyn();

};


#endif /* INCLUDED_Main */ 
