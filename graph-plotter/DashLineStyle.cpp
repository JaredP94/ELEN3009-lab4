#include "DashLineStyle.h"

DashLineStyle::DashLineStyle(Colour colour, shared_ptr<Display> display_ptr):
	LineStyle(colour, display_ptr)
	{}

void DashLineStyle::plotLine(PointPair end_coords)
{
	Point start = end_coords.first();
	Point second = end_coords.second();
	second.x = second.x - (second.x - start.x)/2;
	second.y = second.y - (second.y - start.y)/2;
	PointPair new_pair(start, second);
	end_coords = new_pair;
	auto display_points = getDisplay();
	display_points->drawLine(end_coords, getColour());
}