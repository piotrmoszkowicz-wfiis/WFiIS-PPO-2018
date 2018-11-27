// Prosze dopisac kod, dodac nowe pliki, tak aby program wykonywal
// sie, a wynik jego dzialania byl taki sam jak podany na końcu tego
// pliku.

// ==================================================================
//
// Prosze napisac: kolejke, która przechowuje pacjentów
// i funkcje startList, add, pop, freeList, 
// deletePatient, printList, decrementTime, ktore:
// 1) startList - inicjalizuje kolejke
// 2) add - dodaje pacjenta na koniec kolejki
// 3) pop - zwraca pacjenta z poczatku kolejki
// 4) freeList - usuwa pozostalych pacjentow
// 5) deletePatient - zwalnia pamiec po jednym z pacjentow
// 6) printList - wypisuje cala kolejke.
// 7) decrementTime - pomniejsza czas wizyty pacjenta
// 
// pacjent ma inicjaly (char) i czas wizyty (int).
// pacjenci kolejno sa obslugiwani. Oblugiwanemu pacjentowi ubywa czas wizyty.
// Kiedy zakonczy wizyte, obslugiwany jest kolejny pacjent
// Na koniec usuwamy pozostalych w kolejce pacjentow.
// 
// Uwaga: Prosze umiescic pliki .h w katalogu "include",
// a pliki .cpp w katalogu "src". Mozna przy pomocy makefile, ale prosciej cmake.
//
// ===================================================================

// Prosze zadbac o dobre zarzadzanie pamiecia.

// Pliku lab06.cpp prosze nie modyfikowac.

// Ostateczny program powinien byc przyjazny dla programisty (miec
// czytelny i dobrze napisany kod). 


// Skonczone zadanie nalezy spakowac i wgrac na UPEL
#include "Patients.h"
#include "Patients.h"
#include <iostream>

int main ()
{

	Patients patientsList;
	startList(&patientsList);

	 add(&patientsList, 'A', 'B', 5);
	 add(&patientsList, 'C', 'D', 15);
	 add(&patientsList, 'E', 'F', 10);
	 add(&patientsList, 'G', 'H', 5);

	printList(patientsList);

	int maxMinutes = 20;

	Patient * servedPatient=0;

	for (int i = 0; i < maxMinutes; ++i)
	{
		if( !servedPatient ){
			servedPatient = pop(&patientsList);
		}
		decrementTime(servedPatient);
		if( servedPatient->timeLeft==0 ){
			deletePatient( servedPatient );
			servedPatient=0;
			std::cout << "Dziekuje, nastepny!" << std::endl;
		}
	}
	std::cout << "Zapraszamy jutro!" << std::endl;
		
	printList(patientsList);

	if( servedPatient ){
		deletePatient( servedPatient );
	}
	freeList(&patientsList);

  return 0;
}
/* 
//wynik dzialania programu:
pacjenci:
A B, czas: 5
C D, czas: 15
G H, czas: 5
E F, czas: 10

Zapraszam pacjenta A B na czas: 5
Dziekuje, nastepny!
Zapraszam pacjenta C D na czas: 15
Dziekuje, nastepny!
Zapraszamy jutro!
pacjenci:
E F, czas: 10
G H, czas: 5

*/
