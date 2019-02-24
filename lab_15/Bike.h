#pragma once
#include "Vehicle.h"

class Bike : public Vehicle {
  public:
    /**
     * @brief Construct a new Bike object
     * 
     * @param name - Name of the bike
     */
    Bike(const char* name) : Vehicle(name, 2) {}

    /**
     * @brief Destroy the Bike object
     * 
     */
    ~Bike() = default;
};