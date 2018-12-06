#include "MyString.h"

MyString::MyString(const char* str) {
  _stringLength = strlen(str);
  _stringField = new char[_stringLength + 1];
  strcpy(_stringField, str);
  std::cout << "  ++ creating " << _stringField << std::endl;
}

MyString::MyString(const MyString& strToCpy) {
  std::cout << "  ++ copying " << strToCpy._stringField << std::endl;

  _stringLength = strlen(strToCpy._stringField);
  _stringField = new char[_stringLength + 1];

  strcpy(_stringField, strToCpy._stringField);
}

MyString::~MyString() {
  std::cout << "  -- deleting " << _stringField << std::endl;
  delete [] _stringField;
}

char* MyString::str() const {
  return (char*)this->_stringField;
}

void MyString::append(MyString strToAppend) {
  size_t lengthCombined = _stringLength + strToAppend._stringLength;

  char* buffer = new char[lengthCombined + 1];
  strcat(buffer, _stringField);
  strcat(buffer, strToAppend._stringField);

  delete [] _stringField;
  _stringField = buffer;
  _stringLength = lengthCombined;
}

void MyString::insert(const MyString strToInsert, int placeToInsert) {
  size_t lengthCombined = _stringLength + strToInsert._stringLength;

  char* buffer = new char[lengthCombined + 1];

  strncpy(buffer, _stringField, placeToInsert);
  strcat(buffer, strToInsert._stringField);
  strncpy(buffer + placeToInsert + strToInsert._stringLength, _stringField + placeToInsert, _stringLength - placeToInsert);

  delete [] _stringField;
  _stringField = buffer;
  _stringLength = lengthCombined;
}