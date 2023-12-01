#include <iostream>
#include <string.h>

int main() {
    char texto1[]="programador novato";
    char texto2[10];
    strcpy(texto2,texto1);
    std::cout<<texto2<<" "<<strlen(texto2)<<"\n";
    system("pause");
    return 0;
}