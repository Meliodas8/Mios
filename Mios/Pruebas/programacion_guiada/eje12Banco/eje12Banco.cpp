#include <iostream>

int main() {
    int option;
    float total=1000,ingreso,egreso;
    std::cout << "Bienvenido al banco!!\n";
    regreso:
    std::cout << "Por favor seleccione una de las opciones: \n";
    std::cout << "1.- Ingreso de dinero\n";
    std::cout << "2.- Retirar dinero\n";
    std::cout << "3.- Salir\n";
    std::cin >> option;
    switch (option) {
    case 1:
        std::cout << "Cuanto dinero desea ingresar: ";
        std::cin >> ingreso;
        total+=ingreso ;
        std::cout << "Tienes en el banco $" << total << "\n";
        goto regreso;
    case 2:
        std::cout << "Cuanto dinero desea sacar: ";
        std::cin >> egreso;
        if(total < egreso) {
            std::cout << "No tienes suficiente dinero ratita, tienes " << total << "\n";
        } else {
            total-=egreso;
            std::cout << "Te quedan en el banco $" << total << "\n";
        }
        goto regreso;
    case 3:
        break;

    default:
        goto regreso;
    }
    system("pause");
    return 0;
}