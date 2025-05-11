#pragma once

#include "Vehicle.h"

class Car : public Vehicle {
public:
    int id;
    string identifier;

    Car() : Vehicle() {
        this->id = 0;
        this->identifier = "";
        cout << "Car created with default constructor.\n";
    }

    Car(int _id, string _identifier) : Vehicle() {
        this->id = _id;
        this->identifier = _identifier;
        cout << "Car created with id " << _id << " and identifier " << _identifier << "\n";
    }

    Car(const std::string& carName) : Vehicle(carName) {}

    ~Car() override {
        cout << "Deleting the car";
    }

    void DisplayId() {
        cout << "Car owner: " << owner << "\n";
    }

    void DisplayIdentifier() {
        cout << "Car identifier: " << identifier << "\n";
    }

    void makeSound() override {
        std::cout << "Beep beep!\n";
    }

protected:
    string owner;
};
