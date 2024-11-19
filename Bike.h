#pragma once
#include "Vehicle.h"

class Bike : public Vehicle {

public:

	Bike();
	Bike(const char* name);
	~Bike();

	void Ride() override;

private:

};