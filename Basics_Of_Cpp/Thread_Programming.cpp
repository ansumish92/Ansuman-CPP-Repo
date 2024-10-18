#include "iostream"
#include <thread>
#include "string"

#define THRD_FUN_PONTR (1)

using namespace std;

/* There are several ways to create thread. PFB list of ways.
* 1. Function Pointers
* 2. Lambda Functions
* 3. Functors
* 4. Member Function
* 5. Status Member Function
*/

#if THRD_FUN_PONTR
void check(int& x) {
	cout << "inside check thread." << endl;
	if (x > 0) {
		x += 1000;
	}
	std::this_thread::sleep_for(std::chrono::seconds(15));
}

void disp(std::string s1) {
	cout << "inside disp thread." << endl;
	cout << "string value: " << s1 << endl;
}

typedef unsigned long long ull;
ull startData = 0;
ull endData = 1900000000;
int main() {
	int val = 200;

	cout << "Welcome To Thread Programming... " << endl;
	cout << "Value of val before thread: " << val << endl;

	// thread takes 1st argument generally as function pointer(nothing but function name) and input value to the function if it takes any.
	// if the function is taking reference paramter then in the thread object call we have to pass the parameter like below. 
	std::thread t1(check, ref(val));

	// if the function is taking copy paramter then in the thread object call we have to pass the parameter like below.
	std::thread t2(disp, "Hello");
	t1.join();
	t2.join();
	
	cout << "Value of val after thread: " << val << endl;
	return 0;
}
#endif