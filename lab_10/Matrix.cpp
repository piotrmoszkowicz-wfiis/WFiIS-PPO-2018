#include "Matrix.h"

Matrix::Matrix(const Vector& vec) {
    _data[0] = vec;
    _data[1] = vec;
    _data[2] = vec;
}

void Matrix::Print() const {
    for(int i = 0; i < 3; i++) _data[i].Print();
}

Vector& Matrix::at(int index) {
    return _data[index];
}

Vector Matrix::Times(const Vector& vec) const {
    return Vector(_data[0].Dot(vec), _data[1].Dot(vec), _data[2].Dot(vec));
}