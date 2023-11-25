#include <iostream>

int main() {
    int numero,factorial=1;
    do {
        std::cout << "Ingresa un numero mayor a 1: ";
        std::cin >> numero;
    } while (numero<1);
    for (int i = 1; i <= numero; i++) {
        factorial*=i;
        std::cout << i << "*";
        
    }
    std::cout << "\nEste es el factorial: " << factorial << "\n";
    
    system("pause");
    return 0;
}