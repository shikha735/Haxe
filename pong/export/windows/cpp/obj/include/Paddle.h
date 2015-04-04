#ifndef INCLUDED_Paddle
#define INCLUDED_Paddle

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(Paddle)


class Paddle_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef Paddle_obj OBJ_;

	public:
		Paddle_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		::String GetEnumName( ) const { return HX_CSTRING("Paddle"); }
		::String __ToString() const { return HX_CSTRING("Paddle.") + tag; }

		static ::Paddle paddle1;
		static inline ::Paddle paddle1_dyn() { return paddle1; }
		static ::Paddle paddle2;
		static inline ::Paddle paddle2_dyn() { return paddle2; }
};


#endif /* INCLUDED_Paddle */ 
