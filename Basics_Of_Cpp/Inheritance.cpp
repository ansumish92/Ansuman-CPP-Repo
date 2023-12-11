#include "iostream"
#include "string"

using namespace std;

class Person {

	int P_Id;
	string P_Name;

public:
	void set_P() {
		cout << "Enter ID of the student: " << endl;
		cin >> P_Id;
		fflush(stdin);
		cout << "Enter NAME of the student: " << endl;
		cin >> P_Name; // string reading without space
		//getline(cin,P_Name);
	}

	void get_P() {
		cout << "Name of the student: " << P_Name << endl;
		cout << "ID of the student: " << P_Id << endl;
	}
};

/* 1. Student class is inheritaded from Person Class in private mode.
   2. Hence All the methods and data members will become private to derived class i.e Student.
   3. So we can not access the methods or the data members of base class(Person) through
      derived class's object (Student Class's Object).
   4. To access the private data members of the base class we have to call public methods of base class
      in public methods of child class which intern we will be able to access the private data members of base 
	  class.
*/

class Student : private Person { //Student class is inheritaded from Person Class in private mode.
	float S_Age;
	string S_Branch;

public:
	void set_S() {
		set_P(); // To access the private data members since class is derived in private mode.
		cout << "Enter the age of the student :" << endl;
		cin >> S_Age;
		cout << "Enter the Branch of the student :" << endl;
		cin >> S_Branch;
	}

	void get_S() {
		get_P();
		cout << "Age of the student:  " << S_Age << endl;
		cout << "Branch of the student:  " << S_Branch << endl;
	}
};

class New_S :public Person { // New_S is inheritaed in public mode from base class Person.
	int Roll_Num;
	char Sec;
public:
	set_New_S() {
		cout << "Enter Roll_Num" << endl;
		cin >> Roll_Num;
		cout << "Enter Sec" << endl;
		cin >> Sec;
	}

};

int main() {
	//Person P1;
	//P1.set_P();
	//P1.get_P();
	Student s;
	New_S n;
	s.set_S();
	s.get_S();
	
	return 0;
}



