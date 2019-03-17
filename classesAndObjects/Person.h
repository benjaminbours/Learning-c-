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
        std::string getName();
};