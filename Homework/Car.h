#pragma once

#include "Vehicle.h"

class Car : public Vehicle {
public: 
	int id;
	string identifier;

	Car() {
		this->id = 0;
		this->identifier = "";
		cout << "Car created with default constructor.\n";
	}

	Car(int _id, string _identifier) {
		this->id = _id;
		this->identifier = _identifier;
		cout << "Car created with id " << _id << " and identifier " << _identifier << "\n";
	}

	Car(string _owner) {
		this->owner = _owner;
		cout << "Car owener is: " << _owner << "\n";
	}

	~Car() {
		cout << "Deleting the car";
	}

	void DisplayId() {
		cout << "Car owner: " << owner << "\n";
	}
	void DisplayIdentifier() {
		cout << "Car identifier: " << identifier << "\n";
	}
protected:
	string owner;

};