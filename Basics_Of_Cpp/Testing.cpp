#include "iostream"

using namespace std;

#define DIS (0)

#ifndef DIS

class myclss {
public:
	int a;
	//float b;
	struct st1 {
		int a;
	}s1;
};


int main() {

	myclss obj;

	obj.a = 10;
	obj.s1.a = 10; /*If we do not initialize structure inside a class then if you want to access it will give
	compile time error.*/
	cout << obj.a << endl;
	cout << obj.s1.a << endl;
	return 0;
}

#endif

class myclss {
	int a;
public:
	myclss() {
		cout << "CONSTRUCTOR CALLED." << endl;
		a = 0;
	}
	~myclss() {
		cout << "DESTRUCTOR CALLED. " << endl;
	}
	void disp() {
		cout << "member function called" << endl;
	}

};

int main() {
	
	cout << " Main inside." << endl;
	//myclss obj,obj1;
	//myclss* obptr = nullptr;
	myclss* obptr = new myclss();
	obptr->disp();
	//obptr->~myclss(); // check this point while understanding shared pointer -> one of the smart pointers.
	cout << " Main Outside. " << endl;
	//delete obptr;

	return 0;
}
