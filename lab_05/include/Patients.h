#pragma once
#include <iostream>

struct Patient {
  char name;
  char surname;
  int timeLeft;
};

struct ListElement {
  Patient* data;
  ListElement* next;
};

struct Patients {
  ListElement* head;
};

void startList(Patients* patientsListPointer);
void add(Patients* patientsListPointer, char name, char surname, int timeLeft);
void printPatientFromList(ListElement* patientInList);
void printList(Patients patientsListPointer);
Patient* pop(Patients* patientsListPointer);
void decrementTime(Patient* patient);
void deletePatient(Patient* patient);
void freeList(Patients* patientsListPointer);
