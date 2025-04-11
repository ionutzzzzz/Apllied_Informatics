#pragma once

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

	Engine(int _horsepower, int _cylinders)
		: horsepower(_horsepower), cylinders(_cylinders) {
		cout << "Engine created with: " << _horsepower << " horsepower and " << _cylinders << " cylinders\n";
	}

	~Engine() {
		cout << "Engine destroyed.\n";
	}

	void DisplayEngine() {	
		cout << "Engine has " << horsepower << " horsepower and " << cylinders << " cylinders\n";
	}
};