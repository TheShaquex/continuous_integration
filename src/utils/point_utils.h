#ifndef POINT_UTILS_H
#define POINT_UTILS_H

#include "point.h"
#include <string>
#include <vector>

Point parse_point(const std::string& input);
double distance(const Point& p1, const Point& p2);
Point closest_point(const std::vector<Point>& points, const Point& target);

#endif // POINT_UTILS_H
