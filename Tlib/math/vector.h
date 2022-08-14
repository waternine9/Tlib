#ifndef TLIB_MATH_VECTOR
#define TLIB_MATH_VECTOR

#include "floattypes.h"

union T_vec2
{
	struct
	{
		f32 x;
		f32 y;
	};
	struct
	{
		f32 u;
		f32 v;
	};
	struct
	{
		f32 s;
		f32 t;
	};
	struct
	{
		f32 a;
		f32 b;
	};
	struct
	{
		f32 w;
		f32 h;
	};
	struct
	{
		f32 width;
		f32 height;
	};
} typedef T_vec2;

union T_vec3
{
	struct
	{
		f32 x;
		f32 y;
		f32 z;
	};
	struct
	{
		f32 r;
		f32 g;
		f32 b;
	};
	struct
	{
		f32 width;
		f32 height;
		f32 depth;
	};
} typedef T_vec3;

union T_vec4
{
	struct
	{
		f32 x;
		f32 y;
		f32 z;
		f32 w;
	};
	struct
	{
		f32 r;
		f32 g;
		f32 b;
		f32 a;
	};
} typedef T_vec4;

//vec2
static inline T_vec2 T_v2_add(T_vec2 a, T_vec2 b)
{
	T_vec2 c;
	c.x = a.x + b.x;
	c.y = a.y + b.y;
	return c;
}

static inline T_vec2 T_v2_sub(T_vec2 a, T_vec2 b)
{
	T_vec2 c;
	c.x = a.x - b.x;
	c.y = a.y - b.y;
	return c;
}

#endif /* TLIB_MATH_VECTOR */
