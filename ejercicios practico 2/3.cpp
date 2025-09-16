    /*
SECUENCIA FIBONACCI
1, 1, 2, 3, 5, 8, 13...
*/

#include <iostream>
using namespace std;


    int main(){
    int n1 = 1;
    int n2 = 1;
    int siguiente = 0;

    int longitud = 0;
        cout << "Introduce la longitud deseada (n1=4, n2=5): ";
    cin >> longitud;

    if(longitud >= 1) cout << n1 << endl;
    if(longitud >= 2) cout << n2 << endl;

    for(int i = 3; i <= longitud; i++){
        siguiente = n1 + n2;
        cout << siguiente << '\n';

        n1 = n2;
        n2 = siguiente;
    }
    return 0;
    }
