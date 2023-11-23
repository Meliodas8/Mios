#include <iostream>

int main() {

    int numresp;
    std::cout << "Pulsa 1 para entrar al programa: ";
    std::cin >> numresp;

    while (numresp == 1) {

        std::cout << "\nSelecciona una de las opciones: \n1 - Elegir una tabla de multiplicar \n2 - Salir\n";
        std::cin >> numresp;

        if (numresp == 1) {

            int numero;
            do{
                std::cout << "Pon un numero entre 1 y 10: ";
                std::cin >> numero;
                if(numero<1 || numero>10 ) {
                    std::cout << "Te he dicho entre 1 y 10 Tontin\n";
                }
            } while (numero<1 || numero>10);
            for (int i = 1; i <= 10; i++) {
                std::cout << i << " x " << numero << " = " << i*numero << "\n";
            }
        } else if (numresp == 2) {
            std::cout << "Adios yo te quiero :(\n";
        } else {
            std::cout << "Opcion no valido mi pochurricusqui\n";
        }
    }
    
    system("pause");
    return 0;
}