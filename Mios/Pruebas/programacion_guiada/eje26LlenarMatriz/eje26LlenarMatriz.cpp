#include <iostream>

int main() {
    int matriz[100][100],filas,columnas;
    std::cout << "Elige la cantidad de filas de tu matriz: ";
    std::cin >> filas;
    std::cout << "Elige la cantidad de columnas de tu matriz: ";
    std::cin >> columnas;
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            std::cout << "Ingresa el valor de la posicion " << i+1 << "," << j+1 << " : ";
            std::cin >> matriz[i][j];
        }
        
    }
    std::cout << "\n\n";
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            std::cout << matriz[i][j] << " ";
        }
        std::cout << "\n";
    }
    std::cout << "\n\n";
    
    
    system("pause");
    return 0;
}