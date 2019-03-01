#include <iostream>
#include <cstdlib>
#include "MyString.h"
#include <cstring>
using namespace std;


//Default constructor
MyString::MyString()
{
	Ptr = nullptr;
	cout << "This is the default constructor." << endl;

}

//constructor for when a char string is passed
MyString::MyString(const char* passed)
{
	Ptr = new char[strlen(passed) + 1];
	strcpy_s(Ptr, strlen(passed) + 1, passed);
	cout << Ptr << endl;

}

//Copy Constructor
MyString::MyString(const MyString &passed)
{
	cout << "Copy constructor allocating ptr." << endl;
	Ptr = new char[strlen(passed.Ptr)];
	strcpy_s(Ptr, strlen(passed.Ptr) + 1, passed.Ptr);
	cout << "The copy constructor created: " << Ptr << endl;
}


//Overloaded = constructor
//Allows me to just say s1 = s2 and it will copy everything correctly
MyString* MyString:: operator=(const MyString &passed)
{
	cout << "Overload = constructor allocating ptr." << endl;
	Ptr = new char[strlen(passed.Ptr)];
	strcpy_s(Ptr, strlen(passed.Ptr) + 1, passed.Ptr);
	cout << "The overload operator created: " << Ptr << endl;
	return this;
}


//overloaded + operator
//takes two MyStrings and combines them together
MyString MyString ::operator+(const MyString &passed)
{
	cout << "Overload + running." << endl;
	char *Combined;
	int size = strlen(Ptr) + strlen(passed.Ptr) + 2;
	Combined = new char[size];
	strcpy_s(Combined, size, Ptr);
	strcat_s(Combined, size, " ");
	strcat_s(Combined, size, passed.Ptr);
	return Combined;


}


//This overload tests to see if the Mystrings are the same word
bool MyString ::operator==(const MyString &passed)
{
	cout << "Overload == operator running " << endl;
	
	if (strcmp(Ptr, passed.Ptr) == 0)
	{
		cout << "These strings are the same." << endl;

		return true;
		
	}
	else
	{
		cout << "These strings are not the same." << endl;

		return false;
	}
	

}


//getter function that returns the Pointer
char* MyString ::c_string() 
{
	
	return Ptr;
}

