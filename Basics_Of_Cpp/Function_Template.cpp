#include "iostream"
#include "string"
using namespace std;
/* Following Program is to illustrate function template.

   Here sum method is of type void */

template <class T> void sum(T a, T b) { // syntax of defining function template.
	T z;
	z = a + b;
	cout << " output of disp method: " << z << endl;
}

template <class T> T add(T a, T b) { // syntax of defining function template here return type of show is of type T.
	T z;
	z = a + b;
	return z;
}
int main() {

	int data = 0;
	data = add(10, 20); // calling fuction template
	cout << "Value of data : " << data << endl;
	cout << "calling disp method" << endl;
	sum(10.5, 20.5); // calling fuction template
	return 0;
}