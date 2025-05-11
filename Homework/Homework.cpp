#include <iostream>
#include <string>

#include "Vehicle.h"
#include "Car.h"
#include "Bus.h"
#include "Brand.h"
#include "Engine.h"
#include "PublicBus.h"

#include "VehicleBase.h"

using namespace std;

int main() {
	
	/*Engine engine(150, 4);
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


	cout << "De aici:\n";
	PublicBus pbus("John", 30, 10);
	cout << "\n";
	pbus.ShowBusProperties();
	cout << "\n";*/


	cout << "\nPolimorfism static:\n";
	cout << "----------------------------------------\n";
	VehicleBase::Process(42); 
	VehicleBase::Process("Luxury Car");
	VehicleBase::Process(1, "Sport Car");

	cout << "\nPolimorfism dinamic:\n";
	cout << "----------------------------------------\n";
	Vehicle* vehicles[3];

	vehicles[0] = new Vehicle("Generic Vehicle");
	vehicles[1] = new Car(std::string("Sports Car"));
	vehicles[2] = new Car(std::string("Family Car"));

	cout << "Each vehicle makes its unique sound:\n";
	for (int i = 0; i < 3; i++) {
		vehicles[i]->DisplayName();
		vehicles[i]->makeSound();
		cout << "----------------------------------------\n";
	}

	for (int i = 0; i < 3; i++) {
		delete vehicles[i];
	}

	return 0;
}