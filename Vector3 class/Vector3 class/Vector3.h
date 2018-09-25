#ifndef VECTOR_3
#define VECTOR_3

#include <iostream>

template<class TYPE> class Vec3
{
public:
	TYPE x, y, z;

public:
	// Constructors
	Vec3() : x(0), y(0), z(0) {};

	Vec3(const TYPE x, const TYPE y, const TYPE z) : x(x), y(y), z(z) {};

	Vec3(Vec3 * vector) : x(vector->x), y(vector->y), z(vector->z) {};


	// Operators Methods
	Vec3 operator+(const Vec3 &vector) const {
		return Vec3(x + vector.x, y + vector.y, z + vector.z);
	}

	Vec3 operator-(const Vec3 &vector) const {
		return Vec3(x - vector.x, y - vector.y, z - vector.z);
	}

	Vec3 operator+=(const Vec3 &vector) {
		return Vec3(x += vector.x, y += vector.y, z += vector.z);
	}

	Vec3 operator-=(const Vec3 &vector) {
		return Vec3(x -= vector.x, y -= vector.y, z -= vector.z);
	}

	Vec3 operator=(const Vec3 &vector) {
		return Vec3(x = vector.x, y = vector.y, z = vector.z);
	}

	bool operator==(const Vec3 &vector) const {
		return (x == vector.x && y == vector.y && z == vector.z);
	}

	// Other Methods
	void normalize() {
		float module = sqrt((x * x) + (y * y) + (z * z));
		if (module != 0)
		{
			x /= module;
			y /= module;
			z /= module;
		}
	}

	void zero() {
		x = y = z = 0;
	}

	bool is_zero() const {
		return (x == 0 && y == 0 && z == 0);
	}

	float distance_to(const Vec3 &vector) {
		return sqrt((x - vector.x) * (x - vector.x)) + ((y - vector.y) * (y - vector.y)) + ((z - vector.z) * (z - vector.z)));
	}

	float distance_squared_to(const Vec3 &vector) {
		return ((x - vector.x) * (x - vector.x)) + ((y - vector.y) * (y - vector.y)) + ((z - vector.z) * (z - vector.z)));
	}

};

#endif // VEC_3
