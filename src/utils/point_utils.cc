#include "point_utils.h"
#include <cmath>
#include <limits>
#include <sstream>

Point parse_point(const std::string& input) {
    int x;
    int y;
    char ignore;
    std::stringstream ss(input);
    ss >> ignore >> x >> ignore >> y >> ignore; // Leer formato (x,y)
    return Point(x, y);
}

double distance(const Point& p1, const Point& p2) {
    return std::sqrt(std::pow(p2.x - p1.x, 2) + std::pow(p2.y - p1.y, 2));
}

Point closest_point(const std::vector<Point>& points, const Point& target) {
    double min_distance = std::numeric_limits<double>::max();
    Point closest = points[0];

    for (const auto& p : points) {
        double current_distance = distance(p, target);
        if (current_distance < min_distance) {
            min_distance = current_distance;
            closest = p;
        }
    }

    return closest;
}
