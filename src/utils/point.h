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

#pragma once

#include <string>
#include <vector>

/**
 * @brief Represents a 2D point in Cartesian coordinates.
 */
class Point {
public:
    int x; ///< The x-coordinate of the point.
    int y; ///< The y-coordinate of the point.

    /**
     * @brief Constructs a Point object with given x and y coordinates.
     * 
     * @param x The x-coordinate.
     * @param y The y-coordinate.
     */
    Point(int x, int y) : x(x), y(y) {}

    /**
     * @brief Calculates the Euclidean distance between two points.
     * 
     * @param p1 The first point.
     * @param p2 The second point.
     * @return The Euclidean distance between p1 and p2.
     */
    static double distance(const Point& p1, const Point& p2);

    /**
     * @brief Parses a point from a string in the format "(x, y)".
     * 
     * @param input A string representing the point.
     * @return A Point object parsed from the input string.
     */
    static Point parse_point(const std::string& input);

    /**
     * @brief Finds the closest point to a target from a list of points.
     * 
     * @param points A vector of points to search.
     * @param target The target point.
     * @return The closest point to the target.
     */
    Point closest_point(const std::vector<Point>& points, const Point& target);
};
