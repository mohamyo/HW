#include <iostream>
#include <string>
#include "Person.h"
using namespace std;

class student : public person {
protected:
	int average;
	char* institute;

public:
	student(char* name, long id, int age, int average, char* institute): person(name, id, age) {
		this->average = average;
		this->institute = new char[10];
		strcpy_s(this->institute, 10 + 1, institute);
	}
	
	virtual void print() {
		cout << "average: " << average << endl;
		cout << "institute: " << institute << endl;
		person::Print();
	}

};
