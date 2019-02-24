#include "Car.h"

char* Car::plate() const {
  return _plate;
}

void Car::copyPlate(const char* plate) {
  int len = strlen(plate) + 1;
  _plate = new char[len];
  strcpy(_plate, plate);
}

void Car::operator=(const Car& car) {
  this->Vehicle::operator=(car);
  delete[] _plate;
  this->copyPlate(car._plate);
}