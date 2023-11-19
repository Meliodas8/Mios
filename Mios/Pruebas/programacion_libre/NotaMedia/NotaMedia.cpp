#include <iostream>

int main(){

    float practicas,participacion,examen,res,porprac,porpar,porex;
    std::cout << "Escribe los datos que se te pediran a continuacion: " << "\n\n";
    std::cout << "Calificacion de las practicas: ";std::cin >> practicas;std::cout << "\n";
    std::cout << "Calificacion de la participacion: ";std::cin >> participacion;std::cout << "\n";
    std::cout << "Calificacion de los examenes: ";std::cin >> examen;std::cout << "\n";
    std::cout << "Porcentaje de las practicas ej(40%=40): ";std::cin >> porprac;std::cout << "\n";
    std::cout << "Porcentaje de la participacion ej(40%=40): ";std::cin >> porpar;std::cout << "\n";
    std::cout << "Porcentaje de los examenes ej(40%=40): ";std::cin >> porex;std::cout << "\n";
    
    res = (practicas * porprac + participacion * porpar + examen * porex) / 100.0;

    std::cout << "Aqui esta tu calificacion: " << res << "\n";


    system("pause");
    return 0;
}