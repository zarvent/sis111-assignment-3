/*
5. Leer n números por teclado y mostrar los números impares que se encuentran entre 150 y 550.

*/

#include <iostream>

int main() {
    // Declaración de variables
    int cantidadDeNumeros = 0; // Almacena la cantidad total de números a  ngresar

    int numero = 0;             // Almacena cada número ingresado por el usuario


    std::cout << "¿Cuántos números deseas ingresar? ";
    std::cin >> cantidadDeNumeros;


    std::cout << "\n--- Inicio de entrada (" << cantidadDeNumeros << " números) ---\n";


    for (int i = 0; i < cantidadDeNumeros; ++i) {
        // Solicitar el número al usuario
        std::cout << "Número " << (i + 1) << " — ingresa valor: ";
        std::cin >> numero;

        // Verificar si el número es impar y está en el rango [150, 550]
        if (numero >= 150 && numero <= 550 && numero % 2 != 0) {
            std::cout << "[✓] Número " << numero << "es impar y esta entre (150-550): "<< std::endl;
        } else{
            std::cout << "[✗] Número no válido: " << numero << " (debe ser impar entre 150 y 550)" << std::endl;
        }
    }

    // Mensaje final
    std::cout << "\n--- Proceso finalizado. Gracias. ---\n";

    return 0;
}
