
#include "iostream"
#include "string"
using namespace std;

int calc(int* p)
{
	int x;
	if (p == NULL) { x = 0; }
	else { x = *p; }
	x += 10;
	*p = x;
	return 0;
}

int main() {
	int a;
	a = calc(NULL);
	cout << a << endl;

	return 0;
}
