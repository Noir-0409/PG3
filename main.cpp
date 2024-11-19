#include "stdio.h"
#include "Vehicle.h"
#include "Car.h"
#include "Bike.h"

int main() {

	Vehicle* vehicle[2];

	for (int i = 0; i < 2; i++) {
		if (i < 1) {
			vehicle[i] = new Car;
		} else {
			vehicle[i] = new Bike;
		}
	}

	for (int i = 0; i < 2; i++) {
		vehicle[i]->Ride();
	}

	for (int i = 0; i < 2; i++) {
		delete vehicle[i];
	}

return 0;

}