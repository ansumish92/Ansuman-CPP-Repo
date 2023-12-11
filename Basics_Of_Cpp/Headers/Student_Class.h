#include "iostream"
#include <string>
#include "algorithm"

using namespace std;

/* Initially below class is created in ObjectOrienedProgramming.cpp
Later This Header file is created and added the same class into header file and deleted from .cpp file*/

class student {
public:
	string name;
	int age;
	char gndr;
	void printinfo() {
		cout << "Name:" << name << endl;
		cout << "Gender:" << gndr << endl;
		cout << "Age:" << age << endl;
	}
};