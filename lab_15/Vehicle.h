#pragma once
#include <iostream>
#include <cstring>

class Vehicle {
  public:
    /**
     * @brief Construct a new Vehicle object
     * 
     * @param name - Name of the vehicle
     * @param numberOfWheels - Number of wheels of the vehicle
     */
    Vehicle(const char* name, const int numberOfWheels = 0) : _numberOfWheels(numberOfWheels) {
      this->copyName(name);
    }

    /**
     * @brief Construct a new Vehicle object from another one
     * 
     * @param vehicle - Instance of Vehicle
     */
    Vehicle(const Vehicle& vehicle) : _numberOfWheels(vehicle._numberOfWheels) {
      this->copyName(vehicle._name);
    }

    /**
     * @brief Destroy the Vehicle object
     * 
     */
    ~Vehicle() {
      delete[] _name;
    } 

    /**
     * @brief Returns name of Vehicle
     * 
     * @return char* - Vehicle name
     */
    char* name() const;

    /**
     * @brief Returns number of Vehicle's wheels.
     * 
     * @return int - Number of wheels
     */
    int numberOfWheels() const;
    void operator=(const Vehicle& vehicle);
  private:
    void copyName(const char* name);
    char* _name; 
    int _numberOfWheels = 0;
};