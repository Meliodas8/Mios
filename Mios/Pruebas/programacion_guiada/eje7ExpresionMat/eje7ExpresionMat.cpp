#include <iostream>
#include <math.h>

int main(){

    float x,y,res,yCuadradaMenosUno;
    std::cout << "Pon los datos solicitados \n";
    std::cout << "Valor de x: ";std::cin >> x;
    ingresaYdeNuevo:
    std::cout << "Valor de y: ";std::cin >> y;
    
    yCuadradaMenosUno=(pow(y,2)-1);
    if(yCuadradaMenosUno == 0){
        std::cout << "el valor de " << "y" << " no es valido ingresalo de nuevo: \n";
        goto ingresaYdeNuevo;
    }
    res=(sqrt(x)) / yCuadradaMenosUno;
    
    std::cout.precision(3);
    std::cout << "Aqui esta tu resultado: " << res << "\n";

    system("pause");
    return 0;
}