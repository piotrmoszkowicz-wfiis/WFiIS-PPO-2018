#include "Vector.h"

Vector::Vector(int val) {
    _data[0] = val;
    _data[1] = val;
    _data[2] = val;
}

Vector::Vector(int x, int y, int z) {
    _data[0] = x;
    _data[1] = y;
    _data[2] = z;
}

void Vector::Print() const {
    std::cout << "(" << _data[0] << " " << _data[1] << " " << _data[2] << ")\n"; 
}

int& Vector::at(int index) {
    return _data[index];
}

int Vector::Dot(const Vector& vec) const {
    return _data[0] * vec._data[0] + _data[1] * vec._data[1] + _data[2] * vec._data[2];
}

Vector Vector::Times(const Vector& vec) const {
    return Vector(_data[1] * vec._data[2] - _data[2] * vec._data[1], - _data[0] * vec._data[2] + _data[2] * vec._data[0], _data[0] * vec._data[1] - _data[1] * vec._data[0]);
}

void Vector::Set(const Vector& vec) {
    _data[0] = vec._data[0];
    _data[1] = vec._data[1];
    _data[2] = vec._data[2];
}