#include <iostream>

namespace gm
{
	struct Matrix4x4
	{
		float m[4][4]{ {0} };

		constexpr Matrix4x4()
		{
			for (int i = 0; i < 4; ++i)
			{
				for (int j = 0; j < 4; ++j)
				{
					m[i][j] = (i == j) ? 1.0f : 0.0f;
				}
			}
		}

		constexpr Matrix4x4(float diagonal)
		{
			for (int i = 0; i < 4; ++i)
			{
				for (int j = 0; j < 4; ++j)
				{
					m[i][j] = (i == j) ? diagonal : 0.0f;
				}
			}
		}

		float* operator[](int index)
		{
			return m[index];
		}

		const float* operator[](int index) const
		{
			return m[index];
		}
	};
}