#pragma once
#include <iostream>
#include <cstring>

/*
 * Klasa przechowywująca łancuchy
 * @param (const char*) str - Łańcuch, który ma być przechowywany
*/
class MyString {
  public:
    MyString(const char* str);
    ~MyString();

    /*
     * Funkcja wypisująca łancuch z klasy
    */
    char* str() const;

    /*
     * Funkcja zamieniająca łancuch w klasie
     * @param (const char*) strToReplaceWith - Łańcuch, który mamy wpisać
    */
    void replace(const char* strToReplaceWith);

    /*
     * Funkcja zamieniająca łancuch w klasie
     * @param (const MyString&) strToReplaceWith - Klasa, której łancuch mamy wpisać
    */
    void replace(const MyString& strToReplaceWith);

  private:
    char* _string;

};

/*
 * Funkcja zamieniająca łancuchy pomiędzy dwoma klasami
 * @param (MyString&) str1 - Pierwsza klasa
 * @param (MyString&) str2 - Druga klasa
*/
void swap(MyString& str1, MyString& str2);