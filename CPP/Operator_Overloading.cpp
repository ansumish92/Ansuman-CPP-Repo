#include "iostream"
#include "Operator_Overloading.h"

using namespace std;

void Complexclass::dispComplexNum() {
	cout << "Complex Numer is :" << endl;
	cout << this->real << " +i" << this->img << endl;;
}

Complexclass Complexclass::addition(Complexclass &x1) {
	Complexclass tempObj;
	tempObj.real = this->real + x1.real;
	tempObj.img = this->img + x1.img;

	return tempObj;
}

/* Definition of overloading of "+" operator 
* This definition can also be kept inside Class definition.
*/
Complexclass Complexclass::operator+(Complexclass& x1) {
	Complexclass tempOprObj;

	tempOprObj.real = this->real + x1.real;
	tempOprObj.img = this->img + x1.img;
	return tempOprObj;
}

Complexclass Complexclass::operator+=(Complexclass& x1) {
	this->real = this->real + x1.real;
	this->img = this->img + x1.img;
	return *this;
}

int main() {

#ifdef ADD_METHOD
	Complexclass c1(10, 5), c2(30, 25), c3;

	c1.dispComplexNum();
	c2.dispComplexNum();
	c3.dispComplexNum();

	c3 = c1.addition(c2); // Instead of this method we can use operator overloading.
	cout << "After addition of two  complex Number: " << endl;
	c3.dispComplexNum();
#endif
#ifdef ADD_OPR
	Complexclass c1o(100, 200), c2o(300, 400), c3o;
	
	cout << endl << "Performing addition operator overloading." << endl;
	c1o.dispComplexNum();
	c2o.dispComplexNum();
	c3o.dispComplexNum();

	c3o = c1o + c2o; // We can not perfor addition in this objects sice "+" operator works only with premitive data type. So to use this we have to overload "+" Operator.
	c3o.dispComplexNum();
#endif

#ifdef ADD_ASGN_OPR
	Complexclass c1Ao(1000, 2000), c2Ao(3000, 4000);

	cout << endl << "Performing Addition Assignment operator overloading." << endl;
	c1Ao.dispComplexNum();
	c2Ao.dispComplexNum();

	cout << endl << "After Addition Assignment operator overloading." << endl;
	c1Ao += c2Ao;

	c1Ao.dispComplexNum();
#endif
	return 0;
}