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

	~Brand() {
		delete this;
		cout << "Deleting the brand";
	}
};