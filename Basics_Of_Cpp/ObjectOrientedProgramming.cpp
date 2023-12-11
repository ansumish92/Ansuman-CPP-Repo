/* This example illustrate to access a public data member of a class.
To know how to access private data member of a class, check for ObjectOrientedProgramming_1.cpp */

#include "Student_Class.h"

/* Commented since defined in Student_Class.h file */

//#include "iostream"
//#include "string"
//using namespace std; 


int main(){
	//student a; /* a is an object of class studen and memory will be allocated once object is declared.*/
	//a.name = "Ansuman Mishra"; /* will give you build error since bydefault class membders are private 
								 /*untill you make it public.*/
	//cout << a.name << endl;
	student a[2]; // aray of objects of class student type.
	//string b = "\n";
	for(int i=0; i<2; i++){
		cout << "Name:";
		getline(cin, a[i].name);
		//cin >> a[i].name;
		cout << "Gender:";
		cin >> a[i].gndr;
		cout << "Age:";
		cin >> a[i].age;
		cin.ignore();  /* Added to avoid reading "\n" character when pressed enter for the first loop. */
	}
	cout << "#### Below Is Your Output. ####" <<endl;
	for(int j=0; j<2; j++){
		a[j].printinfo();
	}
	return 0;
}
