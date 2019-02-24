#pragma once
#include "Dzialanie.h"

class Dzielenie : public Dzialanie {
  public:
    /**
     * @brief Construct a new Dzielenie object
     * 
     * @param counter 
     * @param divider 
     */
    Dzielenie(int counter, int divider) {
      _numbers = new int[2];
      _numbers[0] = counter;
      _numbers[1] = divider;
    }
    /**
     * @brief Prints operation
     * 
     */
    void wypisz() const;
    /**
     * @brief Counts division
     * 
     * @return float 
     */
    float wylicz() const;
};
