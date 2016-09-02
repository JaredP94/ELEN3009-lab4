#include "Absolute.h"

Absolute::Absolute(shared_ptr<Function> function_ptr):
	Function(),
	_function_ptr(function_ptr)
	{}
	
float Absolute::evaluate(float x) const
{
	return abs(_function_ptr->evaluate(x));
}