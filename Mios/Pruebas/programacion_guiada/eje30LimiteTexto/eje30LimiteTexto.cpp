#include <iostream>
#include <string.h>

int main() {
    char texto[10];
    int longitud=0;
    int llave;
    do {
        llave=0;
        std::cout<<"Ingresa un texto con un minimo de 10 letras: ";
        gets(texto);
        longitud=strlen(texto);
        if (longitud>=10) {
            std::cout<<"Felicidades tu texto tiene 10 o mas letras 😊\n";
        } else {
            std::cout<<"Te he dicho 10 o mas letras estupido 🤬🤬 intentalo de nuevo\n";
            llave+=1;
        }
    } while (llave==1);
    
    system("pause");
    return 0;
}