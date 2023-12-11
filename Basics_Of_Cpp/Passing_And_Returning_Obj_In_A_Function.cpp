/* This programme illustrates how to pass an object of a class in a function as an argument */

#include "iostream"

using namespace std;

#define OBJ_ARGUMENT (0) /* Enable this to build the code for passing an object of a class in a function */
#define OBJ_RETURN (1)   /* Enable this to build the code for returning an object from a function */

#if OBJ_ARGUMENT

class Example {

public:
	int a;
	/* Pass an Object 'E' of type Example class in the function definition */
	void multiply(Example E) {

		a = a * E.a;
		cout << "Inside Multiply function: " << a << endl;
	}
};

/* Passing Object of Example class into display function*/
void display(Example Exm) {

	cout << "Inside Display Function Having Object as Argument:" << Exm.a << endl;
}
int main() {

	Example E1,E2;
	E1.a = 50;
	E2.a = 100;
	E2.multiply(E1); /* Passing E1 object as an argument in the method of E2 object*/
	//E1.multiply(E2); /* Passing E2 object as an argument in the method of E1 object*/
	display(E1);

	return 0;
}

#elif OBJ_RETURN

class Example {

public:
	int a;
	int b;
};

/* Below Add function return an object ex3 of type Exmaple class and takes argument of two object of same class*/

Example Add(Example ex1, Example ex2) {

	Example ex3;

	ex3.a = ex1.a + ex2.a;
	ex3.b = ex1.b + ex2.b;

	return ex3;
}

int main() {

	Example E1, E2;
	cout << " Enter Value of a and b for the Object E1: " << endl;
	cin >> E1.a >> E1.b;

	cout << " Enter Value of a and b for the Object E2: " << endl;
	cin >> E2.a >> E2.b;
	E1 = Add(E1, E2);

	cout << " After the Add Function call value of Object E1 will be: " << E1.a << "  " << E1.b << endl;
	return 0;
}

#else
/* Do Nothing*/

#endif