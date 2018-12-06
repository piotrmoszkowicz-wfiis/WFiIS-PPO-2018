#pragma once
#include <iostream>
#include <cstring>

class MyString {
  public:
    /*
     * Konstruktor klasy MyString
     * @param(const char* str) String, ktory ma byc przechowywany
    */
    MyString(const char* str);

    /*
     * Konstruktor kopiujacy klasy MyString
     * @param(const MyString& strToCpy) Instancja klasy do skopiowania
    */
    MyString(const MyString& strToCpy);

    /*
     * Destruktor klasy MyString
    */
    ~MyString();

    /*
     * Funkcja zwracajaca przechowywany string
    */
    char* str() const;

    /*
     * Funkcja dopisujaca string do string'a
     * @param(const MyString& strToCpy) Instancja klasy, ktorej string dopisujemy
    */
    void append(MyString strToAppend);

    /*
     * Funkcja wstawiajaca string do string'a
     * @param(const MyString& strToInsert) Instancja klasy, ktorej string wstawiamy
     * @param(int placeToInsert)           Miejsce, w ktore wstawiamy
    */
    void insert(const MyString strToInsert, int placeToInsert);
  private:
    char* _stringField;
    size_t _stringLength;
};