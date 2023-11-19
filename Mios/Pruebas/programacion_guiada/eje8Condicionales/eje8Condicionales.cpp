#include <iostream>

int main() {
    int n1,n2;
    std::cout << "Escribe dos numeros \n";
    std::cout << "Numero 1: ";std::cin >> n1;
    std::cout << "Numero 2: ";std::cin >> n2;
    
    if(n1 == n2) {
        std::cout << "Los dos numeros son iguales\n";
    }
    else if (n1 > n2) {
        std::cout << "El numero "<< n1 << " es mayor al numero " << n2 << "\n";
    } else {
        std::cout << "El numero "<< n2 << " es mayor al numero " << n1 << "\n";
    }
    
    system("pause");
    return 0;
}