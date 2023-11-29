#include <iostream>

int main() {
    int filMatrizA,colMatrizA,filMatrizB,colMatrizB,llave;
    do {
        llave=0;
        std::cout << "Ingresa las medidas de la matriz A: ";
        std::cin >> filMatrizA >> colMatrizA;
        std::cout << "Ingresa las medidas de la matriz B: ";
        std::cin >> filMatrizB >> colMatrizB;
        if(filMatrizA==colMatrizA && filMatrizB==colMatrizB && filMatrizA==colMatrizB) {
            int matrizA[filMatrizA][colMatrizA],matrizB[filMatrizB][colMatrizB];
            int llave2=1;
            while (llave2==1) {
                llave2=0;
                for (int i = 0; i < filMatrizA; i++) {
                    for (int j = 0; j < colMatrizA; j++) {
                        std::cout<<"Ingresa los datos de la matriz A en la posicion["<<i+1<<"]["<<j+1<<"]: ";
                        std::cin>>matrizA[i][j];
                    }
                }
            
                for (int i = 0; i < filMatrizB; i++) {
                    for (int j = 0; j < colMatrizB; j++) {
                        std::cout<<"Ingresa los datos de la matriz B en la posicion["<<i+1<<"]["<<j+1<<"]: ";
                        std::cin>>matrizB[i][j];
                    }
                }
                for (int i = 0; i < filMatrizA; i++) {
                    for (int j = 0; j < colMatrizA; j++) {
                        if (matrizA[i][j]==matrizB[j][i] && matrizA[i][j]==matrizB[j][i]) {
                            
                        } else if (llave2==0) {
                            std::cout<<"Tu matriz A y B no son simetricas intentalo de nuevo\n";
                            llave2=1;
                        }
                    }
                }
            } 
        } else {
            llave+=1;
            std::cout << "Tu matriz A y B no son cuadradas intentalo de nuevo\n";
        }
    } while (llave==1);
    std::cout<<"Felicidades humano\n";
    
    system("pause");
    return 0;
}