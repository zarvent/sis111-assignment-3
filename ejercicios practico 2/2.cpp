/*
60, 1, 58, 3, 56, 5, 54, 7, 52, 9, 50, 11 ...
*/

#include <iostream>
using namespace std;


    int main(){
    // declaracion de variables
    int n1 = 60;
    int n2 = 1;

    // definimos longitud de la cadena
    int longitud = 0;
    cout << "Introduce la longitud deseada (n1=60, n2=1): ";
    cin >> longitud;

    // definimos el bucle que hara el calculo
    for(int i = 1; i <= longitud; i++){
        if(i % 2 == 1){
            cout << n1 << '\n';
            n1 -= 2;
        } else{
            cout << n2 << '\n';
            n2 += 2;
        }
    }
    return 0;
    }
