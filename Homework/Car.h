#include "Vehicle.h"

class Car : public Vehicle {
public: 
	int id;
	string identifier;

	Car() {
		this->engine = Engine(0, 0);
		this->color = "";
		this->year = 0;
		this->name = "";
		this->id = 0;
		this->identifier = "";
		cout << "Car created with default constructor.\n";
	}

	Car(int _horsepowers, int _cylinders, string _color, int _year, string _name, int _id, string _identifier) {
		this->engine = Engine(_horsepowers, _cylinders);
		this->color = _color;
		this->year = _year;
		this->name = _name;
		this->id = _id;
		this->identifier = _identifier;
		cout << "Car created with id " << _id << " and identifier " << _identifier << "\n";
	}

	~Car() {
		delete this;
		cout << "Deleting the car";
	}

protected:
	string owner;
	
	Car(string _name, string _color, int _year, int _horsepower, int _cylinders, string _owner) {
		this->engine = Engine(_horsepower, _cylinders);
		this->name = _name;
		this->color = _color;
		this->year = _year;
		this->owner = _owner;
		cout << "Car owener is: " << _owner << "\n";
	}

	~Car() {
		delete this;
		cout << "Deleting the car";
	}
};