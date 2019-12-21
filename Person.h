#include<string>
class Person {

private:
	long id;
	char* name;
	int age;
public:
	Person(long id=0, char* name=nullptr, int age=0) {
		this->id = id;
		this->name = new char[10];
		strcpy(this->name, name);
		this->age = age;
	}



};