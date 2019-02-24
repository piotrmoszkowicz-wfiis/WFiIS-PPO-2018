#include "Fraction.h"
#include "Maths.h"

std::ostream& operator<<(std::ostream& s, const Fraction& fraction) {
  s << fraction._counter << "/" << fraction._divider;
  return s;
}

Fraction operator*(int multiplier, const Fraction& fraction) {
  Fraction newF(fraction._counter * multiplier, fraction._divider);
  return newF;
}

Fraction::operator double() {
  return static_cast<double>(_counter) / static_cast<double>(_divider);
}

void Fraction::simplify() {
  int divider = Maths::gcd(_counter, _divider);
  _counter = _counter / divider;
  _divider = _divider / divider;
}

Fraction Fraction::operator*(const Fraction& fraction) {
  Fraction newF(_counter * fraction._counter, _divider * fraction._divider);
  newF.simplify();
  return newF;
}

const Fraction Fraction::operator+(const Fraction& fraction) {
  Fraction newF(_counter * fraction._divider + fraction._counter * _divider, fraction._divider * _divider);
  return newF;
}