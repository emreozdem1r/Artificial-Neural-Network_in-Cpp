#pragma once
ref class Dott
{
public:
	double x;
	double y;
	double z;
	array<int>^ d = gcnew array<int>(6);

	Dott() {
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
	void setD(int className, int classNumber) {
		for (int i = 0; i < classNumber; i++) {
			int index = i + 1;
			if (index == className)
				this->d[i] = 1;
			else
				this->d[i] = -1;
		}
	}
	array<int>^ getD() {
		return this->d;
	}


};

