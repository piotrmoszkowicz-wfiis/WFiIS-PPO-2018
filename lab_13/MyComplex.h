#pragma once
#include <iostream>

class MyComplex {
  friend std::ostream& operator <<(std::ostream& s, const MyComplex& myComplex);

  public:
      MyComplex(int x = 0, int y = 0) : _x(x), _y(y) {
      if (lastDynamic) {
        _dynamic = true;
        MyComplex::change_last_dynamic(false);
      }
      std::cout << *this << " utworzony na stercie? " << _dynamic << " " << std::endl;
    }
    void* operator new(std::size_t num);
    void operator delete(void *p);
    static int no_alocated();
    static void change_alocated(bool add, int num);
    static void change_last_dynamic(bool val);
  private:
    int _x;
    int _y;
    bool _dynamic = false;
    static int countOfAlocated;
    static bool lastDynamic;
};