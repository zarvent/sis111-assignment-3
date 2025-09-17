/*
2. Mostrar los números pares de forma decreciente del 4000 al 100.
*/

#include <iostream>
using namespace std;

int main(){
    for(int i = 4000; i >= 100; i -= 2){
        cout << i << endl;
    }
    return 0;
}
