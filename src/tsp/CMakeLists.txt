# src/tsp/CMakeLists.txt

set(TSP_SRC
    traveling_salesman.cc
)

add_library(tsp ${TSP_SRC})
target_include_directories(tsp PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
