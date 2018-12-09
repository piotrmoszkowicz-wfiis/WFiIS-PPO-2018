#pragma once 

#include "Vector.h"

class Matrix {
    public:

      /**
       * @fn Matrix
       * @brief konstruktor macierzy
       * @param [Vector] wektor
      */

      Matrix(const Vector& vec);

      /**
       * @fn Print
       * @brief wypisuje macierz
      */

      void Print() const;

      /**
       * @fn at
       * @brief getter/setter wiersza macierzy
       * @param [int] index wiersza
       * @return [Vector] referencja na wiersz macierzy
      */

      Vector& at(int index);

      /**
       * @fn Times
       * @brief mnozy macierz przez wektor
       * @param [Vector] wektor
       * @return [Vector] wynik mnozenia
      */

      Vector Times(const Vector& vec) const;
    private:
      Vector _data[3]; /** < _data Tablica przechowywujaca wiersze macierzy*/
};