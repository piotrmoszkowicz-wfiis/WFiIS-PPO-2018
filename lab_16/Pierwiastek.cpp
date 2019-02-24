#include "Pierwiastek.h"
#include <cmath>

void Pierwiastek::wypisz() const {
  std::cout << "Pierwiastek liczby: " << _numbers[0] << "\n";
}

float Pierwiastek::wylicz() const {
  return sqrt(_numbers[0]);
}