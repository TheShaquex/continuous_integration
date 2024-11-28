add_executable(main_app main.cc)

# Enlazar el ejecutable con la biblioteca del proyecto
target_link_libraries(main_app PRIVATE my_project_lib)
