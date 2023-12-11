#include "iostream"

using namespace std;
/* Programme 1 

To get a bit from a specific position.
        3210 -> bit position of below binary value.
Ex: n = 0101 what is the bit value at position 2?
*/
int getbit (int n, int pos){
	// = 1 << 2 = 100
	//n& (1<<2)
	
	return ((n & (1 << pos)) != 0);
}

int main() {
	
	cout << getbit(5,2) << endl;
	
	return 0;
}
