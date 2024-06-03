// 009_P9_Punteros.cpp : 
// Mau Cabrera
// Sintaxys de Punteros

#include <iostream>
#include <locale>
#include <stdlib.h>
#include <cstdlib>
#include <Windows.h>

int main()
{
    //Estructuras de Control
    system("pause");
    system("cls");
    Sleep(100);

    //Punteros
    int variable = 0;
    int* apuntador_variable = &variable; //Ampersand = & nos da dirección de memoria
    std::cout << "Valor de variable: " << variable << std::endl;
    //Modificamos el valor del puntero
    *apuntador_variable = 20;
    std::cout << "Valor del puntero: " << apuntador_variable << std::endl;
    std::cout << "Valor dentro del puntero: " << *apuntador_variable << std::endl;
    std::cout << "Valor de variable: " << variable << std::endl;
    std::cout << "Dirección de variable: " << &variable << std::endl;

    //borrar el apuntador
    apuntador_variable = NULL;
}