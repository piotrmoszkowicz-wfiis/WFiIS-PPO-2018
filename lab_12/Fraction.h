#pragma once

#include <iostream>

class Fraction {
  friend std::ostream& operator<<(std::ostream& s, const Fraction& fraction);
  friend Fraction operator*(int multiplier, const Fraction& fraction);
  public:
    Fraction(int c = 1, int d = 1) : _counter(c), _divider(d) {}
    /*
      * @fn simplify
      * @brief Funkcja, ktora upraszcza ulamek
    */
    void simplify();
    operator double();
    Fraction operator*(const Fraction& fraction);
    const Fraction operator+(const Fraction& fraction);
  private:
    int _counter;
    int _divider;
};
