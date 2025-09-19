/*
7. De un conjunto de números mostrar el promedio de los pares y el promedio de los impares.
*/

#include <iostream>
using namespace std;

int main(){
    int numero = 0, cantidadAIngresar = 0, cantidadPares = 0, cantidadImpares = 0;
    double  sumatoriaPares = 0.0, promedioPares = 0.0, sumatoriaImpares = 0.0, promedioImpares = 0.0;

    cout << "¿Cuántos números deseas ingresar? ";
    cin >> cantidadAIngresar;

    for(int i = 0; i < cantidadAIngresar; i++){
        cout << "Ingresa el numero " << (i + 1) << ": ";
        cin >> numero;

        if(numero % 2 == 0){
            sumatoriaPares += numero;
            cantidadPares++;
        } else {
            sumatoriaImpares += numero;
            cantidadImpares++;
        }
    }
        if(cantidadPares > 0 ){
            promedioPares = static_cast<double>(sumatoriaPares) / cantidadPares;

            cout << "El promedio de los numeros pares es: " << promedioPares << endl;
        } else{
            cout << "No se ingresaron numeros pares." << endl;
        }


        if(cantidadImpares > 0){
            promedioImpares = static_cast<double>(sumatoriaImpares) / cantidadImpares;

            cout << "El promedio de los numeros impares es: " << promedioImpares << endl;
        } else{
            cout << "No se ingresaron numeros impares." << endl;
        }
}
