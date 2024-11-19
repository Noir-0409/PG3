#include "Car.h"
#include <iostream>

Car::Car()
{
	name = "車";
}

Car::Car(const char* name)
{
}

Car::~Car()
{
}

void Car::Ride()
{
	std::cout << name << "が走る" << std::endl;
}
