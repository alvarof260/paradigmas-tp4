#include <iostream>
#include "Cuenta.h"
using namespace std;

bool transferir(Cuenta &inicio, Cuenta &destino, double monto);

int main()
{
    Cuenta cuenta1(1200, 45185152, 450.00);
    Cuenta cuenta2(1350, 45284161, 900.00);

    cout << "Estado inicial de las cuentas:" << endl;
    cuenta1.mostrarInformacion();
    cuenta2.mostrarInformacion();

    double montoTransferencia = 450.00;
    if (transferir(cuenta1, cuenta2, montoTransferencia))
    {
        cout << "\nTransferencia de " << montoTransferencia << " realizada con exito!" << endl;
    }
    else
    {
        cout << "\nNo se pudo realizar la transferencia." << endl;
    }

    cout << "\nEstado final de las cuentas:" << endl;
    cuenta1.mostrarInformacion();
    cuenta2.mostrarInformacion();
    return 0;
}

bool transferir(Cuenta &inicio, Cuenta &destino, double monto)
{
    if (inicio.extraer(monto))
    {
        destino.depositar(monto);
        return true;
    }
    return false;
}
