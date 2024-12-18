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

#include "kruskal.h"
#include <algorithm>
#include <iostream>

Edge::Edge(int u, int v, int weight) : u(u), v(v), weight(weight) {}

bool compare_edges(const Edge& a, const Edge& b) {
    return a.weight < b.weight;
}

void kruskal(int n, const std::vector<std::vector<int>>& graph) {
    UnionFind uf(n);
    std::vector<Edge> edges;

    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n; ++j) {
            if (graph[i][j] != 0) {
                edges.emplace_back(i, j, graph[i][j]);
            }
        }
    }

    std::sort(edges.begin(), edges.end(), compare_edges);

    std::vector<Edge> mst;
    int total_weight = 0;

    for (const auto& edge : edges) {
        if (uf.unionSets(edge.u, edge.v)) {
            mst.push_back(edge);
            total_weight += edge.weight;
        }
        if (mst.size() == n - 1) break;
    }

    std::cout << std::endl << "1.\n";
    for (const auto& edge : mst) {
        char colonia_u = 'A' + edge.u;
        char colonia_v = 'A' + edge.v;
        std::cout << "(" << colonia_u << ", " << colonia_v << ")\n";
    }
}
