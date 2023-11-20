#include <iostream>

int main() {
    int edad;
    std::cout << "Escribe la edad del candidato: ";
    std::cin >> edad;
    if(edad >= 18 && edad <= 40) {
        std::cout << "Es apto para entrar\n";
    } else {
        std::cout << "No es apto para entrar\n";
    }
    
    system("pause");
    return 0;
}