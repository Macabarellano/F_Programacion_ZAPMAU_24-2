// 000_P1_Hablar_Usuario_.cpp : 
// Mauricio Cabrera
// Hablaremos con el usuario
// Utilizando los metodos del IOStream

//Librerias 
#include <iostream>
//Libreria para incluir diferentes idiomas
#include <locale>

int main()
{
    //Funcion para tener idioma español soportado
    setlocale(LC_ALL, "es_MX.UTF-8");
    std::cout << "ó    ñ  \nHello Stranger\n" << 
        "otras cosas" << std::endl ;
    //Sintaxys para hablar con el usuario
    std::cout << "Todo lo que yo";
    std::cout <<" escriba en las comillas" <<
        "aparecera en pantalla";
    // << Concatenara el texto

}
