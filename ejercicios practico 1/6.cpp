/*
6. Introducir n números debe mostrar el porcentajes de positivos y negativos.

Pseudocódigo convertido a C++.
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    // DECLARAR INT
    int numero = 0;
    int contadorPositivos = 0;
    int contadorNegativos = 0;
    int cantidadAIngresar = 0;

    // Solicitar al usuario la cantidad de números a ingresar
    cout << "¿Cuántos números deseas ingresar? ";
    if (!(cin >> cantidadAIngresar) || cantidadAIngresar <= 0) {
        cout << "Cantidad inválida. Debe ser un entero mayor que 0. \n";
        return 0;
    }

    // Bucle principal para leer los números
    for (int i = 0; i < cantidadAIngresar; ++i) {
        cout << "Ingresa el número " << (i + 1) << ": ";
        if (!(cin >> numero)) {
            cout << "Entrada inválida. .\n";
            return 0;
        }

        if (numero > 0) {
            ++contadorPositivos;
        } else if (numero < 0) {
            ++contadorNegativos;
        }
        // si numero == 0 no se cuenta (según pseudocódigo)
    }

    // Calcular porcentajes (usar double para evitar división entera)
    double porcentajePositivos = (static_cast<double>(contadorPositivos) * 100.0) / cantidadAIngresar;
    double porcentajeNegativos = (static_cast<double>(contadorNegativos) * 100.0) / cantidadAIngresar;

    // Mostrar resultados con 2 decimales
    cout << fixed << setprecision(2) << "\n";
    cout << "Porcentaje de números positivos: " << porcentajePositivos << "%\n";
    cout << "Porcentaje de números negativos: " << porcentajeNegativos << "%\n";

    return 0;
}
