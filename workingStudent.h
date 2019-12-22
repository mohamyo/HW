#include <iostream>
#include <string>
#include "Employee.h"
#include "Student.h"
#include "Person.h"
using namespace std;

class workingStudent : public student, public employee {
protected:
	bool same_institute;

public:
	workingStudent(char*name, long id, int age, int average, char* institute, float sallary, bool same_institute) :student(name, id, age, average, institute), employee(name, id, age, sallary) {
		this->same_institute = same_institute;
	}
	virtual void print() {
		employee::Print();
		student::Print();
		cout << "same_institute: " << same_institute << endl;
	}
};
