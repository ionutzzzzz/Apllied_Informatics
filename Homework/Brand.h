#pragma once

#include "Car.h"

class Brand : public Car {
public:
	string name;
	string country;

	Brand() {
		this->name = "";
		this->country = "";
		cout << "Brand created with default constructor.\n";
	}

	Brand(string _name, string _country) {
		this->name = _name;
		this->country = _country;
		cout << "Brand created with name: " << _name << " and country: " << _country << "\n";
	}

	Brand(string _founder) {
		this->founder = _founder;
		cout << "Brand founded by: " << _founder << "\n";
	}

	~Brand() {
		cout << "Deleting the brand";
	}

	void DisplayName() {
		cout << "Brand name: " << name << "\n";
	}

	void DisplayFounder() {
		cout << "Brand founder: " << founder << "\n";
	}

	void DisplayCountry() {
		cout << "Brand country: " << country << "\n";
	}

protected: 
	string founder;
};