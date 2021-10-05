#pragma once
#include <string>
#include <iostream>
#include "Person.h"


class People
{
public:
	People();
	void add(Person a);
	void print();
	Person search(double a , string n);
	int getSize();
	bool operator>(People a);
	bool operator<(People b);
	void remove(double age);
	~People();

	

private:
	struct Node
	{
		Person data;
		Node* next = nullptr;
	};
	Node* head;
	int size;
};


