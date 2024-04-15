// 003_P3_Estructuras_Control_.cpp : 
// Mauricio Cabrera
// Estructuras de control - If - If/Else
// Switch Case - Decisiones Multiples.
//

#include <iostream>
#include <string>


int main()
{
    //Toma de decisiones.
    //condicion - Se ejecutara siempre que se tenga un valor true o verdadero dentro del parentesis.
    int a = -1, b = 1;
    //Decisión sencilla o simple. se evalua lo que hay en el parentesis y si es verdadero
    //Se ejecuta lo que abrace las llaves.
    if (a < 0)
    {
        std::cout << "A es menor que 0" << std::endl;
    }
    if (b > 0)
    {
        std::cout << "B es mayor a 0\n";
    }
    //Decisión Doble. si no es verdad lo que esta dentro del parentesis se ejecuta 
    //Todo lo que hay en las llaves del ELSE
    std::string nombre;
    std::cout << "Ingresa tu nombre de usuario: \n";
    std::cin >> nombre;
    if (nombre == "Mau")
    {
        //Esto se ejecuta si el if es true
        std::cout << "Bienvenido " << nombre << std::endl;
    }
    else
    {
        //esto se ejecuta cuando todo lo demás menos true
        std::cout << "Ora saquese no lo conozco \n";
    }

    //Decisión Multiple.
    //Se evaluara la opción dentro del parentesis y se ejecutara el caso correspondiente
    //Normalmente se ejecuta en enteros!!!
    int opc = 0;
    std::cout << "Que opción quieres elegir? \n";
    std::cout << "1.- Start\n2.- Load\n3.-Options\n";
    std::cin >> opc;
    switch (opc)
    {
    case 1:
        std::cout << "Star" << std::endl;
        break;
    case 2:
        std::cout << "Load\n";
        break;
    case 3:
        std::cout << "Options:\n";
        break;
    default:
        std::cout << "Opción invalida" << std::endl;
        break;
    }

}