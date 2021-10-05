#include "Person.h"

using namespace std;

void Person::makeOlder()
{
	age = age + 1;
}

void Person::setAge(double a)
{
	age = a;
}

void Person::setName(string n)
{
	name = n;
}

Person::Person() {
	age = 0;
	name = " ";
}

Person::Person(string n, double a)
{
	age = a;
	name = n;

}

double Person::getAge()
{
	return age;
}

string Person::getName()
{
	return name;
}

string Person::speak()
{
	return phrase;
}

void Person::setPhrase(string p)
{
	phrase = p;

}

bool Person::operator>(Person a)
{

	cout << "This is left size " << age << " " << "This is right size " << a.getAge() << endl;
	if (age > a.getAge()) {
		cout << "This is left size " << age << " " << "This is right size " << a.getAge() << endl;
		return true;
	}
	else {
		cout << "This is left size " << age << " " << "This is right size " << a.getAge() << endl;
		return false;
	}

	
}

bool Person::operator<(Person a)
{
	cout << "This is left size " << age << " " << "This is right size " << a.getAge() << endl;
	if (age < a.getAge()) {
		return true;
	}
	else {
		return false;
	}
	return false;
}
