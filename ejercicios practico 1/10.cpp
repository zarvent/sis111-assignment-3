/*
10. Leer n números por teclado y mostrar el número mayor y el número menor.
*/

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main(){
    int cantidadAIngresar, numero, mayor, menor;

    cout << "¿Cuántos números deseas ingresar? ";
    cin >> cantidadAIngresar;
    if(cantidadAIngresar <= 0){
        cout << "Debes ingresar al menos un número." << endl;
        return 0;
    }


    cout << "Ingresa tu número 1: ";
    cin >> numero;
    mayor = menor = numero;

    for(int i = 2; i <= cantidadAIngresar; i++){
        cout << "Ingresa tu número " << i << ": ";
        cin >> numero;

        if(numero > mayor){
            mayor = numero;
        } else if(numero < menor){
            menor = numero;
        }
    }

    cout << "Número mayor: " << mayor << endl;
    cout << "Número menor: " << menor << endl;

    return 0;
}
