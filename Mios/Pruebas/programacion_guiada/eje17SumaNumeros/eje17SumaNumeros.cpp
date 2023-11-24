#include <iostream>

int main() {
    int numero,suma=0;
    do {
        std::cout << "Ingresa un numero mayor a 1: ";
        std::cin >> numero;
    } while (numero<=1);
    for (int i = 1; i <= numero; i++) {
        suma=suma+i;
        std::cout << i << "+";
    }
    std::cout << "\nAqui esta la suma: " << suma << "\n";
    
    
    system("pause");
    return 0;
}