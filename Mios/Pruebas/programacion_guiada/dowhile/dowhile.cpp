#include <iostream>

int main() {
    char letra;

    do {
        std::cout << "Presiona la letra a: "; std::cin >> letra;
    } while (letra=='a');

    std::cout << "\n";

    std::cout << "--Te dije que presionaras la letra a--\n\n";

    system("pause");
    return 0;
}