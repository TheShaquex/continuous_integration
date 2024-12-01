# app/CMakeLists.txt

add_executable(main main.cc)

# Vincular bibliotecas necesarias
target_link_libraries(main PRIVATE algorithms graph utils tsp)
