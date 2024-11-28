# Crear una biblioteca estática
add_library(my_project_lib STATIC funciones.cc)

# Incluir el directorio actual para los encabezados
target_include_directories(my_project_lib PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
