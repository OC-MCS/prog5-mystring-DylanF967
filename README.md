# prog5-mystring-DylanF967
prog5-mystring-DylanF967 created by GitHub Classroom

problem with your operator<<: you can't directly access member data on the CONST parameter. This is why I asked you to write a const c_str() member function that you can call (instead of making friend, etc.)  
functions will crash if given a default-constructed mystring
You're not testing things in main in a useful way. Having the function print out success is not the same thing as ensuring  
in main that the correct value is returned. You have to test the way that a user of your class would use your class.  
Example of this problem: if you try s1 = s2 = s3, it won't compile, because your operator= is returning a pointer to a MyString

grade: 32/40

