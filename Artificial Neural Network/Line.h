#pragma once
ref class Line
{
private:
	double a;
	double b;
	double c;
public:
	Line() {
		this->a = 2;
		this->b = 3;
		this->c = 4;
	}
	double getA() {
		return this->a;
	}
	void setA(double a) {
		this->a = a;
	}
	double getB() {
		return this->b;
	}
	void setB(double b) {
		this->b = b;
	}
	double getC() {
		return this->c;
	}
	void setC(double c) {
		this->c = c;
	}
};

