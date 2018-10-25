// Prosze dopisac kod, dodac nowe pliki, tak aby program wykonywal
// sie, a wynik jego dzialania byl taki sam jak podany na końcu tego
// pliku.

// ==================================================================
// Prosze napisac: liste, która przechowuje pary liczb
// oraz funkcje startList, add, remove, freeList, ktore:
// startList(int) - zwraca nowa liste o podanym poczatkowym rozmiarze. 
// add(pair) - umieszcza pare na liscie.
// freeList - zwalnia pamiec
// Pojemnosc listy prosze dostosowac do liczby elementow,
// tzn. zwiekszyc pojemnosc gdy liczba elementow ja przekroczy

// Tworzac liste w funkcji, alokujemy pamiec.
// Zwalniamy funkcja freeList 

// Flaga z opcja debugowania powinna byc dodana na etapie kompilacji.
// po dodaniu tej flagi program wypisuje wiecej informacji.
// ===================================================================

// Prosze zadbac o dobre zarzadzanie pamiecia.

// Pliku lab04.cpp nie wolno modyfikowac.

// Ostateczny program powinien byc przyjazny dla programisty (miec
// czytelny i dobrze napisany kod). 

// Makefile powinien zawierac cel "clean", ktory usuwa pliki
// obiektowe i plik wykonywalny.


// Skonczone zadanie nalezy spakowac i wgrac na UPEL
#include "Pair.h"
#include "ListFunctions.h"
#include "ListFunctions.h"
#include <iostream>

int main ()
{
	#ifdef DEBUG
	std::cout<< "Tryb debugowania" << std::endl;
	#endif

	Pair *pairsList = NULL;
	int listSize=2;
	int pairsNumber=0;
	startList(&pairsList, listSize);
	Pair pair1={-0.86,	0.35};
	Pair pair2={-0.34,	0.65};
	Pair pair3={ 0.34,	0.65};
	Pair pair4={ 0.86,	0.35};

	add(&pairsList, pair1, &listSize, &pairsNumber);
	add(&pairsList, pair2, &listSize, &pairsNumber);
	add(&pairsList, pair3, &listSize, &pairsNumber);
	add(&pairsList, pair4, &listSize, &pairsNumber);
	
	printList(pairsList, pairsNumber);

	freeList(&pairsList);

  return 0;
}
/* 
//wynik dzialania programu:
( -0.86, 0.35)
( -0.34, 0.65)
( 0.34, 0.65)
( 0.86, 0.35)
//
//wynik dzialania z flaga -DDEBUG:
//
Tryb debugowania
Alokacja pamieci
Dodawanie 0 elementu
Dodawanie 1 elementu
Dodawanie 2 elementu
Dodawanie 3 elementu
( -0.86, 0.35)
( -0.34, 0.65)
( 0.34, 0.65)
( 0.86, 0.35)

Zwalnianie pamieci

*/
