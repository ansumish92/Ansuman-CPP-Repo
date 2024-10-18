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
#define EQUL_EQUL_OPR
#define INSERTTION_EXTREACTION_OPR
#define TYPCST_OPR
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
	Complexclass addition(Complexclass& x1); // Instead of this method we can use operator overloading.
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
	Complexclass& operator++(); // Declaration of overloading of pre "++" operator.
#endif

#ifndef PRE_DEC_OPR
	/* Pre-Decrement(--) Operator Overloading for Complexclass */
	Complexclass& operator--(); // Declaration of overloading of pre "--" operator.
#endif

#ifndef POST_INC_OPR
	/* Post-Increment(++) Operator Overloading for Complexclass */
	Complexclass operator++(int); // Declaration of overloading of post "++" operator.
#endif

#ifndef POST_DEC_OPR
	/* Post-Decrement(--) Operator Overloading for Complexclass */
	Complexclass operator--(int); // Declaration of overloading of post "--" operator.
#endif

#ifndef EQUL_EQUL_OPR
#define TRUE 1
#define FALSE 0
	/* equal equal(==) Operator Overloading for Complexclass */
	bool operator==(Complexclass& x1);
#endif

#ifndef INSERTTION_EXTREACTION_OPR
	/* insertion (>>) Operator Overloading for Complexclass */
	friend std::istream& operator>>(std::istream& inp, Complexclass& temp); // Need to write down the explanation of friend keyword here from "https://www.youtube.com/watch?v=2972LRdyquk"
	/* extraction (>>) Operator Overloading for Complexclass */
	friend std::ostream& operator<<(std::ostream& out, Complexclass& temp); // Need to write down the explanation of friend keyword here from "https://www.youtube.com/watch?v=2972LRdyquk"
#endif
};

#ifndef TYPCST_OPR

class Rupee;

class Dollar {
private:
	int dolr;
public:
	Dollar(int x = 0) {
		dolr = x;
	}
	~Dollar() {};
	void dispDolr() {
		std::cout << "Dollar Amount is: " << dolr << std::endl;
	}
	operator Rupee() {
		return Rupee(dolr * 71.5);
	}
};

class Rupee {
private:
	int rup;
public:
	Rupee(int x = 0) {
		rup = x;
	}
	~Rupee() {};
	void dispRupee() {
		std::cout << "Rupee Amount is: " << rup << std::endl;
	}
};

#endif