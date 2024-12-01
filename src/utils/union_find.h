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

#ifndef UNION_FIND_H
#define UNION_FIND_H

#include <vector>

/**
 * @brief Represents a Union-Find (Disjoint Set Union) data structure.
 * 
 * This structure is used to efficiently perform union and find operations,
 * often utilized in graph algorithms like Kruskal's Minimum Spanning Tree.
 */
class UnionFind {
private:
    std::vector<int> parent; ///< Parent vector for tracking connected components.
    std::vector<int> rank;   ///< Rank vector for optimization (by rank heuristic).

public:
    /**
     * @brief Constructs a Union-Find data structure with `n` elements.
     * 
     * @param n The number of elements in the Union-Find structure.
     */
    explicit UnionFind(int n);

    /**
     * @brief Finds the representative of the set containing the element `x`.
     * 
     * @param x The element to find.
     * @return The representative of the set containing `x`.
     */
    int find(int x);

    /**
     * @brief Unites the sets containing elements `x` and `y`.
     * 
     * @param x An element in the first set.
     * @param y An element in the second set.
     * @return `true` if the sets were united, `false` if they were already connected.
     */
    bool union_sets(int x, int y);
};

#endif // UNION_FIND_H
