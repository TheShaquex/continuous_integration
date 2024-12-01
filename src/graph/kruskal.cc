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
#include "union_find.h"
#include <algorithm>
#include <iostream>

bool compare_edges(const edge& a, const edge& b) {
    return a.weight < b.weight;
}

void kruskal(int n, const std::vector<std::vector<int>>& graph) {
    union_find uf(n);
    std::vector<edge> edges;

    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n; ++j) {
            if (graph[i][j] != 0) {
                edges.emplace_back(i, j, graph[i][j]);
            }
        }
    }

    std::sort(edges.begin(), edges.end(), compare_edges);

    std::vector<edge> mst;
    int total_weight = 0;

    for (const auto& e : edges) {
        if (uf.union_sets(e.u, e.v)) {
            mst.push_back(e);
            total_weight += e.weight;
        }
        if (mst.size() == n - 1) break;
    }

    std::cout << "1.\n";
    for (const auto& e : mst) {
        char colonia_u = 'A' + e.u;
        char colonia_v = 'A' + e.v;
        std::cout << "(" << colonia_u << ", " << colonia_v << ")\n";
    }
}
