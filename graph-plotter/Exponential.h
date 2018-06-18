#ifndef EXPONENTIAL_H
#define EXPONENTIAL_H

#include "Function.h"
#include <cmath>

class Exponential : public Function
{
public:
	Exponential(float a, float b);
	float evaluate(float x) const;
	
private:
	float _a;
	float _b;
};

#endif