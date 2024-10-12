#include <iostream>
using namespace std;

class Pelicula
{
    static int autonumerico;
    int codigo;
    string titulo;
    string director;
    bool estreno;
    float precioBase;
    char tipoPelicula; //{N, I}

public:
    Pelicula();
    Pelicula(int codigo, string titulo, string director, bool estreno, float precioBase, char tipoPelicula);
    Pelicula(const Pelicula &p);
    void listarInformacion();
    float calcularCosto();
};
