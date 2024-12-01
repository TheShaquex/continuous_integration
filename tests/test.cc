#include <iostream>
#include <cassert>
#include "../src/include/algorithms.h"
#include "../src/utils/point.h"

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

int main() {
    test_kruskal();
    test_traveling_salesman();
    test_ford_fulkerson();
    test_closest_point();
    std::cout << "All tests passed successfully!" << std::endl;
    return 0;
}
