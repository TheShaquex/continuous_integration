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

/**
 * @brief Computes the maximum flow in a flow network using the Ford-Fulkerson algorithm.
 * 
 * @param graph A 2D array representing the capacity of edges in the flow network.
 * @param s The source node in the flow network.
 * @param t The sink node in the flow network.
 * @param n The number of nodes in the flow network.
 * @return The maximum flow from source to sink.
 * 
 * @details
 * - The algorithm works by finding augmenting paths in the residual graph and 
 *   augmenting the flow until no more augmenting paths exist.
 * - The input graph is modified during the execution.
 */
int fordFulkerson(int graph[100][100], int s, int t, int n);
