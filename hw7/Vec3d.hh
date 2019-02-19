#pragma once
#include <iostream>

class Vec3d {
public:
	double x,y,z;
	Vec3d(double x, double y, double z) : x(x), y(y), z(z) {}
	friend std::ostream& operator <<(std::ostream& s, const Vec3d& v) {
		return s << v.x << ", " << v.y << ", " << v.z;
	}
	double magSq() const;
	double mag() const;
	friend Vec3d operator +(const Vec3d& a, const Vec3d& b) {
		return Vec3d(a.x + b.x, a.y+b.y, a.z+b.z);
	}
	friend operator -(const Vec3d& a, const Vec3d& b) {
		return Vec3d(a.x - b.x, a.y - b.y, a.z - b.z);
	}
};
