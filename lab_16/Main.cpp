/*
 Celem zadania jest napisanie kilku klas zwiaznych relacja
 dziedziczenia.  Klasy te opisuja elementarne operacje matematyczne. 
 Kazde działanie ma jakies polimorficzne metody i konieczna infrastrukture.
 

 Pliku Main.cpp nie modyfikujemy.

 Program prosze kompilowac przynajmniej z flaga -Wall.
 Makefile powinien zawierac rowniez cel "clean", ktory usuwa pliki
 obiektowe i plik wykonywalny. 
 */

#include <iostream>
#include "Dzielenie.h"
#include "Pierwiastek.h"
#include "Suma.h"

int main() {
  Dzielenie divide(4,2);
  Pierwiastek square_root(3);
  const int ile = 3;
  int liczby[ile] = {1,3,5};
  const Suma suma(liczby, ile);

  wypisz(divide);
  wypisz(square_root);
  wypisz(suma);

  Dzialanie* d1 = new Dzielenie(7,2);
  wypisz(*d1);
  delete d1;

  Dzialanie* d2 = new Suma(liczby, ile);
  wypisz(*d2);
  delete d2;
  
  std::cout << "=====================================" << std::endl;
    
  const Dzialanie* all[] = {&divide, &square_root, &suma}; 
  for ( unsigned idx = 0; idx < sizeof(all)/sizeof(Dzialanie*); ++idx ) {
    const Dzialanie* d = all[idx];
    d->wypisz(); 
    std::cout << d->wylicz() << std::endl;
  }
}
/* wynik
Dzielenie liczb: 4 2
Pierwiastek liczby: 3
Suma liczb: 1 3 5 
Dzielenie liczb: 7 2
Suma liczb: 1 3 5 
=====================================
Dzielenie liczb: 4 2
2
Pierwiastek liczby: 3
1.73205
Suma liczb: 1 3 5 
9

 */
