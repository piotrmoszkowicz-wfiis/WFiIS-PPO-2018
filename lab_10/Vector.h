#pragma once

#include <iostream>


class Vector {
    public:

        /**
         * @fn Vector
         * @brief konstruktor wektora
         * @param [int] wartosc wszystkich elementów wektora default = 1
        */

        explicit Vector(int val = 1);

        /**
         * @fn Vector
         * @brief konstruktor wektora
         * @param [int] x
         * @param [int] y
         * @param [int] z
        */

        Vector(int x, int y, int z);

        /**
         * @fn Print
         * @brief wypisuje wektor
        */

        void Print() const;

        /**
         * @fn at
         * @brief getter/setter elementu wektora
         * @param [int] index elementu
         * @return [int] referencja na element wektora
         */

        int& at(int index);

        /**
         * @fn Dot
         * @brief mnozy skalarnie wektorów
         * @param [Vector] wektor
         * @return [int] wynik mnozenia
        */

        int Dot(const Vector& vec) const;

        /**
         * @fn Times
         * @brief mnozy wektorowo wektory
         * @param [Vector] wektor
         * @return [Vector] wynik mnozenia
        */

        Vector Times(const Vector& vec) const;

        /**
         * @fn Set
         * @brief ustawia elementy wektora takie jak w przekazanym parametrze
         * @param [Vector] wektor
         */

        void Set(const Vector& vec);
    private:
        int _data[3]; /** < _data Tablica przechowywujaca elementy wektora */
};