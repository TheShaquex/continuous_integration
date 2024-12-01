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

#include "traveling_salesman.h"
#include <iostream>
#include <algorithm>
#include <climits>

void traveling_salesman(int n, const std::vector<std::vector<int>>& cost) {
    std::vector<int> nodes;

    for (int i = 1; i < n; i++)
        nodes.push_back(i);

    int min_cost = INT_MAX;
    std::vector<int> best_route;

    do {
        int curr_cost = 0;
        int curr_node = 0;
        std::vector<int> route = {0};

        for (int i = 0; i < nodes.size(); i++) {
            curr_cost += cost[curr_node][nodes[i]];
            curr_node = nodes[i];
            route.push_back(curr_node);
        }

        curr_cost += cost[curr_node][0];
        route.push_back(0);

        if (curr_cost < min_cost) {
            min_cost = curr_cost;
            best_route = route;
        }
    } while (std::next_permutation(nodes.begin(), nodes.end()));

    std::cout << "2.\n";
    for (int i = 0; i < best_route.size(); i++) {
        std::cout << char('A' + best_route[i]) << " ";
    }
    std::cout << std::endl;
}
