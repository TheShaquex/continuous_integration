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
#include <vector>

/**
 * @brief Computes the Minimum Spanning Tree (MST) of a graph using Kruskal's algorithm.
 * 
 * @param n The number of nodes in the graph.
 * @param graph An adjacency matrix representing the graph. 
 *              The value at graph[i][j] represents the weight of the edge between nodes i and j.
 */
void kruskal(int n, const std::vector<std::vector<int>>& graph);

/**
 * @brief Solves the Traveling Salesman Problem (TSP) using a brute-force or heuristic algorithm.
 * 
 * @param n The number of nodes (cities).
 * @param cost A matrix where cost[i][j] represents the travel cost between city i and city j.
 */
void traveling_salesman(int n, const std::vector<std::vector<int>>& cost);

/**
 * @brief Computes the maximum flow in a flow network using the Ford-Fulkerson algorithm.
 * 
 * @param graph A capacity matrix where graph[i][j] represents the capacity of the edge from node i to node j.
 * @param s The source node in the flow network.
 * @param t The sink node in the flow network.
 * @param n The number of nodes in the network.
 * @return The maximum flow value from the source to the sink.
 */
int fordFulkerson(int graph[100][100], int s, int t, int n);
