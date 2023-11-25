#include <iostream>
#include <time.h>

int main() {
    int numero,aleatorio,contador=0;
    srand(time(NULL));
    aleatorio=1+rand()%100;
    do
    {
        std::cout << "Adivina el numero que esta entre el 1 y el 100: ";
        std::cin >> numero;
        if (numero<aleatorio) {
            std::cout << "Enserio necesitas mi ayuda ufffff el numero aleatorio es mayor\n";
        } else if (numero>aleatorio) {
            std::cout << "Enserio necesitas mi ayuda ufffff el numero aleatorio es menor\n";
        }
        contador++;
        
    } while (numero!=aleatorio);
    std::cout << "\nEnhorabuena solo has necesitado " << contador << " intentos 👌... pringao\n\n";
    
    system("pause");
    return 0;
}