#include <iostream>

int main() {
    int cantidadDeNumeros = 0;
    int numero = 0;

    std::cout << "¿Cuántos números deseas ingresar? ";
    std::cin >> cantidadDeNumeros;

    std::cout << "\n--- Inicio de entrada (" << cantidadDeNumeros << " números) ---\n";

    for (int i = 0; i < cantidadDeNumeros; ++i) {
        std::cout << "Número " << (i + 1) << " — ingresa valor: ";
        std::cin >> numero;

        if (numero >= 150 && numero <= 550 && numero % 2 != 0) {
            std::cout << "[✓] Número " << numero << "es impar y esta entre (150-550): "<< std::endl;
        } else{
            std::cout << "[✗] Número no válido: " << numero << " (debe ser impar entre 150 y 550)" << std::endl;
        }
    }

    std::cout << "\n--- Proceso finalizado. Gracias. ---\n";

    return 0;
}
