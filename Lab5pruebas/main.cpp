#include <iostream>
#include <memory>
#include <vector>
#include "Square.h"
#include "Shape.h"
#include "Circle.h"

int main()
{
	std::vector<std::shared_ptr<Shape>> shapes;

	shapes.push_back(std::make_unique<Circle>(5.0));
	shapes.push_back(std::make_unique<Square>(4.0));
	shapes.push_back(std::make_unique<Square>(3.0));
	shapes.push_back(std::make_unique<Square>(2.0));
	shapes.push_back(std::make_unique<Circle>(10.0));

	for (const auto& shapes : shapes) {
		std::cout << shapes->getName() << " area: " << shapes->calculateArea() << std::endl;
	}
}