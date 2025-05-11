#pragma once

#include "Engine.h"
#include "VehicleBase.h"

class Vehicle : public VehicleBase {
public:
   Vehicle() : VehicleBase() {
       this->engine = Engine(0, 0);
       this->color = "";
       this->year = 0;
   }

   Vehicle(string _name, int _horsepower, int _cylinders)
       : VehicleBase(_name) {
       this->engine = Engine(_horsepower, _cylinders);
   }

   Vehicle(string _color, int _year, int _horsepower, int _cylinders)
       : VehicleBase() {
       this->engine = Engine(_horsepower, _cylinders);
       this->color = _color;
       this->year = _year;
   }

   Vehicle(const std::string& vehicleName)
       : VehicleBase(vehicleName) {
   }

   virtual ~Vehicle() override {
       cout << "Deleting the vehicle\n";
   }

   virtual void DisplayName() override {
       cout << "Vehicle name: " << name << "\n";
   }

   virtual void DisplayColor() {
       cout << "Vehicle color: " << this->color << "\n";
   }

   virtual void DisplayYear() {
       cout << "Vehicle year: " << this->year << "\n";
   }

   void makeSound() override {
       std::cout << "Vroom vroom!\n";
   }

protected:
   Engine engine;
   string color;
   int year;
};
