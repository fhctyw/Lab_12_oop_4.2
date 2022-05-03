#pragma once
#include <iostream>
using namespace std;

class IProgression
{
public:
	virtual double calcElement(int j) const = 0;
	virtual ostream& print(ostream& out) const = 0;
};

