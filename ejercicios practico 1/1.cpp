/*
1. Leer N números y mostrar el promedio de los múltiplos de 4 y la suma de los múltiplos de 5.
*/


#include <iostream>
using namespace std;

int main(){
    // Inicializar variables
    int sumaMultiplosDe4 = 0;
    int contadorMultiplosDe4 = 0;
    double promedioMultiplosDe4 = 0.0;

    int sumaMultiplosDe5 = 0;

    int numerosACalcular = 0;
    cout << "Introduce la cantidad de numeros a calcular: ";
    cin >> numerosACalcular;

    for(int i = 0; i < numerosACalcular; ++i){
        int numero;
        cout << "Introduce el numero " << (i+1) << ": ";
        cin >> numero;

        // verificar si es multiplo de 4
        if(numero % 4 == 0){
            sumaMultiplosDe4 += numero;
            ++contadorMultiplosDe4;
        }

        // verifica si es multiplo de 5
        if(numero % 5 == 0){
            sumaMultiplosDe5 += numero;
        }
    }

    // calcular promedio de multiplos de 4
    if(contadorMultiplosDe4 > 0){
        promedioMultiplosDe4 = static_cast<double>(sumaMultiplosDe4) / contadorMultiplosDe4;
        cout << "\n El promedio de los multiplos de 4 es: " << promedioMultiplosDe4 << endl;
    } else{
        cout << "\n No se ingresaron multiplos de 4." << endl;
    }

    cout << "\n La suma de los multiplos de 5 es: " << sumaMultiplosDe5 << endl;
    return 0;
}
