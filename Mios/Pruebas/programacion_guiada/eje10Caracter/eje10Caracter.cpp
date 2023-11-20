#include <iostream>

int main() {
    char letra;
    regresar:
    std::cout << "Ingresa una vocal: ";
    std::cin >> letra;

    switch (letra) {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':
        std::cout << "Bien hecho, has presionado una vocal\n";
        break;
    default:
        std::cout << "Eso no es una vocal, Gilipoyah\n";
        goto regresar;
        break;
    }

    system("pause");
    return 0;
}