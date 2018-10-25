/*
 * 0.    Prosze sprobowac skompilowac program 'manualnie' - bez uzycia programu make.
 * 1.    Prosze napisac podstawowy makefile, w ktorym jawnie beda wypisane cele i zaleznosci
 * 1.1   Prosze zmodyfikowac program dodajac zmienne CXX, CXXFLAGS, EXEC, OBJS; cele PHONY
 * 1.1   Prosze zmodyfikowac program dodajac zmienne automatyczne $@, $<, $+
 * 1.2   Makefile generyczny
 * 
 */
#include<iostream>
#include"Suma2.h"
#include"PolozeniePoczatkowe.h"
#include"Czas.h"
#include"Przyspieszenie.h"
#include"Predkosc.h"

#include"assert.h"

int main ()
{
  using namespace std;
  

#ifdef WELCOME
  cout<<"Good day to you sir!\n";
#endif
  
  cout<<"a = "<<Przyspieszenie()<<"\n";
  cout<<"v = "<<Predkosc()<<"\n";
  cout<<"r_0 = "<<PolozeniePoczatkowe()<<"\n";
  cout<<"t = "<<Czas()<<"\n";

  cout<<"r = a*t^2/2 + v*t + r_0 = "<<Suma2()<<"\n";

  return 0;
}
