#include "DotLineStyle.h"

DotLineStyle::DotLineStyle(Colour colour, shared_ptr<Display> display_ptr):
	LineStyle(colour, display_ptr)
	{}
	
void DotLineStyle::plotLine(PointPair end_coords)
{
	auto display_value = getDisplay();
	display_value->drawDot(end_coords.first(), getColour());
}