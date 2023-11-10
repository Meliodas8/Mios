#include <iostream>

int main(){
    char sexo[10];
    int edad;
    float estatura;
    std::cout<<"Humano escribe lo siguiente: \n";
    std::cout<<"\nSexo: "; std::cin>>sexo;
    std::cout<<"\nEdad: "; std::cin>>edad;
    std::cout<<"\nEstatura: "; std::cin>>estatura;

    std::cout<<"\nHumano aqui estan tus datos: \n";
    std::cout<<"\nSexo: "<<sexo<<"\n";
    std::cout<<"Edad: "<<edad<<"\n";
    std::cout<<"Estatura: "<<estatura<<"\n\n";

    system("pause");
    return 0;
}