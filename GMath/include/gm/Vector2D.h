#pragma once
#include <cmath>
#include <iostream>

namespace gm
{
	struct Vector2D
	{
		float x = 0.0f;
		float y = 0.0f;

		constexpr Vector2D() = default;
		constexpr Vector2D(float x, float y) : x(x), y(y) {}
		explicit constexpr Vector2D(float value) : x(value), y(value) {}
	};
}