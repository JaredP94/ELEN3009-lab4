#include "Graph.h"
#include "Sinusoid.h"
#include "Sampler.h"
#include "Display.h"
#include "SolidLineStyle.h"
#include "Points.h"
#include "DotLineStyle.h"
#include "DashLineStyle.h"
#include "Function.h"
#include "Exponential.h"
#include "Polynomial.h"
#include "Absolute.h"
#include <memory>

using std::shared_ptr;
using std::make_shared;

const float PI = 3.14159265359;

int main()
{
	// setup Graph with Display
	const int WIDTH = 800;
	const int HEIGHT = 600;
	shared_ptr<Display> display = make_shared<Display>(WIDTH, HEIGHT);
	Graph graph(display);

	// create sine and cosine functions
	float amplitude = 1.0;
	float frequency = 1.0;
	float phase = 0;
	Sinusoid sine_function{amplitude, frequency, phase};
	Sinusoid cosine_function{amplitude, frequency, phase + PI/2};
	vector<float> coeffs = {1.0, 2.0, 1.0};
	Polynomial poly_function{coeffs};
	Exponential exp_function{1.0, 1.5};
	vector<float> abs_coeffs = {1.0, -3.0, -4.0};
	shared_ptr<Polynomial> poly_function_ptr = make_shared<Polynomial> (abs_coeffs);
	Absolute abs_poly_function (poly_function_ptr);

	// generate range and plot graphs
	Range range{0, 6*PI};
	SolidLineStyle solid_red{Colour::Red, display};
	graph.plot(generateDataPoints(sine_function, range), solid_red);
	
	DotLineStyle dot_red{Colour::Red, display};
	graph.plot(generateDataPoints(sine_function, range), dot_red);

	SolidLineStyle solid_blue{Colour::Blue, display};
	graph.plot(generateDataPoints(cosine_function, range), solid_blue);
	
	DashLineStyle dash_blue{Colour::Blue, display};
	graph.plot(generateDataPoints(cosine_function, range), dash_blue);

	Range range_new{-3, 1.5};
	graph.plot(generateDataPoints(poly_function, range_new), dot_red);
	graph.plot(generateDataPoints(exp_function, range_new), dot_red);
	
	Range range_abs{-4, 7};
	graph.plot(generateDataPoints(abs_poly_function, range_abs), dot_red);
	
	return 0;
}

