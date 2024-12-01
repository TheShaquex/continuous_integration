# src/algorithms/CMakeLists.txt

set(ALGORITHMS_SRC
    ford_fulkerson.cc
    kruskal.cc
    traveling_salesman.cc
)

add_library(algorithms ${ALGORITHMS_SRC})
target_include_directories(algorithms PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
