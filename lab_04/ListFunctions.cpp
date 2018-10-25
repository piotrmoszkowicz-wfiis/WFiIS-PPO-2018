#include <iostream>
#include "stdio.h"
#include "Pair.h"

void startList(Pair** pairList, int listSize) {
  #ifdef DEBUG
	std::cout<< "Alokacja pamieci" << std::endl;
	#endif
  *pairList = (Pair*)malloc(listSize * sizeof(Pair));
}

void add(Pair** pairList, Pair pairToAdd, int* listSize, int* pairsNumber) {
  #ifdef DEBUG
	std::cout<< "Dodawanie " << *pairsNumber << " elementu" << std::endl;
	#endif
  if (*pairsNumber >= *listSize) {
    (*listSize)++;
    *pairList = (Pair*)realloc(*pairList, (*listSize) * sizeof(Pair));
  }
  *(*(pairList)+*pairsNumber) = pairToAdd;
  (*pairsNumber)++;
}

void printPair(Pair* pair) {
  std::cout << "(" << pair->x << ", " << pair->y << ")" << std::endl;
}

void printList(Pair* pairList, int pairsNumber) {
  for(int i=0;i<pairsNumber;i++) {
    printPair(pairList+i);
  }
}

void freeList(Pair** pairList) {
  #ifdef DEBUG
	std::cout << "Zwalnianie pamieci" << std::endl;
	#endif
  free(*pairList);
}