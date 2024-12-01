# src/utils/CMakeLists.txt

set(UTILS_SRC
    point_utils.cc
    point.cc
    union_find.cc
)

add_library(utils ${UTILS_SRC})
target_include_directories(utils PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
