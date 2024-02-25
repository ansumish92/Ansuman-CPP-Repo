#pragma once

#include "iostream"

#define ADD_METHOD 
#define ADD_OPR 
#define ADD_ASGN_OPR
#define SUBS_OPR
#define SUBS_ASGN_OPR
#define PRE_INC_OPR
#define PRE_DEC_OPR
#define POST_INC_OPR
#define POST_DEC_OPR
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
#ifndef ADD_METHOD
	Complexclass addition(Complexclass &x1); // Instead of this method we can use operator overloading.
#endif

#ifndef ADD_OPR
	/* Addtion Operator(+) Overloading for Complexclass */
	Complexclass operator+(Complexclass& x1); // Declaration of overloading of "+" operator.
#endif

#ifndef ADD_ASGN_OPR
	/* Addtion Assignment(+=) Operator Overloading for Complexclass */
	Complexclass operator+=(Complexclass& x1); // Declaration of overloading of "+=" operator.
#endif

#ifndef SUBS_OPR
	/* Substraction(-) Operator Overloading for Complexclass */
	Complexclass operator-(Complexclass& y1); // Declaration of overloading of "-" operator.
#endif

#ifndef SUBS_ASGN_OPR
	/* Substraction Assignment(-=) Operator Overloading for Complexclass */
	Complexclass operator-=(Complexclass& y1); // Declaration of overloading of "-=" operator.
#endif

#ifndef PRE_INC_OPR
	/* Pre-Increment(++) Operator Overloading for Complexclass */
	void operator++(); // Declaration of overloading of pre "++" operator.
#endif

#ifndef PRE_DEC_OPR
	/* Pre-Decrement(--) Operator Overloading for Complexclass */
	void operator--(); // Declaration of overloading of pre "--" operator.
#endif

#ifndef POST_INC_OPR
	/* Post-Increment(++) Operator Overloading for Complexclass */
	void operator++(int); // Declaration of overloading of post "++" operator.
#endif

#ifdef POST_DEC_OPR
	/* Post-Decrement(--) Operator Overloading for Complexclass */
	void operator--(int); // Declaration of overloading of post "--" operator.
#endif
};
