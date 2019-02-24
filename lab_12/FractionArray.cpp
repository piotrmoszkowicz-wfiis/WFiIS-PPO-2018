#include "FractionArray.h"

FractionArray::FractionArray(int size) {
  _data = new Fraction[size];
  _size = size;
}

FractionArray::~FractionArray() {
  delete [] _data;
}

Fraction& FractionArray::operator[](unsigned index) {
  if (index > _size) {
    Fraction* newData;
    int newLength = index + 1;

    newData = new Fraction[newLength];
    for(int i=0;i<_size;i++) {
      newData[i] = _data[i];
    }
    for(int i=_size;i<newLength;i++) {
      newData[i] = Fraction();
    }
    delete [] _data;

    _size = newLength;
    _data = newData;

  }
  return _data[index];
}

const Fraction& FractionArray::operator[](unsigned index) const {
  if (index > _size) {
    return _data[_size - 1];
  }
  return _data[index];
}