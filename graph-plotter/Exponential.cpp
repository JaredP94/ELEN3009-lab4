#include "Exponential.h"

Exponential::Exponential(float a, float b):
	Function(),
	_a(a),
	_b(b)
	{}

float Exponential::evaluate(float x) const
{
	return _a * exp(x * _b);
}