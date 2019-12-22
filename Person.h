#include<string>
class Person {

protected:
	long id;
	char* name;
	int age;
public:
	person(char* name = nullptr, long id = 0, int age = 0) {
		this->name = new char[10];
		strcpy_s(this->name, 10 + 1, name);
		this->id = id;
		this->age = age;
	}
virtual void Print() {
		cout << "name: " << name << endl;
		cout << "id: " << id << endl;
		cout << "age: " << age << endl;
	}


};
