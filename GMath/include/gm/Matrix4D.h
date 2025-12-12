namespace gm
{
	struct Matrix4D
	{
		private:
			float n[4][4];

	public:
		Matrix4D() = default;

		Matrix4D(float n00, float n01, float n02, n03,
			float n10, float n11, float n12, n13,
			float n20, float n21, float n22, n23,
			float n30, float n31, float n32, n33)
		{
			n[0][0] = n00; n[0][1] = n01; n[0][2] = n02; n[0][3] = n03;
			n[1][0] = n10; n[1][1] = n11; n[1][2] = n12; n[1][3] = n13;
			n[2][0] = n20; n[2][1] = n21; n[2][2] = n22; n[2][3] = n23;
			n[3][0] = n30; n[3][1] = n31; n[3][2] = n32; n[3][3] = n33;
		}

		Matrix4D(const Vector3D& a, const Vector3D& b, const Vector3D& c, const Vector3D& d)
		{
			n[0][0] = a.x; n[0][1] = a.y; n[0][2] = a.z;
			n[1][0] = b.x; n[1][1] = b.y; n[1][2] = b.z;
			n[2][0] = c.x; n[2][1] = c.y; n[2][2] = c.z;
			n[3][0] = d.x; n[3][1] = d.y; n[3][2] = d.z;
		}
	};

	Matrix4D Inverse(const Matrix4D& M)
	{
		const Vector3D& a = reinterpret_cast<const Vector3D&>(M[0]);
		const Vector3D& b = reinterpret_cast<const Vector3D&>(M[1]);
		const Vector3D& c = reinterpret_cast<const Vector3D&>(M[2]);
		const Vector3D& d = reinterpret_cast<const Vector3D&>(M[3]);

	}
}