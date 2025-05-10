#pragma once
#include "Bus.h"

class PublicBus : public Bus {
public:	
	int maxCapacity;
	int distanceCrossed;

	PublicBus()	{
		this->distanceCrossed = 0;
		this->maxCapacity = 0;
	}

	PublicBus(string _name, int _distance, int _maxcapacity) {
		this->name = _name;
		this->distanceCrossed = _distance;
		this->maxCapacity = _maxcapacity;
	}

	~PublicBus() {
		cout << "Deleting Public Bus\n";
	}

	void ShowMaximumCapacity() {
		cout << "Maximum capacity of the bus is: " << this->maxCapacity << "\n";
	}

	void ShowDistanceCrossed() {
		cout << "Distance driven: " << this->distanceCrossed << "\n";
	}

	void ShowBusProperties() {
		cout << "Driver name: " << this->name << "\n";
	}
};