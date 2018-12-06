/*
 Celem zadania jest implementacja z uzyciem klas, przećwiczenie używania 
 referencji, wskaźników i konstruktorów - w szczególności kopiujących.
 
 funkcjonalnosci:
 append - dodaje na koncu danego stringa drugi, podany jako argument
 insert - dodaje string, podany jako argument, n znaków od poczatku danego stringa 

 argumenty typu MyString są przekazywane przez wartość. Konieczne jest odpowiednie
 obsłużenie tej sytuacji.

 Proszę zadbać o dobre zarządzanie pamięcią, bez wycieków.
 UWAGA: W zadaniu nie mozna uzyc klasy std::string. Tj. musi byc to zrobione na char*.
 Można używać funkcji z pliku nagłówkowego cstring.
 
 */

#include <iostream>
#include "MyString.h"
#include "MyString.h"

int main() {
  
  MyString s1("jest");
  std::cout << s1.str() << std::endl;
  
  MyString s2("arcy");
  const MyString s3("ciekawie");
  std::cout << s2.str() << std::endl;
  
  s2.append(s3);
  std::cout << "po polaczeniu: " << s1.str() << " " << s2.str() << std::endl;

  s1.insert(s3,2);
  std::cout << "po uzupelnieniu: " << s1.str() << std::endl;
}
/* wyniki
 ++ creating jest
jest
 ++ creating arcy
 ++ creating ciekawie
arcy
 ++ copying ciekawie
 -- deleting ciekawie
po polaczeniu: jest arcyciekawie
 ++ copying ciekawie
 -- deleting ciekawie
po uzupelnieniu: jeciekawiest
 -- deleting ciekawie
 -- deleting arcyciekawie
 -- deleting jeciekawiest

   
*/
