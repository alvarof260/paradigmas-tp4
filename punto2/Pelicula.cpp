#include <iostream>
#include <string>
#include "Pelicula.h"
using namespace std;

int Pelicula::autonumerico = 0;

Pelicula::Pelicula()
{
    this->autonumerico = ++autonumerico;
    this->codigo = 0;
    this->titulo = "";
    this->director = "";
    this->estreno = false;
    this->precioBase = 0.0;
    this->tipoPelicula = 'N';
}

Pelicula::Pelicula(int codigo, string titulo, string director, bool estreno, float precioBase, char tipoPelicula)
{
    this->autonumerico = ++autonumerico;
    this->codigo = codigo;
    this->titulo = titulo;
    this->director = director;
    this->estreno = estreno;
    this->precioBase = precioBase;
    this->tipoPelicula = toupper(tipoPelicula);
}

Pelicula::Pelicula(const Pelicula &p)
{
    this->autonumerico = ++autonumerico;
    this->codigo = p.codigo;
    this->titulo = p.titulo;
    this->director = p.director;
    this->estreno = p.estreno;
    this->precioBase = p.precioBase;
    this->tipoPelicula = p.tipoPelicula;
}

void Pelicula::listarInformacion()
{
    cout << "Codigo: " << this->codigo << "\n"
         << "Titulo: " << this->titulo << "\n"
         << "Director: " << this->director << "\n"
         << "Estreno: " << (this->estreno ? "Si" : "No") << "\n"
         << "Precio Base: " << this->precioBase << "\n"
         << "Tipo de Pelicula: " << (this->tipoPelicula == 'N' ? "Nacional" : "Internacional") << "\n";
}

float Pelicula::calcularCosto()
{
    float costo = this->precioBase;
    if (this->tipoPelicula == 'I')
    {
        costo *= 1.30;
    }
    else if (!this->estreno)
    {
        costo *= 0.80;
    }
    return costo;
}