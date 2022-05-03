#pragma once
#include "Progression.h"

class GeometricProgression : public IProgression
{
	double a, r;
public:
	GeometricProgression(double a = 0, double r = 0) : a(a), r(r) {};

	double getA() const { return a; }
	void setA(double a) { this->a = a; }
	double getR() const { return r; }
	void setR(double r) { this->r = r; }

	virtual double calcElement(int j) const override;
	virtual ostream& print(ostream& out) const override;
};

