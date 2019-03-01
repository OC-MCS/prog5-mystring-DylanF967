#pragma once
// MyString class declaration goes here

using namespace std;

class MyString
{
	private:
	char * Ptr;

	public:
		MyString();
		MyString(const char*);
		MyString(const MyString &passed);
		MyString* operator=(const MyString &);
		MyString operator+(const MyString &);
		bool operator==(const MyString &);
		char* c_string();
		


		//friend ostream &operator <<(ostream &, const MyString &);



};

