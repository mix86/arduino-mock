#ifndef MSTRING_H
#define MSTRING_H

#include <string>
// #include <iostream>

class MString {
 public:
  MString();
  MString(std::string str);
  MString(const char chr[]);
  MString& operator=(std::string str);
  MString& operator=(const char chr[]);
  bool operator==(const char chr[]) const;
  bool operator==(const MString other) const;
  // MString& operator+=(const MString& rhs) const;
  MString& operator+=(const char chr[]);
  MString& operator+=(const char chr);

  char charAt(int p);
  unsigned int length();
  std::string str() const;
  void toCharArray(char carr[], uint8_t count) const;
 private:
  std::string _str;
};

typedef MString String;

#endif
