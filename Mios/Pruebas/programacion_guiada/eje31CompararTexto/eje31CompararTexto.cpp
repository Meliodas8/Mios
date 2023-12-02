#include <iostream>
#include <string.h>

int main() {
    char texto1[]="ayer",texto2[]="viernes";
    int comparacion;
    comparacion=strcmp(texto1,texto2);
    if(comparacion==0) {
        std::cout<<"Los dos textos son iguales\n";
    } 
    if(comparacion!=0) {
        std::cout<<"Los dos textos son diferentes\n";
        if(comparacion>0) {
            std::cout<<"el texto 1 es mayor que el texto 2\n";
        }
        if(comparacion<0) {
            std::cout<<"el texto 1 es menor que el texto 2\n";
        }
    }
    system("pause");
    return 0;
}