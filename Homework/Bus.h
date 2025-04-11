#pragma once

#include "Vehicle.h"

class Bus : public Vehicle {
public:
	int id;
	string identifier;
	
	Bus() {;
		this->color = "";
		this->year = 0;
		this->name = "";
		this->id = 0;
		this->identifier = "";
		this->driver = "";
		cout << "Bus created with default constructor.\n";
	}
	
	Bus(int _id, string _identifier) {
		this->id = _id;
		this->identifier = _identifier;
		cout << "Bus created with id " << _id << " and identifier " << _identifier << "\n";
	}

	Bus(string _driver) {
		this->driver = _driver;
		cout << "Bus driver is: " << _driver << "\n";
	}

	~Bus() {
		cout << "Deleting the bus";
	}

	void DisplayDriver() {
		cout << "Bus driver: " << driver << "\n";
	}
	void DisplayId() {
		cout << "Bus id: " << id << "\n";
	}

protected:
	string driver;
};