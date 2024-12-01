# src/graph/CMakeLists.txt

set(GRAPH_SRC
    edge.h
    kruskal.cc
    union_find.cc
)

add_library(graph ${GRAPH_SRC})
target_include_directories(graph PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
