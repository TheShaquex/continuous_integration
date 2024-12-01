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

#ifndef KRUSKAL_H
#define KRUSKAL_H

#include <vector>
#include "edge.h"

/**
 * @brief Implements Kruskal's algorithm to find the Minimum Spanning Tree (MST) of a graph.
 * 
 * @param n The number of nodes in the graph.
 * @param graph A 2D vector representing the adjacency matrix of the graph. 
 *        graph[i][j] contains the weight of the edge between nodes i and j.
 *        A value of 0 indicates no edge between the nodes.
 * 
 * @details
 * - The function constructs the MST by sorting edges in non-decreasing order of their weights
 *   and using a union-find structure to avoid cycles.
 * - The result is printed directly, showing the edges in the MST.
 */
void kruskal(int n, const std::vector<std::vector<int>>& graph);

#endif // KRUSKAL_H
