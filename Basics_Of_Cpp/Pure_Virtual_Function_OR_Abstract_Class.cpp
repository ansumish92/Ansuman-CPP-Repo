#include "iostream"

using namespace std;

class Wrapper {
protected:
	int h, w;
public:
	virtual void getarea() = 0;
	void set_h(int a) {
		h = a;
	}
	void set_w(int b) {
		w = b;
	}
};

class rect : public Wrapper {
public:
	void getarea() {
		int area;
		area = h * w;
		cout << "Area Of Rectangle is: " << area << endl;
	}
};

class tri : public Wrapper {
public:
	void getarea() {
		int area;
		area = (h * w)/2;
		cout << "Area Of Triangle is: " << area << endl;
	}
};

int main() {
	rect r;
	tri t;

	r.set_h(10);
	r.set_w(20);
	r.getarea();

	t.set_h(100);
	t.set_w(200);
	t.getarea();

	cout << "End Of Main Programme. " << endl;

	return 0;
}