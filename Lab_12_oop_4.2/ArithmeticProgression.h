#pragma once
#include "Progression.h"

class ArithmeticProgression : public IProgression
{
	double a;
	double d;
public:
	ArithmeticProgression(double a = 0, double d = 0) : a(a), d(d) {};
	double getA() const { return a; }
	void setA(double a) { this->a = a; }
	double getD() const { return d; }
	void setD(double d) { this->d = d; }

	virtual double calcElement(int j) const override;
	virtual ostream& print(ostream& out) const override;
};

