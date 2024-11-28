cmake_minimum_required(VERSION 3.16)
project(MyProject LANGUAGES CXX)

# Configurar el estándar de C++
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Configurar directorios de salida
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)

# Subdirectorios
add_subdirectory(app)
add_subdirectory(src)
add_subdirectory(tests)

# Opcional: incluye dependencias externas
if(EXISTS ${CMAKE_SOURCE_DIR}/external/CMakeLists.txt)
    add_subdirectory(external)
endif()

# Habilitar pruebas
enable_testing()
