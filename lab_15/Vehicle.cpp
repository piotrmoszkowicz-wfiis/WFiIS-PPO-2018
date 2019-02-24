#include "Vehicle.h"

char* Vehicle::name() const {
  return _name;
}

int Vehicle::numberOfWheels() const {
  return _numberOfWheels;
}

void Vehicle::copyName(const char* name) {
  int len = strlen(name) + 1;
  _name = new char[len];
  strcpy(_name, name);
}

void Vehicle::operator=(const Vehicle& vehicle) {
  int len = strlen(vehicle._name) + 1;
  delete [] _name;
  this->copyName(vehicle._name);
}