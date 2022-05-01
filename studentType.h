#pragma once
#include "personType.h"
class studentType : public personType {
public:
	//setter
	void setSID(string);
	void setMajor(string);
	void setGPA(double);

	//getter
	string getSID();
	string getMajor();
	double getGPA();

//other funtions
	void print();

	//construtors
	////default construtor
	studentType();

	//parameter construtor
	studentType(string, string, int, string, string, double);

	//overload funtions for studentTypes
	friend bool operator==(const studentType&, const studentType&);

	friend bool operator>=(const studentType&, double);
	friend bool operator<=(const studentType&, double);

private:

	string SID;
	string major;
	double GPA;

};


void studentType::setSID(string s) {
	SID = s;
}
void studentType::setMajor(string s) {
	major = s;
}
void studentType::setGPA(double d) {
	GPA = d;

}


string studentType::getSID() {
	return SID;
}
string studentType::getMajor() {
	return major;
}
double studentType::getGPA() { 
	return GPA;
} 

//calls print funtion for personType
void studentType::print() {
	personType::print();
	cout <<"- SID: "<< SID <<endl;
	cout <<"- major: "<< major <<endl;
	cout <<"- GPA: "<< GPA <<endl;
}

studentType::studentType() : personType(){
	SID = "N/A";
	major = "undeclared";
	GPA = 0;

}

studentType::studentType(string s1, string s2, int i, string s3, string s4, double d) : personType(s1,  s2, i) {
	SID = s3;
	major = s4;
	GPA = d;
}


bool operator==(const studentType& stud1, const studentType& stud2) {
	if (stud1.firstName == stud2.firstName && stud1.lastName == stud2.lastName && stud1.SID == stud2.SID) {

		return true;
	}
	else {
		return false;
	}
		
}


bool operator>=(const studentType& stud1, double d) {
	if (stud1.GPA >= d) {

		return true;
	}
	else {
		return false;
	}

}


bool operator<=(const studentType& stud1, double d) {
	if (stud1.GPA <= d) {

		return true;
	}
	else {
		return false;
	}
}