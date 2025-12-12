#include <iostream>
#include <gm/Vector2D.h>
#include <gm/Vector3D.h>
#include <gm/Matrix3D.h>

using namespace gm;

int main()
{
	Vector2D vec(1.0f, 2.0f);
	Vector3D a(1.0f, 2.0f, 3.0f);
	Vector3D b(4.0f, 5.0f, 6.0f);
	Vector3D c = a + b;
	Matrix3D mat3(
		1.0f, 2.0f, 3.0f,
		0.0f, 1.0f, 4.0f,
		5.0f, 6.0f, 0.0f
	);
	//Matrix4x4 mat(1.0f);

		std::cout << "Hello, Sandbox!" << std::endl;
		std::cout << mat3.ToString() << std::endl;
		std::cout << a.ToString() << " + " << b.ToString() << " = " << c.ToString() << std::endl;
		//std::cout << mat.m << std::endl;

	return 0;
}