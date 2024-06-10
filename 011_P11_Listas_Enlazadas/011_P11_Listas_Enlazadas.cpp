// Mauricio Cabrera
// Listas enlazadas

#include <iostream>
#include <stdio.h>
#include <locale>
#include <windows.h>
#include <string>


class Alumno
{
public:
    int edad;
    std::string Name;
    Alumno* next;
};

//Función para imprimir la lista recibe 1 dato
//La función tiene tipo de funcion
//Puede recibir o no datos
//Puede regresar o no datos
void imprimir_lista(Alumno* n)
{
    while (n != NULL)
    {
        std::cout << "Tiene: " << n->edad << " años y se llama:" << std::endl;
        std::cout << n->Name << "" << std::endl;
        n = n->next;
    }
}

void main()
{
    Alumno* Lucio = NULL;
    Alumno* Benjamin = NULL;
    Alumno* Susana = NULL;

    Lucio = new Alumno();
    Benjamin = new Alumno();
    Susana = new Alumno();

    Lucio->edad = 20;
    Lucio->Name = "Luis Perez";
    Lucio->next = Benjamin;

    Benjamin->edad = 20;
    Benjamin->Name = "Juan Gonzalez";
    Benjamin->next = Susana;

    Susana->edad = 21;
    Susana->Name = "Maria Rodriguez";
    Susana->next = NULL;
   
    //Impresion de la lista
    //Invocas la nave espacial
    //Envias un dato que recibe la función
    imprimir_lista(Lucio);
    imprimir_lista(Lucio);
    std::cout << Lucio;
}