#pragma once
#include <iostream>
#include <cmath>

class Vector {
  public:
    /*
     * Bazowy konstruktor klasy Vector
     * @return [Vector] Nowy wektor
    */
    Vector();

    /*
     * Konstruktor kopiujacy klasy Vector
     * @param [Vector&] vectorToCopy    Wektor, ktory kopiujemy
     * @return [Vector]                 Nowy wektor
    */
    Vector(const Vector& vectorToCopy);

    /*
     * Destruktor klasy Vector, czysci pamiec
    */
    ~Vector();

    /*
     * Funkcja ustawiajaca dany element wektora na dana wartosc
     * @param [Int] index               Index
     * @param [Int] value               Nowa wartosc
    */
    void set(int index, int value);

    /*
     * Funkcja, ktora printuje wektor
    */
    void Print() const;

    /*
     * Statyczna funkcja, która tworzy wektor o danej ilosci elementow
     * @param [Int] numOfElements       Ilosc elementow wektora
     * @return [Vector]                 Nowy wektor
    */
    static Vector create(int numOfElements);

    /*
     * Przeladowanie operatora dodajacego dwa wektory
     * @param [Vector&] vector          Wektor, ktory chcemy dodac
     * @return [Vector]                 Nowy wektor
    */
    Vector operator+(const Vector& vector);

    /*
     * Przeladowanie operatora przypisujacego wektor
     * @param [Vector&] vector          Wektor, ktory chcemy przypisac
     * @return [Vector]                 Nowy wektor
    */
    Vector operator=(const Vector& vector);

    /*
     * Przeladowanie double, ktory zwraca dlugosc wektora
     * @return [Double]                 Dlugosc wektora
    */
    operator double() const;

    /*
     * Przeladowanie operatora mnozacego wektor
     * @param [Int]     skalar          Skalar, przez ktory mnozymy elementy wektora
     * @param [Vector&] vector          Wektor, ktory chcemy przypisac
     * @return [Vector]                 Nowy wektor
    */
    friend Vector operator*(int skalar, const Vector& vector);
  private:
    int* _data;
    int _numOfElements;
};