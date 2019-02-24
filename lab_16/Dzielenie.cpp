#include "Dzielenie.h"

void Dzielenie::wypisz() const {
  std::cout << "Dzielenie liczb: " << _numbers[0] << " " << _numbers[1] << "\n";
}

float Dzielenie::wylicz() const {
  return static_cast<float>(_numbers[0] / _numbers[1]);
}