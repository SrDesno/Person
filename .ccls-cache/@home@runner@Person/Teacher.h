//
//  Teacher.h
//  personTeacherInheritanceCompositionFiles
//
//  Created by Yolanda Martínez Treviño on 01/06/23.
//

#ifndef Teacher_h
#define Teacher_h
#include <iostream>
using namespace std;
#include "Person.h"

class Teacher : public Person {
public:
    Teacher();
    Teacher(string, Date, string);
    string getDept() { return dept; }
    void setDept(string d) { dept = d; }
    void print();
private:
    string dept;
};

Teacher::Teacher() : Person() {
    dept = "-";
}

Teacher::Teacher(string nam, Date dat, string dep) : Person(nam, dat) {
    dept = dep;
}


void Teacher::print() {
     cout << "TEACHER Name: " << name << " Birthdate " << birthDate.getDd() << "/" << birthDate.getMm() << "/" << birthDate.getYy() << " Dept: " << dept << endl;
}
#endif /* Teacher_h */