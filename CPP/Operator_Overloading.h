#pragma once

#define ADD_METHOD
#define ADD_OPR
#define ADD_ASGN_OPR
class Complexclass
{
private:
	int real;
	int img;

public:
	Complexclass(int r = 0, int i = 0) {
		real = r;
		img = i;
	}
	~Complexclass() {};

	void dispComplexNum();
	Complexclass addition(Complexclass &x1); // Instead of this method we can use operator overloading.
	
	/* Addtion Operator Overloading for Complexclass */
	Complexclass operator+(Complexclass& x1); // Declaration of overloading of "+" operator.

	/* Addtion Assignment (+=) Operator Overloading for Complexclass */
	Complexclass operator+=(Complexclass& x1);
};

