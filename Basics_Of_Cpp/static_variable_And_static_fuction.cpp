/* This programme illustrates about static attributes (variable) of a class */


#include "iostream"
#include "String"

using namespace std;

#define ATTRIBUTES (0) /* Enable this to Enable to code for static attributes */
#define METHODS (1)   /* Enable this to Enable to code for static functions */

#if ATTRIBUTES
class student {
public:
	static int age; /* static variable declaration in a class*/
};

/* The following way we can initialize only static attributes of a class in outside of the class. We can not assign
or initialize any static attributes inside a class */

int student::age = 10;

int main() {
	
	student s1, s2;

	cout << "First object S1's Age: " << s1.age << endl;
	cout << "Second object S2's Age: " << s1.age << endl;

	/* The Output of the above programme will be 10 since static attributs of a class is common to all objects*/

	s1.age = 30;
	cout << "After changing static attributes :" << endl;
	cout << "First object S1's Age: " << s1.age << endl;
	cout << "Second object S2's Age: " << s1.age << endl;

	return 0;
}


#elif METHODS

/* This programme illustrates about static methods of a class */

class student {
public:
	static int age; /* static variable declaration in a class*/

	/* static method delcaration in a class. To Access attributes of a class from static method the attributes must be
	a static attributes or else it will give error.*/
	static void mymethod() {

		cout << "inside Static method: " << age << endl;
	}
};

int student::age = 30;
int main() {

	student s1;

	cout << "Accessing static method : " << endl;
	s1.mymethod();

	s1.age = 40;
	cout << "Accessing static method After changing static attributes : " << endl;
	s1.mymethod();
	return 0;
}

#else 

/*  NO Codes */

#endif
/* This programme illustrate aboutand static methods(function). */