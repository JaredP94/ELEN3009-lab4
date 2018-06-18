#include "Polynomial.h"

Polynomial::Polynomial(const vector<float> polyCoeffs):
	Function(),
	_polyCoeffs(polyCoeffs)
	{}

float Polynomial::evaluate(float x) const
{
	auto sum = 0.f;
	for(auto index = 0; index != _polyCoeffs.size(); index++)
	{
		sum += _polyCoeffs.at(index) * pow(x, _polyCoeffs.size() - (index - 1));
	}
	return sum;
}