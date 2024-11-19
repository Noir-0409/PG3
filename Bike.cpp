#include "Bike.h"
#include <iostream>

Bike::Bike()
{
	name = "バイク";
}

Bike::Bike(const char* name)
{
}

Bike::~Bike()
{
}

void Bike::Ride()
{
	std::cout << name << "が走る" << std::endl;
}
