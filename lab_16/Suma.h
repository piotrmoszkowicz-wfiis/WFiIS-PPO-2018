#pragma once
#include "Dzialanie.h"
#include <cstring>

class Suma : public Dzialanie {
  public:
    /**
     * @brief Construct a new Suma object
     * 
     * @param numbers 
     * @param count 
     */
    Suma(int* numbers, int count) {
      _numbers = new int[count];
      memcpy(_numbers, numbers, count * sizeof(int));
    }
    /**
     * @brief Prints operation
     * 
     */
    void wypisz() const;
    /**
     * @brief Counts sum of numbers
     * 
     * @return float 
     */
    float wylicz() const;
};
