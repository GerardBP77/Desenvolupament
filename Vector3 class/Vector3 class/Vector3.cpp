#include <iostream>

using namespace std;

template<class TYPE> class Vec3
{

public:

	TYPE x, y, z;

	// Constructors

	Vec3() {
		x = 0;
		y = 0;
		z = 0;
	};

	Vec3(TYPE x_aux, TYPE y_aux, TYPE z_aux) {
		x = x_aux;
		y = y_aux;
		z = z_aux;
	};

	Vec3(Vec3 * vector) {
		x = vector->x;
		y = vector->y;
		z = vector->z;
	};


	// Operators

	const Vec3 operator+(const Vec3 &vector) {
		Vec3 vec_aux;
		vec_aux.x = x + vector.x;
		vec_aux.y = y + vector.y;
		vec_aux.z = z + vector.z;
		return vec_aux;
	}

	const Vec3 operator-(const Vec3 &vector) {
		Vec3 vec_aux;
		vec_aux.x = x - vector.x;
		vec_aux.y = y - vector.y;
		vec_aux.z = z - vector.z;
		return vec_aux;
	}

	void operator+=(const Vec3 &vector) {
		x += vector.x;
		y += vector.y;
		z += vector.z;
	}

	void operator-=(const Vec3 &vector) {
		x -= vector.x;
		y -= vector.y;
		z -= vector.z;
	}

	void operator=(const Vec3 &vector) {
		x = vector.x;
		y = vector.y;
		z = vector.z;
	}

	const bool operator==(const Vec3 &vector) {
		return (x == vector.x && y == vector.y && z == vector.z);
	}

	// Methods

	void normalize() {
		TYPE length = sqrt((x * x) + (y * y) + (z * z));
		if (length != 0)
		{
			x /= length;
			y /= length;
			z /= length;
		}
	}

	void zero() {
		x = 0;
		y = 0;
		z = 0;
	}

	const bool is_zero() {
		return (x == 0 && y == 0 && z == 0);
	}

	float distance_to(const Vec3 &vector) {
		float distance;
		distance = sqrt(pow(x - vector.x, 2) + pow(y - vector.y, 2) + pow(z - vector.z, 2));
		return distance;
	}
};