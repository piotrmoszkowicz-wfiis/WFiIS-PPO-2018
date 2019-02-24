#include "MyComplex.h"

int MyComplex::countOfAlocated = 0;
bool MyComplex::lastDynamic = false;

std::ostream& operator<<(std::ostream& s, const MyComplex& myComplex) {
  s << myComplex._x << "+" << myComplex._y << "i";
  return s;
}

void* MyComplex::operator new(std::size_t num) {
  std::cout << "Wywolany operator new" << std::endl;
  
  MyComplex::change_last_dynamic(true);
  MyComplex::change_alocated(true, 1);

  return ::operator new(sizeof(MyComplex));
}

void MyComplex::operator delete(void *p) {
  MyComplex* wsk = static_cast<MyComplex*>(p);
  if (wsk->_dynamic) {
    std::cout << *wsk << " usuwanie dynamiczne" << std::endl;
    MyComplex::change_alocated(false, 1);
    ::delete wsk;
  } else {
    std::cout << *wsk << " nie byl zaalokowany na stercie " << std::endl;
  }
}

void MyComplex::change_alocated(bool add, int num) {
  if (add) {
    countOfAlocated += num;
  } else {
    countOfAlocated -= num;
  }
}

void MyComplex::change_last_dynamic(bool val) {
  lastDynamic = val;
}

int MyComplex::no_alocated() {
  return countOfAlocated;
}