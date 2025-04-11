#include <iostream>
using std::cout;
using std::string;

class Engine {
public:
	int horsepower;
	int cylinders;
	
	Engine() {
		this->horsepower = 0;
		this->cylinders = 0;
		cout << "Engine created with default constructor.\n";
	}

	Engine(int _horsepower, int _cylinders) {
		this->horsepower = _horsepower;
		this->cylinders = _cylinders;
		cout << "Engine created with: " << _horsepower << " horsepower and " << _cylinders << " cylinders\n";
	}

	~Engine() {
		cout << "Engine destroyed.\n";
		delete this;
	}

	void Info() {
		cout << "Engine has " << this->horsepower << " horsepower and " << this->cylinders << " cylinders\n";
	}
};