// 010_P10_Arreglos_Dinamicos.cpp :
// Mau Cabrera
// Arreglos dinamicos - no posee memoria finita

#include <iostream>
#include <locale>
#include <string>

int main()
{//Funcion para tener idioma español soportado
    setlocale(LC_ALL, "es_MX.UTF-8");
    std::string* Titulos = NULL; //Se inicializa el puntero en vacio
    std::string* anio = NULL; 
    int tamanio = 0;
    std::cout << "Cuántos elementos quieres registrar?: " << std::endl;
    std::cin >> tamanio;

    Titulos = new std::string[tamanio];
    anio = new std::string[tamanio];

    //Capturar la info
    std::cout << "A ver ahora dame la información de los juegos:\n";
    for (int i = 0; i < tamanio; i++)
    {
        std::cout << "Ingresa el titulo del juego numero " << i + 1 << std::endl;
        if (i == 0)
        {
            std::cin.ignore();
        }
        getline(std::cin, Titulos[i]);
        std::cout << "Ingresa el año del juego numero " << i + 1 << std::endl;
        getline(std::cin, anio[i]);
        system("cls");
    }

    //Imprimir la info
    for (int j = 0; j < tamanio; j++)
    {
        std::cout << "El titulo del juego " << j + 1 << " es " << Titulos[j] << std::endl;
        std::cout << "El anio del juego " << j + 1 << " es " << anio[j] << std::endl;
    }

    //Limpieza de memoria
    delete[] Titulos;
    delete[] anio;
    Titulos = NULL;
    anio = NULL;
}