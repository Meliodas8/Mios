#include <iostream>
#include <cstdlib> // Para system
#include <cstring>  // Para strcpy, strcat
#include <dirent.h> // Para opendir, readdir, closedir

int main() {
    std::string prefijo = "magma-";
    const char* directorio = ".";  // Cambia "." a la ruta del directorio que desees explorar

    DIR* dir = opendir(directorio);
    if (dir == nullptr) {
        std::cerr << "Error al abrir el directorio." << std::endl;
        return 1;
    }

    struct dirent* entrada;
    while ((entrada = readdir(dir)) != nullptr) {
        if (entrada->d_type == DT_REG && strncmp(entrada->d_name, prefijo.c_str(), prefijo.size()) == 0) {
            // Si el archivo tiene el prefijo "magma-", ejecuta el comando
            char comando[256];  // Tamaño suficiente para almacenar el comando
            strcpy(comando, "java -jar ");
            strcat(comando, entrada->d_name);
            std::system(comando);
        }
    }

    closedir(dir);

    system("pause");
    return 0;
}
