#include <iostream>

int main() {
    int numero;
    std::cout << "Ingresa un numero entero: ";
    std::cin >> numero;
    if(numero%2==0) {
        std::cout << "El numero ingresado " << numero << " es par\n";
    } else {
        std::cout << "El numero ingresado " << numero << " es impar\n";
    }
    system("pause");
    return 0;
}