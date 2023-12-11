/* This programme illustrates an example of friend class and friend function */

#include "iostream"

using namespace std;

#define FRIEND_CLASS (1) /* Enable this to build the code for Friend class */
#define FRIEND_FUNCTION (0)   /* Enable this to build the code for Friend function */

#if FRIEND_CLASS

class Data {

	int a;
};
#elif FRIEND_FUNCTION

#else

/* DO NOTHING*/

#endif