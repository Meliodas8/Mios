#include <iostream>

int main(){

    float practicas,participacion,examen,res;
    std::cout << "Escribe los datos que se te pediran a continuacion: " << "\n\n";
    std::cout << "Calificacion de las practicas: ";std::cin >> practicas;std::cout << "\n";
    std::cout << "Calificacion de la participacion: ";std::cin >> participacion;std::cout << "\n";
    std::cout << "Calificacion de los examenes: ";std::cin >> examen;std::cout << "\n";
    //practicas=practicas*0.40;
    practicas*=0.40;
    //participacion=participacion*0.20;
    participacion*=0.20;
    //examen=examen*0.40;
    examen*=0.40;
    res=practicas+participacion+examen;
    std::cout << "Aqui esta tu calificacion: " << res << "\n";


    system("pause");
    return 0;
}