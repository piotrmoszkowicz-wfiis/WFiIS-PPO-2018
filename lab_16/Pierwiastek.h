#pragma once
#include "Dzialanie.h"

class Pierwiastek : public Dzialanie {
  public:
    /**
     * @brief Construct a new Pierwiastek object
     * 
     * @param sq 
     */
    Pierwiastek(int sq) {
      _numbers = new int[1];
      _numbers[0] = sq;
    }
    /**
     * @brief Prints operation
     * 
     */
    void wypisz() const;
    /**
     * @brief Counts square root
     * 
     * @return float 
     */
    float wylicz() const;
};
