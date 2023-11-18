#include <iostream>

int main(){
    int a,b,aux;
    std::cout << "Escribe mis demandas perrooooo\n";
    std::cout << "Valor a: ";std::cin >> a;
    std::cout << "Valor b: ";std::cin >> b;

    aux=a;
    a=b;
    b=a;

    std::cout << "\nAqui esta el valor intercambiado: \n";
    std::cout << "Valor a: " << a << "\n";
    std::cout << "Valor b: " << b << "\n";

    system("pause");
    return 0;

}