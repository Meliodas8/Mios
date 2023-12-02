#include <iostream>
#include <string.h>


int main() {
    char texto1[40],texto2[40];
    int llave;
    do {
        llave=0;
        std::cout<<"Ingresa un texto: ";
        std::cin>>texto1;
        std::cout<<"Ingresa el mismo texto sin tomar en cuenta las mayusculas o minusculas texto: ";
        std::cin>>texto2;
        strupr(texto1);
        strupr(texto2);
        if (strcmp(texto1,texto2)!=0) {
            std::cout<<"Esos textos no son iguales 😡, mira este texto "<<texto1<<" y este texto "<<texto2<<" no son iguales. Intentalo de nuevo\n";
            llave+=1;
        } else {
            std::cout<<"Muy bien estos textos si son iguales\n";
        }
    } while (llave==1);
    
    system("pause");
    return 0;
}