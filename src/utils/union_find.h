#pragma once
#include <vector>

class UnionFind {
    std::vector<int> parent;
    std::vector<int> rank;

public:
    explicit UnionFind(int n);                 
    int find(int x);                  
    bool unionSets(int x, int y);     
};