//
// main.cpp
// personTeacherInheritanceCompositionFiles
//
// Created by Yolanda Martínez Treviño on 01/06/23.
//
#include <iostream>
using namespace std;
#include "Teacher.h"

void readFromFile(Person*personlist[20], int &numberOfPersons){
  char type;
  int dd,mm,yy;
  string name,dept;
  
  ifstream std::inputFile;
  inputfFile.open("persons.txt");

  numberOfPersons=0;
  while(inputFile>>type){
    inputFile>>name>>dd>>mm>>yy;
    Date date(dd, mm, yy);
    if type(=='p'){
      personsList[numbeOfPersons]=new Person(name,date);
      numberOfPersons++;
        }
    
      }
}

int main() {
  Person *personsList[20];
  int numberOfPersons, dd, mm, yy, age, initialAge, endAge; // number of persons in personsList
  char personChoice, menuOption;
  string name, depart;
  cout << "Number of persons? ";
  cin >> numberOfPersons;
  
  for (int c = 0; c < numberOfPersons; c++) {
    cout << "Is the person a teacher? (y/n)" << endl;
    cin >> personChoice;
    cout << "Name? ";
    cin >> name;
    cout << "Birth Date? (type dd mm yy) ";
    cin >> dd >> mm >> yy;
    Date date(dd, mm, yy);
    if (personChoice == 'y') {
      cout << "Department? ";
      cin >> depart;
      Teacher *teach = new Teacher(name, date, depart);
      personsList[c] = teach;
    } else {
      personsList[c] = new Person(name, date);
    }
  }
  do {
    cout << "Options " << endl;
    cout << endl;
    cout << "a) display all the persons " << endl;
    cout << "b) display the persons of certain age " << endl;
    cout << "c) finish " << endl;
    cout << "option -> " << endl;
    cin >> menuOption;
    switch (menuOption) {
    case 'a': {
      for (int c = 0; c < numberOfPersons; c++)
        personsList[c]->print();
      break;
    }
    case 'b': {
      int tmpAge;
      cout << "initial age of the range? ";
      cin >> initialAge;
      cout << "end age of the range? ";
      cin >> endAge;
      for (int c = 0; c < numberOfPersons; c++) {
        tmpAge = personsList[c]->calculateAge();
        if (tmpAge >= initialAge && tmpAge <= endAge)
          personsList[c]->print();
      }
      break;
    }
    }
  } while (menuOption != 'c'); // finish
  return 0;
}
