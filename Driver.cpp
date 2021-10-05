#include <iostream>
#include <string>
#include "Person.h"
#include "People.h"
#include <limits>
using namespace std;


int main()

{
	string secondName = " ";
	double secondAge = 0;
	double personAge = 0;
	int userNum = 0;
	int userChoice = 0;
	string personName = " ";
	string setPhrase = "";
	Person myPerson[6];
	Person test[10];
	Person testTwo[2];
	People newPeople;
	People firstPeople;
	People secondPeople;

	for (int i = 0; i < 10; i++) {
		firstPeople.add(test[i]);
		
	}
	

	for (int i = 0; i < 2; i++) {
		secondPeople.add(testTwo[i]);
	
	}
	
	do
	{
		cout << "6 person objects have been made press 1 to load their, Name, Age and give them a phrase! " << endl;
		cin >> userNum;
		switch (userNum)
		{
		case 1:
			cout << "First we are going to load all the names for each of the persons, you will need to enter 7 names which can be different or the same" << endl;
			for (int i = 0; i < 6; i++) {
				cout << "Enter a name" << endl;
				cin >> personName;
				myPerson[i].setName(personName);
			}
			
			cout << "Next we are going to set the age of the persons please enter different ages" << endl;
			for (int i = 0; i < 6; i++) {
				cout << "Enter an age for " << myPerson[i].getName() << endl;

				cin >> personAge;
				
				myPerson[i].setAge(personAge);
			}
			cout << "Next we are going to set the phrases for our persons" << endl;
			cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			for (int k = 0; k < 6; k++) {
				cout << myPerson[k].getName() << endl;
				
				getline(cin, setPhrase);
				myPerson[k].setPhrase(setPhrase);
				
			}
			cout << "Now that we set all of our person objects press 2 to load them into the People class!" << endl;
			cin >> userNum;
		
		case 2:
			cout << "You made it to the loading phase" << endl;
			for (int i = 0; i < 6; i++) {
				cout << myPerson[i].getName() << " Has been loaded in with age " << myPerson[i].getAge() << " and the phrase " << myPerson[i].speak() << endl;
				newPeople.add(myPerson[i]);


			}
			cout << endl;
			cout << "3: Search by name and age, 4: Compare person objects, 5: get size of people, 6 remove a person from people, 7 reset the whole list " << endl;
			cin >> userNum;

		case 3:
			cout << endl;
			cout << "Search the people by name and age, Please enter the name " << endl;
			cin >> personName;
			cout << "Please enter the age " << endl;
			cin >> personAge;
			cout << "You have found " << personName << " whos age is " << personAge << " and whose phrase is " << newPeople.search(personAge, personName).speak() << endl;
			cout << endl;
			cout << "3: Search by name and age, 4: Compare person objects, 5: get size of people, 6 remove a person from people, 7 reset the whole list, 8: compare the size of our people 9: to exit " << endl;
			cin >> userNum;
		case 4:
			cout << endl;
			cout << "We are comparing the age of 2 people using operator overloading, please enter the name of person 1" << endl;
			cin >> personName;
			cout << "Now enter in the age of person 1" << endl;
			cin >> personAge;
			cout << endl;
			cout << "Now enter the name of person 2" << endl;
			cin >> secondName;
			cout << "Lastly enter the age of person 2" << endl;
			cin >> secondAge;
			if ((newPeople.search(personAge, personName).getAge() > newPeople.search(secondAge, secondName).getAge()) == true) {
				cout << personName << " was older than " << secondName << endl;
			}
			else {
				cout << personName << " was not older than " << secondName << endl;
			}
			cout << endl;
			cout << "3: Search by name and age, 4: Compare person objects, 5: get size of people, 6 remove a person from people, 7 reset the whole list, 8: compare the size of our people 9: to exit " << endl;
			cin >> userNum;
		case 5:
			cout << "The size of the people object is " << newPeople.getSize() << endl;
			cout << endl;
			cout << "3: Search by name and age, 4: Compare person objects, 5: get size of people, 6 remove a person from people, 7 reset the whole list, 8: compare the size of our people 9: to exit " << endl;
			cin >> userNum;
		
		case 6:
			cout << "Please enter the age of the person you would like to remove " << endl;
			cin >> personAge;
			newPeople.remove(personAge);
			cout << " printing new list " << endl;
			newPeople.print();
			cout << endl;
			cout << "3: Search by name and age, 4: Compare person objects, 5: get size of people, 6 remove a person from people, 7 reset the whole list, 8: compare the size of our people 9: to exit " << endl;
			cin >> userNum;
		case 7:
			newPeople.~People();
			cout << "List has been reset" << endl;
			cout << endl;
			cout << "3: Search by name and age, 4: Compare person objects, 5: get size of people, 6 remove a person from people, 7 reset the whole list, 8: compare the size of our people 9: to exit " << endl;
			cin >> userNum;
		case 8:
			cout << "This is to test the compare function for people class, I have made 2 seperate people objects one with size 2 and one with size 10 to compare" << endl;
			cout << "First comparison will be with the people object with size 2" << endl;
			if ((newPeople > secondPeople) == true) {
				cout << "Our people object with size "<< newPeople.getSize()<< " is bigger then "<<  secondPeople.getSize() << endl;
			}
			else {
				cout << "Our people object is smaller" << endl;
			
			}
			if ((newPeople > firstPeople) == true) {
				cout << "Our people object with size " << newPeople.getSize() << " is smaller then " << firstPeople.getSize() << endl;
			}
			else {
				cout << "Our people object is larger" << endl;

			}
			cout << endl;
			cout << "3: Search by name and age, 4: Compare person objects, 5: get size of people, 6 remove a person from people, 7 reset the whole list, 8: compare the size of our people 9: to exit " << endl;
			cin >> userNum;
		default:
			cout << "Not a valid choice restart and try again" << endl;
			userNum = 9;
			break;
		}


	} while (userNum!= 9);
	
	
	

	
	return 0;
}
