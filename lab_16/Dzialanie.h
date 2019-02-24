#pragma once
#include <iostream>

class Dzialanie {
  public:
    /**
     * @brief Prints operator
     * 
     * @param dzialanie 
     */
    friend void wypisz(const Dzialanie& dzialanie) {
      dzialanie.wypisz();
    }
    /**
     * @brief Construct a new Dzialanie object
     * 
     */
    Dzialanie() {
      _numbers = nullptr;
    }
    /**
     * @brief Prints operation
     * 
     */
    virtual void wypisz() const = 0;
    /**
     * @brief Counts certain operation
     * 
     * @return float 
     */
    virtual float wylicz() const = 0;
    /**
     * @brief Destroy the Dzialanie object
     * 
     */
    ~Dzialanie() {
      delete[] _numbers;
    }
  protected:
    int* _numbers;
};