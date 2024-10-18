#include "Operator_Overloading.h"

using namespace std;

void Complexclass::dispComplexNum() {
	cout << "Complex Numer is :" << endl;
	cout << this->real << " +i" << this->img << endl;;
}
#ifndef ADD_METHOD
Complexclass Complexclass::addition(Complexclass& x1) {
	Complexclass tempObj;
	tempObj.real = this->real + x1.real;
	tempObj.img = this->img + x1.img;

	return tempObj;
}
#endif

#ifndef ADD_OPR
/* Definition of overloading of "+" operator
* This definition can also be kept inside Class definition.
*/
Complexclass Complexclass::operator+(Complexclass& x1) {
	Complexclass tempOprObj;

	tempOprObj.real = this->real + x1.real;
	tempOprObj.img = this->img + x1.img;
	return tempOprObj;
}
#endif

#ifndef ADD_ASGN_OPR
/* Definition of overloading of "+=" operator
* This definition can also be kept inside Class definition.
*/
Complexclass Complexclass::operator+=(Complexclass& x1) {

	this->real = this->real + x1.real;
	this->img = this->img + x1.img;

	return *this;
}
#endif

#ifndef SUBS_OPR
/* Definition of overloading of "-" operator
* This definition can also be kept inside Class definition.
*/
Complexclass Complexclass::operator-(Complexclass& y1) {

	Complexclass tempOprObj;

	tempOprObj.real = this->real - y1.real;
	tempOprObj.img = this->img - y1.img;

	return tempOprObj;
}
#endif

#ifndef SUBS_ASGN_OPR
/* Definition of overloading of "-=" operator
* This definition can also be kept inside Class definition.
*/
Complexclass Complexclass::operator-=(Complexclass& y1) {

	this->real = this->real - y1.real;
	this->img = this->img - y1.img;

	return *this;
}
#endif

#ifndef PRE_INC_OPR
/* Definition of overloading of pre "++" operator
* This definition can also be kept inside Class definition.
*/
Complexclass& Complexclass::operator++() {
	++(this->real);
	++(this->img);
	return *this;
}
#endif

#ifndef PRE_DEC_OPR
/* Definition of overloading of pre "--" operator
* This definition can also be kept inside Class definition.
*/
Complexclass& Complexclass::operator--() {
	--(this->real);
	--(this->img);
	return *this;
}
#endif

#ifndef POST_INC_OPR
/* Definition of overloading of post "++" operator
* This definition can also be kept inside Class definition.
*/
Complexclass Complexclass::operator++(int) {
	Complexclass temp(*this); // equvalent to temp = *this
	++real;
	++img;
	return temp;
}
#endif

#ifndef POST_DEC_OPR
/* Definition of overloading of post "++" operator
* This definition can also be kept inside Class definition.
*/
Complexclass Complexclass::operator--(int) {
	Complexclass temp(*this);
	--real;
	--img;
	return temp;
}
#endif

#ifndef EQUL_EQUL_OPR
/* Definition of overloading of "==" operator
* This definition can also be kept inside Class definition.
*/
bool Complexclass::operator==(Complexclass& x1) {
	bool flag = TRUE;
	if ((this->real == x1.real) && (this->img == x1.img)) {
		flag = TRUE;
	}	else {
		flag = FALSE;
	}
	return flag;
}
#endif

#ifndef INSERTTION_EXTREACTION_OPR
/* Definition of overloading of ">>" operator
* This definition can also be kept inside Class definition.
*/
istream& operator>>(istream& inp, Complexclass& temp) {
	cout << "Enter the real part of Imaginary Number: " << endl;
	inp >> temp.real;
	cout << "Enter the imaginary part of Imaginary Number: " << endl;
	inp >> temp.img;

	return inp;
}
/* Definition of overloading of "<<" operator
* This definition can also be kept inside Class definition.
*/
ostream& operator<<(ostream& out, Complexclass& temp) {
	out << temp.real << " +i" << temp.img;
	return out;
}
#endif

#if 0
int main() {

#ifndef ADD_METHOD
	Complexclass c1(10, 5), c2(30, 25), c3;

	c1.dispComplexNum();
	c2.dispComplexNum();
	c3.dispComplexNum();

	c3 = c1.addition(c2); // Instead of this method we can use operator overloading.
	cout << "After addition of two  complex Number: " << endl;
	c3.dispComplexNum();
#endif

#ifndef ADD_OPR
	Complexclass c1o(100, 200), c2o(300, 400), c3o;

	cout << endl << "Performing addition operator overloading." << endl;
	c1o.dispComplexNum();
	c2o.dispComplexNum();
	c3o.dispComplexNum();

	c3o = c1o + c2o; // We can not perfor addition in this objects sice "+" operator works only with premitive data type. So to use this we have to overload "+" Operator.
	c3o.dispComplexNum();
#endif

#ifndef ADD_ASGN_OPR
	Complexclass c1Ao(1000, 2000), c2Ao(3000, 4000);

	cout << endl << "Performing Addition Assignment operator overloading." << endl;
	c1Ao.dispComplexNum();
	c2Ao.dispComplexNum();

	cout << endl << "After Addition Assignment operator overloading." << endl;
	c1Ao += c2Ao;

	c1Ao.dispComplexNum();
#endif

#ifndef SUBS_OPR
	Complexclass Obj1(555, 666), Obj2(111, 222), Obj;

	cout << endl << "Performing Substraction operator overloading." << endl;
	Obj1.dispComplexNum();
	Obj2.dispComplexNum();
	Obj.dispComplexNum();

	cout << endl << "After Addition Assignment operator overloading." << endl;
	Obj = Obj1 - Obj2;
	Obj.dispComplexNum();
#endif

#ifndef SUBS_ASGN_OPR
	Complexclass Obj1(777, 999), Obj2(222, 333);

	cout << endl << "Performing Substraction Asssignment operator overloading." << endl;
	Obj1.dispComplexNum();
	Obj2.dispComplexNum();

	cout << endl << "After Addition Assignment operator overloading." << endl;
	Obj1 -= Obj2;
	Obj1.dispComplexNum();
#endif

#ifndef PRE_INC_OPR
	Complexclass obj1(101, 201);

	cout << endl << "Before Performing pre-increment operator overloading." << endl;
	obj1.dispComplexNum();

	cout << endl << "After pre-increment operator overloading." << endl;
	++obj1;
	obj1.dispComplexNum();
#endif

#ifndef PRE_DEC_OPR
	Complexclass Obj1(1000, 2000);

	cout << endl << "Before Performing pre-decrement operator overloading." << endl;
	Obj1.dispComplexNum();

	cout << endl << "After pre-decrement operator overloading." << endl;
	--Obj1;
	Obj1.dispComplexNum();
#endif

#ifndef POST_INC_OPR
	Complexclass Obj1(5, 6);

	cout << endl << "Before Performing post-increment operator overloading." << endl;
	Obj1.dispComplexNum();

	cout << endl << "After post-increment operator overloading." << endl;
	Obj1++;
	Obj1.dispComplexNum();
#endif

#ifndef POST_DEC_OPR
	Complexclass Obj1(10, 20);

	cout << endl << "Before Performing post-decrement operator overloading." << endl;
	Obj1.dispComplexNum();

	cout << endl << "After post-decrement  operator overloading." << endl;
	Obj1--;
	Obj1.dispComplexNum();

#endif

#ifndef EQUL_EQUL_OPR
	Complexclass Obj1(10, 20), Obj2(20, 30);

	Obj1.dispComplexNum();
	Obj2.dispComplexNum();
	cout << endl << "Performing equal-equal operator overloading." << endl;

	if (Obj1 == Obj2) {
		cout << "Complex Number Objects Are Equal." << endl;
	} else {
		cout << "Complex Number Objects Are Not-Equal." << endl;
	}

	Complexclass Obj3(100, 500), Obj4(100, 500);

	Obj3.dispComplexNum();
	Obj4.dispComplexNum();
	cout << endl << "Performing equal-equal operator overloading." << endl;

	if (Obj3 == Obj4) {
		cout << "Complex Number Objects Are Equal." << endl;
	} else {
		cout << "Complex Number Objects Are Not-Equal." << endl;
	}
#endif

#ifndef INSERTTION_EXTREACTION_OPR
	Complexclass obj1;
	
	cout << "Calling Insertion Operator :" << endl;
	cin >> obj1;
	
	cout << "Calling Extraction Operator: " << endl;
	cout << " Entered input for Object of Complexclass using insertion operator" << endl;
	cout << obj1;
#endif

#ifndef TYPCST_OPR
	Dollar d1(50);
	Rupee r1;

	d1.dispDolr();
	r1.dispRupee();
	r1 = d1;
#endif
	return 0;
}
#endif

