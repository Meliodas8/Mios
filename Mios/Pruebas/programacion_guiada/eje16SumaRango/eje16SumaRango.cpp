#include <iostream>

int main() {
    int numero,suma=0;
    do {
        std::cout << "Escribe un numero entero(El rango de 100 a 200 o 0 cierra el programa): ";
        std::cin >> numero;
        suma=suma+numero;
        std::cout << "Aqui este tu suma: " << suma << "\n";
    } while ( ( (numero<100) || (numero>200) ) && (numero!=0) );
    
    system("pause");
    return 0;
}