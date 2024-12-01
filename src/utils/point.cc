/*
 * MIT License
 * 
 * Copyright (c) 2024 Isaac Alejandro Enríquez Trejo, Kaled Noé Enríquez Trejo
 * 
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 * 
 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.
 * 
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 */

#include "point.h"
#include <cmath>
#include <sstream>
#include <iostream>
#include <vector>
#include <algorithm>
#include <tuple>
#include <limits.h>
#include <cstdint>
#include <queue>
#include <cstring>
#include <cmath>
#include <sstream>

// Función para calcular la distancia euclidiana entre dos puntos (método estático)
double Point::distance(const Point& p1, const Point& p2) {
    return std::sqrt(std::pow(p2.x - p1.x, 2) + std::pow(p2.y - p1.y, 2));
}

// Función global para encontrar el punto más cercano usando búsqueda lineal
Point Point::closest_point(const std::vector<Point>& points, const Point& target) {
    double minDistance = std::numeric_limits<double>::max();
    Point closest = points[0];

    for (const auto& point : points) {
        double currentDistance = Point::distance(point, target); // Llamada estática
        if (currentDistance < minDistance) {
            minDistance = currentDistance;
            closest = point;
        }
    }

    return closest;
}

// Función para parsear un punto del formato "(x,y)" a la estructura Point
Point Point::parse_point(const std::string& input) {
    int x;
    int y;
    char ignore;
    std::stringstream ss(input);
    ss >> ignore >> x >> ignore >> y >> ignore; // Leer formato (x,y)
    return Point(x, y);
}
