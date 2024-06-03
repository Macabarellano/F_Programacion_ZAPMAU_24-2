// 007_Estructuras_Control_V3.cpp : 
// Mauricio Cabrera   
// 
// 
#include <iostream>
#include <random>

int main()
{
    //Declaramos el semillero para el random
    srand(time(NULL));
    //Hacer 3 matrices
    int matriz[3][3];
    int matriz2[5][5];
    int matriz3[10][10];

    //Rellenar matrices
    for (int i = 0; i < 3; i++)//Recorrido de Columnas
    {
        for (int j = 0; j < 3; j++)//Recorrido de Filas
        {
            matriz[i][j] = rand() % 9;
         }
    }

    //Mostrar matriz
    for (int i = 0; i < 3; i++)//Recorrido de Columnas
    {
        for (int j = 0; j < 3; j++)//Recorrido de Filas
        {
            std::cout << "[" << matriz[i][j] << "] ";
        }
        std::cout << std::endl;
    }
}
