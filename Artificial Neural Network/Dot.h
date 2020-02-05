#pragma once
ref class Dot
{
public:
	double x;
	double y;
	double z;
	int d;

	Dot() {
		this->z = 1;
	}
	void setX(double x) {
		this->x = x;
	}

	double getX() {
		return this->x;
	}
	void setY(double y) {
		this->y = y;
	}

	double getY() {
		return this->y;
	}

	void setZ(double z) {
		this->z = z;
	}

	double getZ() {
		return this->z;
	}
	void setdD(double d) {
		this->d = d;
	}

	int getD() {
		return this->d;
	}

};

