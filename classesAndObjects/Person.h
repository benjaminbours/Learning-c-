#pragma once
#include <string>

class Person
{
private:
  std::string firstName;
  std::string lastName;
  int arbitrarynumber;

public:
  Person(std::string first, std::string last, int arbitrary);
  Person();
  ~Person();
  std::string getName() const;
  int getNumber() const { return arbitrarynumber; }
  void setNumber(int number) { arbitrarynumber = number; }
  bool operator<(Person const& p) const;
  bool operator<(int i) const;
};
bool operator<(int i, Person const& p);
