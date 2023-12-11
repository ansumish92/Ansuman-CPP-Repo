#include "iostream"

using namespace std;

double division(double x, double y) {

	double res;
	if (y == 0) {
		throw "Division By Zero Is Not Possible !!!";
	}
	res = x / y;
	return res;
}
int main() {
	double a, b, result;
	cout << "Enter Two Value for division: " << endl;
	cin >> a >> b;
	try {

		result = division(a, b);
	}
	catch (const char *error){
		cerr << error << endl;
	}
	cout << " Division Result : " << result;
	return 0;
}