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

#include <iostream>
#include <vector>
#include <string>
#include "../src/include/algorithms.h"
#include "../src/utils/point.h"

int main() {
    int n;
    std::cin >> n;

    std::vector<std::vector<int>> kruskal_matrix(n, std::vector<int>(n));
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            std::cin >> kruskal_matrix[i][j];
        }
    }

    std::vector<std::vector<int>> capacity_matrix(n, std::vector<int>(n));
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            std::cin >> capacity_matrix[i][j];
        }
    }

    std::vector<Point> points;
    std::string input;
    for (int i = 0; i < n; ++i) {
        std::cin >> input;
        points.push_back(Point::parse_point(input));
    }

    std::cin >> input;
    Point target = Point::parse_point(input);

    kruskal(n, kruskal_matrix);
    traveling_salesman(n, kruskal_matrix);

    int graph[100][100];
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            graph[i][j] = capacity_matrix[i][j];
        }
    }

    int max_flow = fordFulkerson(graph, 0, n - 1, n);
    std::cout << "3.\n" << max_flow << std::endl;

    Point closest = target.closest_point(points, target);
    std::cout << "4.\n(" << closest.x << "," << closest.y << ")\n";

    return 0;
}
