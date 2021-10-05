#include "People.h"
#include "Person.h"


People::People() {
	head = nullptr;
	size = 0;
	

}

void People::add(Person a)
{
	Node* newNode;
	Node* nodeptr = nullptr;
	newNode = new Node;
	newNode->data = a;
	newNode->next = nullptr;
	if (!head) {
		head = newNode;
		size++;
		
	}
	else {
		nodeptr = head;
		while (nodeptr->next) {
			nodeptr = nodeptr->next;
		}
		nodeptr->next = newNode;
		size++;
	}
	
}

void People::print()
{
	Node* nodeptr;
	nodeptr = head;
	while (nodeptr) {

		cout << nodeptr->data.getName() << endl;
		nodeptr = nodeptr->next;
	}
}

Person People::search(double a, string n)
{
	Node* nodeptr;
	
	nodeptr = head;
	while (nodeptr->next != nullptr) {
		if (nodeptr->data.getAge() == a && nodeptr->data.getName() == n) {
			
			return nodeptr->data;
			nodeptr = nodeptr->next;
		}
	}
	cout << "No person with that age was found" << endl;
	Person notIn;
	
	return notIn;

	
}

int People::getSize()
{
	return size;
}

bool People::operator>(People a)
{
	cout << "This is left size " << size << " " << "This is right size " << a.getSize() << endl;
	if (size > a.getSize()) {
		return true;
	}
	else {
		return false;
	}
}

bool People::operator<(People b)
{
	if (size < b.getSize() ){
		return true;
	}
	else {
		return false;
	}
	return false;
}

void People::remove(double age)
{
	Node* nodeptr;
	Node* prev;
	prev = nullptr;
	if (!head)
		return;

	if (head->data.getAge() == age) {
		nodeptr = head->next;
		delete head;
		head = nodeptr;
	}
	else {
		nodeptr = head;
		while (nodeptr != nullptr && nodeptr->data.getAge() != age) {
			prev = nodeptr;
			nodeptr = nodeptr->next;
		}
		if (nodeptr) {
			prev->next = nodeptr->next;
			delete nodeptr;
		}
	}
}

People::~People()
{
	Node* nodeptr;
	Node* nextNode;
	nodeptr = head;
	while (nodeptr != nullptr) {
		nextNode = nodeptr->next;
		delete nodeptr;
		nodeptr = nextNode;
	}
}



