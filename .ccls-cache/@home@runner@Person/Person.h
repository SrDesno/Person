//
//  Person.h
//  personTeacherInheritanceCompositionFiles
//
//  Created by Yolanda Martínez Treviño on 01/06/23.
//
#include <iostream>
using namespace std;
#include "Date.h"
#ifndef Person_h
#define Person_h

class Person {
public:
    Person();
    Person(string, Date);
    string getName() { return name; }
    void setName(string n) { name = n; }
    Date getBirthDate() {return birthDate; }
    void setBirthDate (Date a) {birthDate = a; }
    int calculateAge();
    virtual void print();
protected:
    string name;
    Date birthDate;
};

Person::Person() {
    name = "_";
    Date tmpDate(1,1,2000);
    birthDate = tmpDate;
}

Person::Person(string nam, Date da) {
    name = nam;
    birthDate = da;
}

int Person::calculateAge(){
  return 2023-birthDate.getYy(); // not precise
}

void Person::print() {
    cout << "PERSON Name: " << name << " Birthdate " << birthDate.getDd() << "/" << birthDate.getMm() << "/" << birthDate.getYy() << endl;
}

#endif /* Person_h */