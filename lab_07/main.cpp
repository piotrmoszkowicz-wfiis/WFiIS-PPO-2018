/*
 Celem zadania jest implementacja z uzyciem klas, przecwiczenie uzywania referencji i wskaźników.
 
 UWAGA: W zadaniu nie mozna uzyc klasy std::string. Tj. musi byc to zrobione na char*.
 UWAGA: W klasie MyString moze miec wiecej metod niz te, ktore sa widoczne w main.

 */

#include <iostream>
#include "MyString.h"
#include "MyString.h"

int main() {
  
  MyString s1("a to kiwi zdziwi kota");
  std::cout << s1.str() << std::endl;
  
  s1.replace("jest");

  MyString s2("ciekawie");
  const MyString s3("ciemno");
  std::cout << s2.str() << std::endl;
  
  s2.replace(s3);
 
  std::cout << "przed zamiana: " << s1.str()  << " " << s2.str() << std::endl;
  swap(s1, s2);
  std::cout << "po zamianie: " << s1.str()  << " " << s2.str() << std::endl;

}
/* wyniki
a to kiwi zdziwi kota
ciekawie
przed zamiana: jest ciemno
po zamianie: ciemno jest
 - deleting ciemno
 - deleting jest
 - deleting ciemno
   
*/
