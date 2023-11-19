#include <iostream>

int main(){
    int numero;
    regresar:
    std::cout << "Ecribe un numero entre 1 y 5 o 6 para terminar: ";
    std::cin >> numero;
    switch (numero)
    {
    case 1:
        std::cout << "Has presionado la tecla del numero 1\n";
        goto regresar;
        break;
    case 2:
        std::cout << "Has presionado la tecla del numero 2\n";
        goto regresar;
        break;
    case 3:
        std::cout << "Has presionado la tecla del numero 3\n";
        goto regresar;
        break;
    case 4:
        std::cout << "Has presionado la tecla del numero 4\n";
        goto regresar;
        break;
    case 5:
        std::cout << "Has presionado la tecla del numero 5\n";
        goto regresar;
        break;
    case 6:
        std::cout << "te extrañare :(\n";
        system("pause");
        return 0;
        break;
    default:
        std::cout << "te he dicho entre 1 y 5 o 6 para salir, Gilipollah\n";
        goto regresar;
        break;
    }
    system("pause");
    return 0;
}