//
// Prosze napisac klasę pozwalającą na zliczanie zaalokowanych obiektow 
// i sprawdzenie, czy dany wskaźnik został utworzony na stosie, czy na stercie.
// Klasa reprezentuje liczbę zespoloną (opisaną przez dwa int-y).
// 
// Proszę przeładować operator new i operator delete klasy, tak by obiekty 
// tworzone poprzez operator new usuwać przy pomocy operatora delete, a 
// wskaźniki na obiekty utworzone na stosie nie były usuwane dynamicznie.
//
// Można to zrobić np. przy pomocy zmiennej w klasie, która informuje,
// czy obiekt utworzono na stercie (przez operator new), czy na stosie.
//
// Uwaga: Przeciążone operatory new i delete są statyczne, zatem 
// nie można w nich ustawiać składowych klasy, które nie są statyczne.
//
// Dla celów zadania operatory i konstruktory wypisują komunikaty 
// (podane na końcu pliku).
// 

// Pliku Main.cpp nie modyfikujemy.

// Program prosze kompilowac przynajmniej z flaga -Wall.

// Makefile powinien zawierac rowniez cel "clean", ktory usuwa pliki
// obiektowe i plik wykonywalny.


#include "MyComplex.h"
#include <iostream>

int main ()
{
	MyComplex * m1 = new MyComplex(1,2);	// Wywolany operator new 
											// 1+2i utworzony na stercie? 1
	MyComplex * m2 = new MyComplex;			// Wywolany operator new 
											// 0+0i utworzony na stercie? 1

	std::cout << "Liczba zaalokowanych: " << MyComplex::no_alocated() << std::endl;
							// Liczba zaalokowanych: 2

	MyComplex m3(4,5); 		// 4+5i utworzony na stercie? 0
	MyComplex * ptr2 = m2;
	MyComplex * ptr3 = &m3;

	std::cout << "Liczba zaalokowanych: " << MyComplex::no_alocated() << std::endl;
							// Liczba zaalokowanych: 2

	std::cout << "m1: " << *m1 << std::endl;	//	m1: 1+2i
	std::cout << "m2: " << *ptr2 << std::endl;	//	m2: 0+0i
	std::cout << "m3: " << *ptr3 << std::endl;	//	m3: 4+5i

	delete m1;				//	1+2i usuwanie dynamiczne 
	delete ptr3;			//	4+5i nie był zaalokowany na stercie 
	delete ptr2;			//	0+0i usuwanie dynamiczne
	std::cout << "Liczba zaalokowanych: " << MyComplex::no_alocated() << std::endl;
							// Liczba zaalokowanych: 0
}
/* Wynik dzialania programu:

Wywolany operator new 
1+2i utworzony na stercie? 1
Wywolany operator new 
0+0i utworzony na stercie? 1
Liczba zaalokowanych: 2
4+5i utworzony na stercie? 0
Liczba zaalokowanych: 2
m1: 1+2i
m2: 0+0i
m3: 4+5i
1+2i usuwanie dynamiczne 
4+5i nie był zaalokowany na stercie 
0+0i usuwanie dynamiczne 
Liczba zaalokowanych: 0

*/
