#pragma once
#pragma once

#include <iostream>
#include <vector>


using namespace std;

class personType {
public:
	void setFirstName(string);
	void setLastName(string);
	void setAge(int);

	string getFirstName();
	string getLastName();
	int getAge();

	void print();

	//defult constructor->
	personType();
	//other constructors->
	personType(string, string, int);
	//other constructors->
	personType(string, string);

protected:
	string firstName;
	string lastName;
	int age;
};

//setter
void personType::setFirstName(string s) {
	firstName = s;
}
void personType::setLastName(string s) {
	lastName = s;
}
void personType::setAge(int i) {
	age = i;
}

//getter
string personType::getFirstName() {
	return firstName;
}
string personType::getLastName() {
	return lastName;
}
int personType::getAge() {
	return age;
}

void personType::print() {
	cout << "- First Name: " << firstName << endl;
	cout << "- last Name: " << lastName << endl;
	cout << "- Age: " << age << endl;
}

personType::personType() {
	firstName = "n/a";
	lastName = "n/a";
	age = -1;
}

personType::personType(string s1, string s2, int i) {
	firstName = s1;
	lastName = s2;
	age = i;
}


personType::personType(string s1, string s2) {
	firstName = s1;
	lastName = s2;
	age = -1;
}