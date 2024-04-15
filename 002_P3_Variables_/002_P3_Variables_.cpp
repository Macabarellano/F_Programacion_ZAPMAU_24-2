// 002_P3_Variables_.cpp : 
// Mauricio Cabrera
// En esta práctica aprenderemos la sintaxys para comunicarnos con el usuario
// Solicitar datos en diferentes tipos de variables y mostrarlas


#include <iostream>
#include <locale>

int main()
{ //Funcion para tener idioma español soportado
    setlocale(LC_ALL, "es_MX.UTF-8");
    
    //Tipo de dato + nombre + declaración de inicialización
    bool bandera = false;
   
    //Imprimimos el valor de la bandera
    std::cout << "El valor de la variable booleana llamada bandera es: "<<bandera<<std::endl;
    
    //Declarar variable
    int edad = 0;
    //Imprimir valor inicializado
    std::cout<<"El valor de la variable entera llamada edad es: " << edad << std::endl;
    //Solicitamos al usuario su edad
    std::cout<<"¿Cuál es tu edad?\n";
    //Recibimos la edad del usuario
    std::cin>>edad;
    std::cout<< std::endl;
    //Volver a imprimir el dato modificado
    std::cout<<"Entonces tienes: "<< edad << " años\n";

    //Realizar las siguientes acciones para los siguientes tipos de datos
    //Declarar variable
    //Imprimir valor inicializado
    //Solicitamos al usuario
    //Recibimos la variable del usuario
    //Volver a imprimir el dato modificado

    float // Decimales
        char // Caracteres
        double // Numeros largos
        string // cadenas de caracteres ojo este necesita libreria y protocolo.
}
