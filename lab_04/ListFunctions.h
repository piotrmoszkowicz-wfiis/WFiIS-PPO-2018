#pragma once
#include <iostream>
#include "Pair.h"

void startList(Pair** pairList, int listSize);
void add(Pair** pairList, Pair pairToAdd, int* listSize, int* pairsNumber);
void printPair(Pair* pair);
void printList(Pair* pairList, int pairsNumber);
void freeList(Pair** pairList);
