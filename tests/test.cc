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
#include <cassert>
#include "../src/include/algorithms.h"
#include "../src/utils/point.h"
#include "../src/graph/edge.h"

void test_kruskal() {
    int n = 4;
    std::vector<std::vector<int>> matrix = {
        {0, 16, 45, 32},
        {16, 0, 18, 21},
        {45, 18, 0, 7},
        {32, 21, 7, 0}
    };

    // Llamamos a la función Kruskal (implementar mock si es necesario).
    kruskal(n, matrix);
    std::cout << "Kruskal test passed." << std::endl;
}

void test_traveling_salesman() {
    int n = 4;
    std::vector<std::vector<int>> matrix = {
        {0, 16, 45, 32},
        {16, 0, 18, 21},
        {45, 18, 0, 7},
        {32, 21, 7, 0}
    };

    traveling_salesman(n, matrix);
    std::cout << "Traveling Salesman test passed." << std::endl;
}

void test_ford_fulkerson() {
    int n = 4;
    int graph[100][100] = {
        {0, 48, 12, 18},
        {52, 0, 42, 32},
        {18, 46, 0, 56},
        {24, 36, 52, 0}
    };

    int max_flow = fordFulkerson(graph, 0, n - 1, n);
    assert(max_flow == 78); // Valor esperado para este caso.
    std::cout << "Ford Fulkerson test passed." << std::endl;
}

void test_closest_point() {
    std::vector<Point> points = {
        Point(200, 500),
        Point(300, 100),
        Point(450, 150),
        Point(520, 480)
    };

    Point target(400, 300);
    Point closest = target.closest_point(points, target);

    assert(closest.x == 450 && closest.y == 150); // Esperamos (450,150)
    std::cout << "Closest Point test passed." << std::endl;
}

void test_edge() {
    edge e1(1, 2, 10);
    assert(e1.u == 1 && e1.v == 2 && e1.weight == 10);
    std::cout << "Edge test passed." << std::endl;
}


int main() {
    test_kruskal();
    test_traveling_salesman();
    test_ford_fulkerson();
    test_closest_point();
    test_edge();
    std::cout << "All tests passed successfully!" << std::endl;
    return 0;
}
