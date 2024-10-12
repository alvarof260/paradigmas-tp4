#include <iostream>
#include "Pelicula.h"

int main()
{
    // Película con constructor por defecto
    Pelicula pelicula1;
    pelicula1.listarInformacion();
    std::cout << "Costo: " << pelicula1.calcularCosto() << "\n\n";

    // Película con constructor con parámetros
    Pelicula pelicula2(245, "Inception", "Christopher Nolan", true, 1000.0, 'I');
    pelicula2.listarInformacion();
    std::cout << "Costo: " << pelicula2.calcularCosto() << "\n\n";

    // Película copia
    Pelicula pelicula3(pelicula2);
    pelicula3.listarInformacion();
    std::cout << "Costo: " << pelicula3.calcularCosto() << "\n";

    return 0;
}