#include <iostream>
using namespace std;

class Cuenta
{
    int numero;
    long int dniTitular;
    double saldo;

public:
    Cuenta(int numero, long int dniTitular, double saldo);
    bool depositar(double monto);
    bool extraer(double monto);
    double getSaldo();
    void mostrarInformacion();
};
