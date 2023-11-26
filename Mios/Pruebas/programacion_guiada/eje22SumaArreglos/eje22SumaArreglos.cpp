#include <iostream>

int main() {
    int numeros[]={1,2,3,4,5},suma=0;
    for (int i = 0; i < 5; i++) {
        suma+=numeros[i];
            std::cout << numeros[i];
        if (i<4) {
            std::cout << "+";
        }
        
        
    }
    std::cout << "\nAqui esta tu suma: " << suma << "\n"; 
    
    system("pause");
    return 0;
}