
#include "iostream"
#include "string"
using namespace std;


class Concept{ 
private:
	int a;
public:
	Concept() {
		a = 0;
	}
	void getdata() {
		cin >> a;
	}
	void showdata() {
		cout << "Entered Data: " << a << endl;
	}
	/*Concept & method_add(Concept* ob) {
		this->a = this->a + ob->a;
		
		cout << "Output of method_add : " << this->a << endl;

		return *this;
	}*/

	/* Here this pointer points to the calling object's (The object which is calling 
	 the method compare currently) data i.e "ob1's" data. */

	/*
	void compare(Concept o1) { 
		if (this->a == o1.a) {
			cout << "Objects are Equal." << endl;
		}
		else {
			cout << "Objects are Not Equal." << endl;
		}
	}
	*/

	/* Below is the process to overload operator. here we have overloaded "==" operator. */
	void operator == (Concept o1) {
		if (this->a == o1.a) {
			cout << "Objects are Equal." << endl;
		}
		else {
			cout << "Objects are Not Equal." << endl;
		}
	}
};

int main() {
	Concept ob1, ob2;
	cout << "Enter 1st object data" << endl;
	ob1.getdata();
	ob1.showdata();
	cout << "Enter 2nd object data" << endl;
	ob2.getdata();
	ob2.showdata();

	//cout << "calling method_add" << endl;
	//ob1.method_add(&ob2);
	//ob1.compare(ob2);
	
	/*
	Here Operator overloading method will be invoked.
	Generally Operatior's are designed to perform some special task on predefined data types.(int,float, etc)
	like if(int a ==  int b), if(float a == float b).
	   
	But to compare user defined data types(like objects) using this operator, we will have to overload it. This
	process is called Operator overloading (as shown in above method "compare" in class "Concept".
	*/
	ob1 == ob2; 
	return 0;
}
