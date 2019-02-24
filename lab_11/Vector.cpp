#include "Vector.h"

Vector::Vector() {
  _numOfElements = 0;
  _data = nullptr;
}

Vector::Vector(const Vector& vectorToCopy) {
  _numOfElements = vectorToCopy._numOfElements;
  _data = new int[_numOfElements];
  
  for(int i=0;i<_numOfElements;i++) {
    _data[i] = vectorToCopy._data[i];
  }
}

Vector::~Vector() {
  delete[] _data;
}

Vector Vector::create(int numOfElements) {
  Vector w;
  w._numOfElements = numOfElements;
  int* tabOfVectorElements = new int[w._numOfElements];
  w._data = tabOfVectorElements;

  for(int i=0;i<w._numOfElements;i++) {
    w._data[i] = 0;
  }
  return w;
}

void Vector::set(int index, int value) {
  _data[index] = value;
}

void Vector::Print() const {
  for(int i=0;i<_numOfElements;i++) {
    std::cout << _data[i] << " ";
  }
  std::cout << std::endl;
}

Vector Vector::operator+(const Vector& vector) {
  Vector w = Vector::create(_numOfElements);
  for(int i=0;i<_numOfElements;i++) {
    w.set(i, _data[i] + vector._data[i]);
  }
  return w;
}

Vector::operator double() const {
  double sum = 0;
  for(int i=0;i<_numOfElements;i++) {
    sum += pow(_data[i], 2);
  }
  return sqrt(sum);
}

Vector operator*(int skalar, const Vector& vector) {
  Vector w = Vector::create(vector._numOfElements);
  for(int i=0;i<vector._numOfElements; i++) {
    w.set(i, vector._data[i] * skalar);
  }
  return w;
}

Vector Vector::operator=(const Vector& vector) {
  if (&vector == this) {
    return *this;
  }

  _numOfElements = vector._numOfElements;
  delete[] _data;

  _data = new int[_numOfElements];
  
  for(int i=0;i<_numOfElements;i++) {
    (*this).set(i, vector._data[i]);
  }

  return *this;
}