



#include <iostream>
#include <cstdlib>
#include "MyString.h"
#include <cstring>

using namespace std;

//ostream &operator << (ostream &, const MyString &);


// 
int main()
{
	

	

	MyString Word_1;
	MyString Word_2("Hello");
	MyString Word_3(Word_2);
	MyString Word_4("Overload");
	Word_3 = Word_4;
	MyString Word_5;
	Word_5 = Word_2 + Word_4;
	Word_3 == Word_4;
	Word_2 == Word_3;


	//cout << Word_5;

	return 0;
}


//So I don't know how to fix this.
//The errors I get say "MyString::c_string: non-standard syntax; use '&' to create a pointer to member"
// and '=' cannot covert from char*(_cdecl MyString::*)(void) to char *
// This is the only thing I haven't been able to figure out though thankfully

//ostream &operator <<(ostream & strm, const MyString & passed)
//{

	//char * Output;
	//int size = strlen(passed.Ptr);
	//Output = new char[size];
//	Output = passed.c_string;

//	strm << Output;

	//return strm;

//}

