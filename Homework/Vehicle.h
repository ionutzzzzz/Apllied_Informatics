#include "Engine.h"

class Vehicle {
public:
	string name;

	void DisplayName() {
		cout << "Vehicle name: " << this->name << "\n";
	}

protected:
	Engine engine;
	string color;
	int year;
	
	Vehicle() {
		this->engine = Engine(0, 0);
		this->color = "";
		this->year = 0;
		this->name = "";
	}

	Vehicle(string _name, string _color, int _year, int _horsepower, int _cylinders) {
		this->engine = Engine(_horsepower, _cylinders);
		this->name = _name;
		this->color = _color;
		this->year = _year;
	}

	~Vehicle() {
		delete this;
	}

	void DisplayColor() {
		cout << "Vehicle color: " << this->color << "\n";
	}

	void DisplayYear() {
		cout << "Vehicle year: " << this->year << "\n";
	}
};
