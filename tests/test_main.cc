// Copyright (c) 2024, Isaac Alejandro Enriquez Trejo y Kaled Noe Enriquez Trejo
// Todos los derechos reservados.
//
// Licenciado bajo la Licencia MIT. Ver el archivo LICENSE para más detalles.
#include <gtest/gtest.h>
#include "funciones.h"

TEST(funciones_test, leer_archivo_test) {
    std::string contenido = leer_archivo("example.txt"); // Crea este archivo como mock.
    EXPECT_FALSE(contenido.empty());
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
