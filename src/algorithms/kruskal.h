#pragma once
#include <vector>
#include "../utils/union_find.h"

struct Edge {
    int u;
    int v;
    int weight;
    Edge(int u, int v, int weight);
};

void kruskal(int n, const std::vector<std::vector<int>>& graph);
