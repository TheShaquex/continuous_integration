cmake_minimum_required(VERSION 3.10)
project(continuous_integration)

# Configuraciones estándar
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Opciones de compilación
option(BUILD_TESTS "Build tests" ON)
option(CODE_COVERAGE "Enable code coverage" OFF)

# Configuraciones de compilación
if(CODE_COVERAGE)
    add_compile_options(--coverage)
    link_libraries(--coverage)
endif()

# Configurar directorios de salida
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR})

# Habilitar pruebas
enable_testing()

# Agregar subdirectorios
add_subdirectory(src)
add_subdirectory(app)
if(BUILD_TESTS)
    add_subdirectory(tests)
endif()