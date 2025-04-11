#pragma once

#include "Engine.h"

class Vehicle {
public:
	string name;

	Vehicle() {
		this->engine = Engine(0, 0);
		this->name = "";
		this->color = "";
		this->year = 0;
	}

	Vehicle(string _name, int _horsepower, int _cylinders) {
		this->engine = Engine(_horsepower, _cylinders);
		this->name = _name;
	}

	Vehicle(string _color, int _year, int _horsepower, int _cylinders) {
		this->engine = Engine(_horsepower, _cylinders);
		this->color = _color;
		this->year = _year;
	}

	~Vehicle() {
		cout << "Deleting the vehicle\n";
	}

	void DisplayName() {
		cout << "Vehicle name: " << this->name << "\n";
	}

	void DisplayColor() {
		cout << "Vehicle color: " << this->color << "\n";
	}

	void DisplayYear() {
		cout << "Vehicle year: " << this->year << "\n";
	}

protected:
	Engine engine;
	string color;
	int year;
};
