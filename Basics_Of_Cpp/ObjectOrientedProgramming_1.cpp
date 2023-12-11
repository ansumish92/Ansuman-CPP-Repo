/*This Programme illustrate how to access private data member of a class.*/
#include "iostream"

using namespace std;

class student{
	
	string Name; //BydefaultAnsu members of a class is private.
	int Age;
	char Gnder;
	
	/* To Access a private data member of a class you must have public member function of same class.*/
	
	public: 
		void SetName(string s){
			Name = s;
		}
		void PrintName(string s){
			cout<< "Name:  " << s << endl;
		}
};

int main(){
	
/* Enable the below lines of code to check the programme for single object.*/	

	string s;
	student std1; /* std1 is a object of student class type*/
	cout << "Enter Name: " << endl;
	cin >> s;
	std1.SetName(s); 
	std1.PrintName(s);
	return 0;
}
