#include <iostream>
#include <fstream>
#include <string>
int main()
{
    // Código para escribir texto en un archivo en C++
    //std::ofstream escritor("prueba.txt");
    //escritor << "Hola archivo" << std::endl;

    std::ifstream lector("prueba.txt");
    std::string linea;
    while (!lector.eof())
    {
        getline(lector, linea);
        std::cout << linea << std::endl;
    }
    std::cout << "FIN\n";
}