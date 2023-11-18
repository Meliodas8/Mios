#include <iostream>
#include <cmath>

int main(){
    double num;
    std::cout << "Dime un numero: ";
    std::cin >> num;
    std::cout << "Raiz cuadrada: ";
    std::cout << sqrt(num) << "\n";
    std::cout << "Raíz cúbica: " << pow(num, 1.0/3.0) << "\n"; 
    system("pause");
    return 0;
}