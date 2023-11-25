#include <iostream>
#include <math.h>

int main() {
    float n,suma=0,potencia=0;
    do {
        std::cout << "Inngresa un numero mayor a 1: ";
        std::cin >> n;
    } while (n<1);
    for (int i = 1; i <= n; i++) {
        potencia=pow(2,i);
        suma+=potencia;
        std::cout << "2^" << i << "+";
    }
    std::cout << "\nAqui esta tu sumatoria: " << suma << "\n";
    
    system("pause");
    return 0;
}