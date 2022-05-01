#pragma once
#include "personType.h"
using namespace std;

class facultyType : public personType {
public:
	//setter
	void setDiscipline(string);
	void setSalary(double);

	//getter
	string getDiscipline();
	double getSalary();

	//other funtions
	void print();

	//construtors
	////default construtor
	facultyType();

	//parameter construtor
	facultyType(string, string, int, string, double);

	//overload funtions for facultyTypes

	friend bool operator==(const facultyType&, const facultyType&);

	friend void operator+=(facultyType&, double);

	friend void operator-=(facultyType&, double);


private:

	string discipline;
	double salary;

};


void facultyType::setDiscipline(string s) {
	discipline = s;
}
void facultyType::setSalary(double d) {
	salary = d;
}


string facultyType::getDiscipline() {
	return discipline;
}
double facultyType::getSalary() {
	return salary;
}

//calls print funtion for personType
void facultyType::print() {
	personType::print();
	cout << "- Discipline: " << discipline << endl;
	cout << "- Salary: " << salary << endl;
}

facultyType::facultyType() : personType() {
	discipline = "N/A";
	salary = 0;
}

facultyType::facultyType(string s1, string s2, int i, string s3, double d) : personType(s1, s2, i) {
	discipline = s3;
	salary = d;
}


bool operator==(const facultyType& fac1, const facultyType& fac2) {
	if (fac1.firstName == fac2.firstName && fac1.lastName == fac2.lastName){
		return true;
	}
	else {
		return false;
	}
}

void operator+=(facultyType& fac, double d) {
	fac.salary += d;
}

void operator-=(facultyType& fac, double d) {
	fac.salary -= d;
}
