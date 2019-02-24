//
// Proszę napisac hierarchię klas opisujących pojazdy.
// Pojazd charakteryzuje się liczbą kół. Niektóre pojazdy
// jak samochód, mają numer rejestracyjny (ale nie wszystkie
// - nie jest to cecha każdego pojazdu!)
// proszę używać char* do przechowywania rejestracji oraz nazwy pojazdu.


// Dodatkowo proszę umożliwić kopiowanie i przypisywanie
// obiektów.

// Pliku Main.cpp nie modyfikujemy.

// Program prosze kompilowac przynajmniej z flaga -Wall.
// Makefile powinien zawierac rowniez cel "clean", ktory usuwa pliki
// obiektowe i plik wykonywalny.


#include "Car.h"
#include "Bike.h"
#include <iostream>

int main ()
{
	Bike romet("Romet");
	Car porsche("Porsche","KR1234");

	std::cout << romet.name() << ": " << romet.numberOfWheels() << " kol" << std::endl;
	std::cout << porsche.name() << ": " << porsche.numberOfWheels() << " kol, numer " << porsche.plate() << std::endl;

	Car lamborghini = porsche;
	std::cout << lamborghini.name() << " numer " << lamborghini.plate() << std::endl;

	Car ferrari("Ferrari","KR666");
	std::cout << ferrari.name() << " numer " << ferrari.plate() << std::endl;

	ferrari = porsche;
	std::cout << ferrari.name() << " numer " << ferrari.plate() << std::endl;

}
/* Wynik dzialania programu:

Romet: 2 kol
Porsche: 4 kol, numer KR1234
Porsche numer KR1234
Ferrari numer KR666
Porsche numer KR1234

*/