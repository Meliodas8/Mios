#include <iostream>

int main() {
    char progamador[]="programador";
    //another way to initialize "char" but with some bugs
    //char novato[]={'n','o','v','a','t','o'};
    char nombre[100];
    std::cout<<progamador<<"\n"<<sizeof(progamador)<<"\n";
    //std::cout<<novato<<"\n"<<sizeof(novato)<<"\n";
    std::cout<<"Ingresa tu nombre: ";
    //the cin function does not read after the space
    //std::cin>>nombre;
    //to limit the maximum values taken by the function is used: 
    //std::cin.getline(nombre,sizeof(nombre),'\n');
    gets(nombre);
    std::cout<<nombre<<"\n";
    system("pause");
    return 0;
}