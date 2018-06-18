#ifndef DASHLINESTYLE_H
#define DASHLINESTYLE_H

#include "LineStyle.h"

class DashLineStyle : public LineStyle
{
public:
	DashLineStyle(Colour colour, shared_ptr<Display> display_ptr);
	virtual void plotLine(PointPair end_coords) override;
};

#endif