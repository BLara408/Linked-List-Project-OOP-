#pragma once
#ifndef PERSON_H_
#define PERSON_H_
#include <string>
#include <iostream>
using namespace std;
class Person {
private:
	
	string name;
	double age;
	string phrase = "";
	void makeOlder();
public:
	void setAge(double a);
	void setName(string n);
	Person();
	Person(string n, double a);
	double getAge();
	string getName();
	string speak();
	void setPhrase(string p);
	bool operator>(Person a);
	bool operator<(Person a);
};

#endif