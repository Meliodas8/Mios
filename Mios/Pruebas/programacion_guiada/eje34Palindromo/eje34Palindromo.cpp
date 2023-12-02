#include <iostream>
#include <string.h>

int main() {
    char texto[40],textoRev[40];
    int llave;
    do {
        llave=0;
        std::cout<<"Escribe un palindromo: ";
        std::cin>>texto;
        strcpy(textoRev,texto);
        strrev(textoRev);
        if (strcmp(texto,textoRev)!=0) {
            std::cout<<"Esa no es una palabra palindromo "<<texto<<" "<<textoRev<<" lo ves no es palindroma\n";
            llave+=1;
        } else {
            std::cout<<"Bien esa es una palabra palindromo\n";
        }
    } while (llave>=1);
    
    system("pause");
    return 0;   
}