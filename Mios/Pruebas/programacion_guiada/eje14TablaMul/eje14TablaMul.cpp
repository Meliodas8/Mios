#include <iostream>

int main() {

    int numresp=1;

    while (numresp == 1) {

        std::cout << "Selecciona una de las opciones: \n1 - Elegir una tabla de multiplicar \n2 - Salir\n";
        std::cin >> numresp;

        if (numresp == 1) {

            int numero;
            do{
                std::cout << "Pon un numero entre 1 y 10: ";
                std::cin >> numero; std::cout << "\n";
                if(numero<1 || numero>10 ) {
                    std::cout << "Te he dicho entre 1 y 10 Tontin\n";
                }
            } while (numero<1 || numero>10);
            for (int i = 1; i <= 10; i++) {
                std::cout << i << " x " << numero << " = " << i*numero << "\n";
            }

            std::cout << "\n";
            system("pause");
            #ifdef _WIN32
            system("cls");
            #else
            system("clear");
            #endif

        } else if (numresp == 2) {
            std::cout << "\nAdios yo te quiero :(\n\n";
        } else {
            std::cout << "Opcion no valido mi pochurricusqui\n";
        }
    }
    
    system("pause");
    return 0;
}