#include <iostream>
#include <cstdlib>
#include <ctime>

int main(){
    std::srand(static_cast<unsigned int>(std::time(0)));
    int numeroAencontrar = 1 + std::rand() % 10;
    int numeroIngresado;
    

    do{
        std::cout << "Adivina un numero entre el 1 y el 10: ";
        std::cin >> numeroIngresado;

    if(numeroIngresado == numeroAencontrar){
        std::cout << "Bien jugado perrooo\n";
    }
    else{
        std::cout << "Ja, Sigue intentando pringao\n";
    }

    } while (numeroIngresado != numeroAencontrar);

    system("pause");
    return 0;
}