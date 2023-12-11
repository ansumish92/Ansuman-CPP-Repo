#include "Student_Class.h"

int main() {

	student s1, s2;
	cout << "Enter Name: " << endl;
	getline(cin, s1.name);
	cout << "Enter Age: " << endl;
	cin >> s1.age;
	cout << "Data in Object S1: " << s1.name << "   " << s1.age << endl;

	s2 = s1; // copying one object info to other object.
	cout << "Data in Object S2: " << s2.name << "   " << s2.age << endl;

	return 0;
}