// Prosze dopisac kod, dodac nowe pliki, tak aby program wykonywal
// sie, a wynik jego dzialania byl taki sam jak podany na koncu tego
// pliku.

// Prosze napisac klasy reprezentujace wektor trójwymiarowy i macierz. 
// Macierz złożona jest z 3 wektorow, przesylanych do jej konstruktora.
//
// Prosze zaimplementowac mnozenie:
// - wektor * wektor = liczba	- funkcja Dot
// - wektor x wektor = wektor 	- funkcja Times
// - macierz * wektor = wektor 	- funkcja Times klasy Matrix.

// po odkomentowaniu linii "#define ERROR" kod nie moze sie kompilowac.

// Komentarze w kodzie pokazuja jakie wyjscie powinna generowac dana
// linia.

// podpowiedzi do mnozenia wektorow:
// V = (v1, v2, v3)
// W = (w1, w2, w3)
// Dot: 	V * W = v1*w1 + v2*w2 + v3*w3
// Times:	V x W = ( v2*w3-w2*v3, -v1*w3+w1*v3, v1*w2-v2*w1 )

// Pliku Main.cpp nie wolno modyfikowac. 

// Program prosze kompilowac przynajmniej z flaga -Wall.

// Makefile powinien zawierac rowniez cel "clean", ktory usuwa pliki
// obiektowe i plik wykonywalny.

#include "Vector.h"
#include "Matrix.h"

#include<iostream>

// #define ERROR

int main ()
{
  const Vector first (2);

  std::cout<<"first:\n";
  first.Print();  // (2, 2, 2)
  
  Matrix matrix1( first );
  std::cout<<"\nmatrix: \n";
  matrix1.Print(); // ( 10 10 10 )
  //                  // ( 20 20 20 )
  //                  // ( 30 30 30 )

  Vector second (20);
  second.at(0) = 10;
  second.at(2) = 30;

  std::cout<<"\nsecond:\n";
  second.Print();  // ( 10 20 30 )

  const int scalar = first.Dot(second);
  std::cout<<"\nvector * vector = "<< scalar <<"\n"; // vector * vector = 120

  const Vector third = first.Times(second);
  std::cout<<"\nvector x vector:\n"; 
  third.Print();

  Matrix matrix2( second );
  std::cout<<"\nmatrix: \n";
  matrix2.Print(); // ( 10 20 30 )
                   // ( 10 20 30 )
                   // ( 10 20 30 )

  std::cout<<"\nmatrix.at(2): \n";
  matrix2.at(2).Set(third); 
  matrix2.at(2).Print(); // (  20 -40 20 )


  std::cout<<"\nMatrix * vector:\n";
  matrix2.Times(first).Print(); // ( 120 120 0 )

#ifdef ERROR
  Vector strange = 2 ;
  strange.Print();
#endif

  return 0;
}
/* wynik dzialania programu:
first:
( 2 2 2 )

matrix: 
( 2 2 2 )
( 2 2 2 )
( 2 2 2 )

second:
( 10 20 30 )

vector * vector = 120

vector x vector:
( 20 -40 20 )

matrix: 
( 10 20 30 )
( 10 20 30 )
( 10 20 30 )

matrix.at(2): 
( 20 -40 20 )

Matrix * vector:
( 120 120 0 )

*/