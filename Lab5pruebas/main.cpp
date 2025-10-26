#include <iostream>
#include "Square.h"
#include "Shape.h"

int main()
{
	Shape* soyUnaFigura = new Square(2.0);

	double resultado = soyUnaFigura->calculateArea();
    std::cout << "El area de un cuadrado con area 2 es!\n";
	std::cout << resultado;

	//No inclui la rama para la forma pero de igual forma lo hago para el pulll request
}