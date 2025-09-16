/*
SECUENCIA
2, 1, 4, 3, 6, 5, 8, 7, 10, 11...
*/
    #include <iostream>
    using namespace std;


    int main(){
        int n1 = 2;
        int n2 = 1;
        const int dos = 2;


        int longitud = 0;
        cout << "Introduce la longitud deseada (n1=4, n2=5): ";
        cin >> longitud;

        if(longitud >= 1) cout << n1 << endl;
        if(longitud >= 2) cout << n2 << endl;


        for(int i = 3; i <= longitud; i++){
            n1 = n1 + dos;
            cout << n1 << '\n';

            n2 = n2 + dos;
            cout << n2 << '\n';
        }
        return 0;
    }
