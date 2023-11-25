#include <iostream>

int main(){
    int numero5=0,numero3=0,numero3y5=0;
    std::cout << "se mostraran los numeros del 1 al 100\n";

    for (int numero=1; numero <= 101; numero++) {
        if (numero>=1 && numero<=100) {
            if (numero % 3 == 0 && numero % 5 == 0) {
                std::cout << numero << " fizzbuzz" << "\n";
                numero3y5++;
            } else if (numero % 3 == 0) {
                std::cout << numero << " fizz" << "\n";
                numero3++;
            } else if (numero % 5 == 0) {
                std::cout << numero << " buzz" << "\n";
                numero5++;
            } else {
                std::cout << numero << "\n";
            } 
        }     
    }

    std::cout << "\n";
    std::cout << "terminamos:\n\n";
    std::cout << "los numeros multiplos de 3 son: " << numero3 << "\n";
    std::cout << "Los numeros multiplos de 5 son: " << numero5 << "\n";
    std::cout << "Los numeros multiplos de 3 y 5 son: " << numero3y5 << "\n\n";
    
    system("pause");
    return 0;
}
