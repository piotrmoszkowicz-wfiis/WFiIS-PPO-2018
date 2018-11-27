#include "MyString.h"

MyString::MyString(const char* str) {
  size_t strLen = strlen(str);
  _string = new char[strLen + 1];
  strcpy(_string, str);
}

MyString::~MyString() {
  std::cout << " - deleting " << _string << std::endl;
  delete [] _string;
}

char* MyString::str() const {
  return (char*)_string;
}

void MyString::replace(const char* strToReplaceWith) {
  strcpy(_string, strToReplaceWith);
}

void MyString::replace(const MyString& strToReplaceWith) {
  strcpy(_string, strToReplaceWith.str());
}

void swap(MyString& str1, MyString& str2) {
  unsigned int lenStr1 = strlen(str1.str());
  char* temp = new char[lenStr1 + 1];
  strcpy(temp, str1.str());
  strcpy(str1.str(), str2.str());
  strcpy(str2.str(), temp);

  delete [] temp;
}