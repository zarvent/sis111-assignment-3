/*
3. Leer n números y mostrar el promedio de los números múltiplos de 4 y 7.
*/


#include <iostream>
using namespace std;

int main(){
    // Inicializar variables
    int sumaMultiplosDe4 = 0, contadorMultiplosDe4 = 0;
    double promedioMultiplosDe4 = 0.0;

    int sumaMultiplosDe7 = 0, contadorMultiplosDe7 = 0;
    double promedioMultiplosDe7 = 0.0;

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

        // verifica si es multiplo de 7
        if(numero % 7 == 0){
            sumaMultiplosDe7 += numero;
            ++contadorMultiplosDe7;
        }
    }

    // calcular promedio de multiplos de 4
    if(contadorMultiplosDe4 > 0){
        promedioMultiplosDe4 = static_cast<double>(sumaMultiplosDe4) / contadorMultiplosDe4;
        cout << "\n El promedio de los multiplos de 4 es: " << promedioMultiplosDe4 << endl;
    } else{
        cout << "\n No se ingresaron multiplos de 4." << endl;
    }

        // calcular promedio de multiplos de 7
    if(contadorMultiplosDe7 > 0){
        promedioMultiplosDe7 = static_cast<double>(sumaMultiplosDe7) / contadorMultiplosDe7;
        cout << "\n El promedio de los multiplos de 7 es: " << promedioMultiplosDe7 << endl;
    } else{
        cout << "\n No se ingresaron multiplos de 7." << endl;
    }

    return 0;
}
