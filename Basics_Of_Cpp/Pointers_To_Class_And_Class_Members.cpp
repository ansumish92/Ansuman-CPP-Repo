/* This programme illustrates to pointer to a class and pointer to a member function or data member of a class. */

#include "iostream"

using namespace std;

#define PTR_TO_CLASS (0) /* Enable this to build the code for pointer to a class */
#define PTR_TO_CLASS_DATA_MEMBER (0)   /* Enable this to build the code for pointer to member(Variable) of a class.  */
#define PTR_TO_CLASS_MEMBER_FUNC (1)   /* Enable this to build the code for pointer to member(member function) of a class  */

#if PTR_TO_CLASS

class Data {
public:
	int a;
	int b;
	void display() {
		cout << "Value of a: " << a << endl;
	}
};

int main() {
	Data obj, *ObPtr; /* obj and ObPtr are object and pointer to the calss Data. */

	/* Obptr now can hold any object's address of same class type(Data). Here it is holding obj's address.*/
	ObPtr = &obj;

	obj.a = 10;
	ObPtr->display(); /* Accessing display function of class Data using ObPtr pointer */

	cout << "After Updating the data member using pointer, the value is: " << endl;
	ObPtr->a = 20; /* setting the value of b of class Data using ObPtr pointer */
	/* The above line cal be written as (*ptr)a */

	ObPtr->display();

	return 0;
}

#elif PTR_TO_CLASS_DATA_MEMBER /* Doubt in the below programme*/

class Data {
public:
	int a;
	int b;
	void display() {
		cout << "Value of a: " << a << endl;
	}
};

int main() {
	
	Data obj;
	int Data::*ptr = &Data::a; /* *ptr is a pointer to the data member of class Data "a" not "b".*/
	obj.*ptr = 200;
	//Data obj;
	cout << "Value of a: " << obj.*ptr << endl; 
	return 0;
}
#elif PTR_TO_CLASS_MEMBER_FUNC

class Data {
public:
	int a;
	void display(int x) {
		a = x;
		cout << "Value of a: " << a << endl;
	}
};

int main() {
	int a = 10;
	Data obj, *Pobj;

	Pobj = &obj;

	/* The below method is used to define a function pointer in C, where the function returns an integer and taken
	float  char and char as 3 arguments */

	/* int (*pt2Function)(float, char, char) = NULL; */

	/* But in C++ below method is used to define a pointer to a mehtod of a class. */
	void (Data::* ptr) (int a) = &Data::display;
	obj.display(a);
	a = 20;
	cout << "Calling display function of Data class via function pointer :" << endl;

	/* The below method is used to call the above function pointer in C. */

	/* int result2 = (*pt2Function) (12.5, 'a', 'b'); */

	/* But in C++ the below method is used to call a function pointer which points to a method of a class. */
	(obj.*ptr)(a);

	/* The below method is used to call the function pointer ptr using a class pointer *Pobj which holds the 
	address of obj. */
	((*Pobj).*ptr)(a);
	return 0;
}

#else

/* DO NOTHING */

#endif
