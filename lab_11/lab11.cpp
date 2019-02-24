// Prosze dopisac kod, dodac nowe pliki, tak aby program wykonywal
// sie, a wynik jego dzialania byl taki sam jak podany na koncu tego
// pliku.

// Prosze napisac klasę Vector reprezentujacą wektor. Ma ona możliwość
// operacji na wektorach:
// dodawania + dwóch wektorów
// mnożenia * przez liczbę
// wyliczanie długości wektora (poprzez konwersję)
// (nie zmieniają one obiektów dodawanych, mnożonych, etc.)
// 
// przypisania = (zmienia obiekt, do którego przypisujemy)

// Pliku Main.cpp nie wolno modyfikowac.
// Program prosze kompilowac przynajmniej z flaga -Wall.
// Makefile powinien zawierac rowniez cel "clean", ktory usuwa pliki
// obiektowe i plik wykonywalny.


#include "Vector.h"
#include <iostream>

int main ()
{
  Vector v1 = Vector::create(6);
  v1.set(2,3);

  Vector v2 = v1;
  v2.set(1,-3);

  v1.Print();
  v2.Print();

  const Vector v3 = v1+v2;
  std::cout << "Suma: "; 
  v3.Print();
  std::cout << "Przed przypisaniem: "; 
  v1.Print();

  double val = v3;
  std::cout << "Dlugosc v3: " << val << std::endl; 

  Vector v4 = 3*v3;
  std::cout << "Razy 3: ";
  v4.Print();

// Dla dociekliwych przypisanie //
  Vector v5 = Vector::create(4);
  v4 = v1 = v5;
  v4 = v4;
  std::cout << "Ostatni: ";
  v4.Print();
// 

  return 0;
}
/* wynik dzialania programu:

0 0 3 0 0 0 
0 -3 3 0 0 0 
Suma: 0 -3 6 0 0 0 
Jak przed sumowaniem: 0 0 3 0 0 0 
Dlugosc v3 6.7082
Razy 3: 0 -9 18 0 0 0 

// część dla dociekliwych
Ostatni: 0 0 0 0 

*/
