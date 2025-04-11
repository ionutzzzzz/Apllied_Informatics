#include <iostream>
#include <string>

#include "Vehicle.h"
#include "Car.h"
#include "Bus.h"
#include "Brand.h"
#include "Engine.h"

using namespace std;

int main() {
	
	Engine engine(150, 4);
	cout << "\n";
	engine.DisplayEngine();
	cout << "\n";

	Vehicle vehicle("red", 2005, 100, 4);
	cout << "\n";
	vehicle.DisplayColor();
	vehicle.DisplayYear();
	cout << "\n";

	Car car(1, "ABC123");
	cout << "\n";
	car.DisplayId();
	car.DisplayIdentifier();
	cout << "\n";

	Bus bus(2, "XYZ456");
	cout << "\n";
	bus.DisplayId();
	bus.DisplayDriver();
	cout << "\n";

	Brand brand("Toyota", "Japan");
	cout << "\n";
	brand.DisplayName();
	brand.DisplayCountry();
	brand.DisplayFounder();
	cout << "\n";

	return 0;
}