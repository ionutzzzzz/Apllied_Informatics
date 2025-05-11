#pragma once
#include <iostream>
#include <string>

class VehicleBase {
protected:
  std::string name;

public:
  VehicleBase() = default;

  VehicleBase(const std::string& vehicleName) : name(vehicleName) {}

  static void Process(int number) {
      std::cout << "Vehicle number: " << number << "\n";
  }

  static void Process(const std::string& name) {
      std::cout << "Vehicle name: " << name << "\n";
  }

  static void Process(int number, const std::string& name) {
      std::cout << "Vehicle number: " << number << " with name: " << name << "\n";
  }

  virtual void makeSound() {
      std::cout << "Generic vehicle sound\n";
  }

  virtual ~VehicleBase() = default;

  virtual void DisplayName() {
      std::cout << "Vehicle name: " << name << "\n";
  }
};
