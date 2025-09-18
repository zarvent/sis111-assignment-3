/*
4. Mostrar la suma y el promedio de los números impares introducidos por teclado.
*/

#include <iostream>
using namespace std;

int main(){
    // Definir variables
    int numero = 0;
    int cantidadAIngresar = 0; // cantidad total de números a leer
    int cantidadImpares = 0;   // contador de impares encontrados
    double sumaImpares = 0.0;
    double promedioImpares = 0.0;

    cout << "¿Cuántos números deseas ingresar? ";
    cin >> cantidadAIngresar;

    for(int i = 0; i < cantidadAIngresar; ++i){
        cout << "Ingresa el número " << (i+1) << ": ";
        cin >> numero;

        if(numero % 2 != 0){
            sumaImpares += numero;
            ++cantidadImpares;
        }
    }

    if(cantidadImpares > 0){
        promedioImpares = sumaImpares / cantidadImpares;
        cout << "\nLa suma de los impares es: " << sumaImpares << endl;
        cout << "El promedio de los impares es: " << promedioImpares << endl;
    } else{
        cout << "\nNo se ingresaron números impares" << endl;
    }

    return 0;
}
