#ifndef UNION_FIND_H
#define UNION_FIND_H

#include <vector>
class union_find {
    std::vector<int> parent;
    std::vector<int> rank;

public:
    explicit union_find(int n);
    int find(int x);
    bool union_sets(int x, int y);
};

#endif // UNION_FIND_H
