#pragma once

class Vehicle {

public:

	Vehicle();
	virtual ~Vehicle();

	virtual void Ride();

	const char* name;

private:

};