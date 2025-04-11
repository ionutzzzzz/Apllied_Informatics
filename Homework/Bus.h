#include "Vehicle.h"

class Bus : public Vehicle {
public:
	int id;
	string identifier;
	
	Bus() {
		this->engine = Engine(0, 0);
		this->color = "";
		this->year = 0;
		this->name = "";
		this->id = 0;
		this->identifier = "";
		cout << "Bus created with default constructor.\n";
	}
	
	Bus(int _horsepowers, int _cylinders, string _color, int _year, string _name, int _id, string _identifier) {
		this->engine = Engine(_horsepowers, _cylinders);
		this->color = _color;
		this->year = _year;
		this->name = _name;
		this->id = _id;
		this->identifier = _identifier;
		cout << "Bus created with id " << _id << " and identifier " << _identifier << "\n";
	}
	
	~Bus() {
		delete this;
		cout << "Deleting the bus";
	}

protected:
	string driver;

	Bus(string _name, string _color, int _year, int _horsepower, int _cylinders, string _driver) {
		this->engine = Engine(_horsepower, _cylinders);
		this->name = _name;
		this->color = _color;
		this->year = _year;
		this->driver = _driver;
		cout << "Bus driver is: " << _driver << "\n";
	}

	~Bus() {
		delete this;
		cout << "Deleting the bus";
	}
};