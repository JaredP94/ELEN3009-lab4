#ifndef ABSOLUTE_H
#define ABSOLUTE_H

#include "Function.h"
#include <cmath>
#include <memory>

using std::shared_ptr;

class Absolute : public Function
{
public:
	Absolute(shared_ptr<Function> function_ptr);
	virtual float evaluate(float x) const override;
	
private:
	shared_ptr<Function> _function_ptr;
};

#endif