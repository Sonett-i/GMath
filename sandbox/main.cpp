#include <iostream>
#include <gm/Vector2D.h>
#include <gm/Vector3D.h>
#include <gm/Matrix4x4.h>

using namespace gm;

int main()
{
	Vector2D vec(1.0f, 2.0f);
	Vector3D a(1.0f, 2.0f, 3.0f);
	Vector3D b(4.0f, 5.0f, 6.0f);
	Vector3D c = a + b;
	Matrix4x4 mat(1.0f);

		std::cout << "Hello, Sandbox!" << std::endl;
		std::cout << "Vec2: (" << vec.x << ", " << vec.y << ")" << std::endl;
		std::cout << "Vec3: (" << a.x << ", " << a.y << ", " << a.z << ")" << std::endl;
		std::cout << "Vec3 mag: " << Magnitude(c) << std::endl;
		std::cout << mat.m << std::endl;

	return 0;
}