//Eduardo Daniel Perez Roman
//Potencias

#include <iostream>
using namespace std;

int calcularPotencia(int, int);

int main()
{
    int base, Potencia, resultado;

    cout << "Ingresa el numero Base ";
    cin >> base;

    cout << "Ahora pon la potencia: ";
    cin >> Potencia;

    resultado = calcularPotencia(base, Potencia);
    cout << base << "^" << Potencia << " = " << resultado;

    return 0;
}

int calcularPotencia(int base, int powerRaised)
{
    if (powerRaised != 0)
        return (base * calcularPotencia(base, powerRaised - 1));
    else
        return 1;
}