#include "Suma.h"

void Suma::wypisz() const {
  std::cout << "Suma liczb: ";
  for(int i = 0;i < sizeof(_numbers)/sizeof(int) + 1; i++) {
    std::cout << _numbers[i] << " ";
  }
  std::cout << "\n";
}

float Suma::wylicz() const {
  int suma = 0;
  for(int i = 0;i < sizeof(_numbers)/sizeof(int) + 1; i++) {
    suma += _numbers[i];
  }
  return static_cast<float>(suma);
}