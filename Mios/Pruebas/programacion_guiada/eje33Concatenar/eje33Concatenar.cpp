#include <iostream>
#include <string.h>

int main() {
    char nombre[20],apellido[20],apellido2[20],nombreApellido[40]={};
    std::cout<<"Ingresa tu nombre: ";
    std::cin>>nombre;
    std::cout<<"Ingresa tu primer apellido: ";
    std::cin>>apellido;
    std::cout<<"Ingresa tu segundo apellido: ";
    std::cin>>apellido2;
    strcat(nombreApellido,nombre);
    strcat(nombreApellido," ");
    strcat(nombreApellido,apellido);
    strcat(nombreApellido," ");
    strcat(nombreApellido,apellido2);

    std::cout<<"Este es tu nombre y apellidos: "<<nombreApellido<<"\n";

    system("pause");
    return 0;
}