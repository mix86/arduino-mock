#include <string>
#include <iostream>
#include "MString.h"

MString::MString() {
  std::string empty_str = "";
  _str = empty_str;
}

MString::MString(std::string str) {
  _str = str;
}

MString::MString(const char chr[]) {
  std::string str = std::string(chr);
  _str = str;
}

bool MString::operator==(const char other[]) const {
  return _str == std::string(other);
}

bool MString::operator==(const MString other) const {
  return _str == other.str();
}

MString& MString::operator=(std::string str) {
  _str = str;
  return *this;
}

MString& MString::operator=(const char chr[]) {
  std::string str = std::string(chr);
  _str = str;
  return *this;
}

// MString& MString::operator+=(const MString& rhs) const {
//   _str = _str + rhs.str();
//   return *this;
// }

MString& MString::operator+=(const char chr[]) {
  _str = _str + chr;
  return *this;
}

MString& MString::operator+=(const char chr) {
  _str = _str + chr;
  return *this;
}

unsigned int MString::length() {
  return _str.length();
}

char MString::charAt(int p) {
  return _str.at(p);
}

std::string MString::str() const {
  return _str;
}
