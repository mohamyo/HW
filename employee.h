#include <iostream>
#include <string>
#include "Person.h"
using namespace std;

class employee : public person {
protected:
	float sallary;

public:
	employee(char* name, long id, int age, float sallary):person(name, id, age) {
		this->sallary = sallary;
	}
	virtual void print() {
		cout << "sallary: " << sallary << endl;
		person::Print();
	}

};
