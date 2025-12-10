#include <iostream>

namespace gm
{
	struct Vector3D
	{
		float x{ 0.0f };
		float y{ 0.0f };
		float z{ 0.0f };

		constexpr Vector3D(float a, float b, float c) : x(a), y(b), z(c) { }

		float& operator [](int i)
		{
			return ((&x)[i]);
		}

		const float& operator [](int i) const
		{
			return ((&x)[i]);
		}

		explicit constexpr Vector3D(float value) : x(value), y(value), z(value) {}

		Vector3D& operator *=(float scalar)
		{
			x *= scalar;
			y *= scalar;
			z *= scalar;
			return (*this);
		}

		Vector3D& operator /=(float scalar)
		{
			x /= scalar;
			y /= scalar;
			z /= scalar;
			return (*this);
		}
	};

	inline Vector3D operator *(const Vector3D& vec, float scalar)
	{
		return Vector3D(vec.x * scalar, vec.y * scalar, vec.z * scalar);
	}

	inline Vector3D operator /(const Vector3D& vec, float scalar)
	{
		return Vector3D(vec.x / scalar, vec.y / scalar, vec.z / scalar);
	}

	inline Vector3D operator +(const Vector3D& a, const Vector3D& b)
	{
		return Vector3D(a.x + b.x, a.y + b.y, a.z + b.z);
	}

	inline Vector3D operator -(const Vector3D& a, const Vector3D& b)
	{
		return Vector3D(a.x - b.x, a.y - b.y, a.z - b.z);
	}

	inline float Magnitude(const Vector3D& vec)
	{
		return std::sqrt(vec.x * vec.x + vec.y * vec.y + vec.z * vec.z);
	}

	inline Vector3D Normalize(const Vector3D& vec)
	{
		return vec / Magnitude(vec);
	}
}