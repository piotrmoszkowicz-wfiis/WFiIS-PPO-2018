#include "Patients.h"

void startList(Patients* patientsListPointer) {
  patientsListPointer->head = NULL;
}

void add(Patients* patientsListPointer, char name, char surname, int timeLeft) {
  Patient* newPatient = new Patient;
  newPatient->name = name;
  newPatient->surname = surname;
  newPatient->timeLeft = timeLeft;

  ListElement* newPatientInList = new ListElement;
  newPatientInList->data = newPatient;
  newPatientInList->next = NULL;

  ListElement* lastItem = patientsListPointer->head;
  if (lastItem == NULL) {
    patientsListPointer->head = newPatientInList;
    return;
  }
  while(lastItem->next != NULL) {
    lastItem = lastItem->next;
  }
  lastItem->next = newPatientInList;
}

Patient* pop(Patients* patientsListPointer) {
  ListElement* elementToReturn = patientsListPointer->head;
  patientsListPointer->head = elementToReturn->next;
  Patient* patientToReturn = elementToReturn->data;
  std::cout << "Zapraszam pacjenta " << patientToReturn->name << " " << patientToReturn->surname << " na czas: " << patientToReturn->timeLeft << std::endl;
  delete elementToReturn;
  return patientToReturn;
}

void printPatientFromList(ListElement* patientInList) {
  std::cout << patientInList->data->name << " " << patientInList->data->surname << ", czas: " << patientInList->data->timeLeft << std::endl;
}

void printList(Patients patientsListPointer) {
  std::cout << "Pacjenci: " << std::endl;
  ListElement* currentItemToPrint = patientsListPointer.head;
  while(currentItemToPrint != NULL) {
    printPatientFromList(currentItemToPrint);
    currentItemToPrint = currentItemToPrint->next;
  }
}

void decrementTime(Patient* patient) {
  patient->timeLeft--;
}

void deletePatient(Patient* patient) {
  delete patient;
}

void freeList(Patients* patientsListPointer) {
  ListElement* currentItemToClear = patientsListPointer->head;
  while(currentItemToClear != NULL) {
    ListElement* backupItemToClear = currentItemToClear;
    currentItemToClear = currentItemToClear->next;
    deletePatient(backupItemToClear->data);
    delete backupItemToClear;
  }
}