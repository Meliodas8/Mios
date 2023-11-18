#include <iostream>

int main(){

    float a,b,c,d,e,f,res;
    std::cout << "Ingresalos valores bunericos que se pidan\n";
    std::cout << "Valor a: ";std::cin >> a;
    std::cout << "Valor b: ";std::cin >> b;
    std::cout << "Valor c: ";std::cin >> c;
    std::cout << "Valor d: ";std::cin >> d;
    std::cout << "Valor e: ";std::cin >> e;
    std::cout << "Valor f: ";std::cin >> f;
    std::cout << "\n";

    res=(a+(b/c)) / (d+(e/f));

    std::cout << "Aqui esta tu resultado: " << res << "\n\n";

    system("pause");
    return 0;
}