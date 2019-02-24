#pragma once
#include <iostream>
#include "Fraction.h"

class FractionArray {
  public:
    FractionArray(int size);
    ~FractionArray();
    Fraction& operator[](unsigned index);
    const Fraction& operator[](unsigned index) const;
  private:
    Fraction* _data;
    int _size;
};
