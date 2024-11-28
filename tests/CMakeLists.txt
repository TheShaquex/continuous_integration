# Descargar GoogleTest
include(FetchContent)
FetchContent_Declare(
    googletest
    URL https://github.com/google/googletest/archive/release-1.12.1.tar.gz
)
FetchContent_MakeAvailable(googletest)

# Crear ejecutable para pruebas
add_executable(tests test_main.cc)

# Enlazar con GoogleTest y la biblioteca del proyecto
target_link_libraries(tests PRIVATE gtest gtest_main my_project_lib)

# Registrar las pruebas
include(GoogleTest)
gtest_discover_tests(tests)
