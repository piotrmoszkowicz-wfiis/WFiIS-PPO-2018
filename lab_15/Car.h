#pragma once
#include "Vehicle.h"

class Car : public Vehicle {
  public:
    /**
     * @brief Construct a new Car object
     * 
     * @param name - Name of Car
     * @param plate - Plate number of Car
     */
    Car(const char* name, const char* plate) : Vehicle(name, 4) {
      this->copyPlate(plate);
    }

    /**
     * @brief Construct a new Car object from another Car instance
     * 
     * @param car - Car to copy from
     */
    Car(const Car& car) : Vehicle(car) {
      this->copyPlate(car._plate);
    }

    /**
     * @brief Destroy the Car object
     * 
     */
    ~Car() {
      delete[] _plate;
    }

    /**
     * @brief Returns plate number of Car
     * 
     * @return char* - Plate number
     */
    char* plate() const;

    /**
     * @brief Operator, which assigns car to another instance of car
     * 
     * @param car - Instance of Car
     */
    void operator=(const Car& car);
  private:
    void copyPlate(const char* plate);
    char* _plate;
};