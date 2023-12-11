#include "Student_Class.h"

int main(){
	string s1,s2;
	
	//string s1(10, 'A'); /*Print single char in multiple times */
		
	//getline(cin, s1); /*Reading a string with space */
	cout << "Enter Two Strings" << endl;
	cin>> s1 >> s2;
	cout << "Strings After Concatination" << endl;
	cout<< s1 + s2 << endl; /*Appending string or Concatinating string */
	
	//cout << s1.append(s2) <<endl; /*Appending string s2 on top of s1 */
	
	//cout << s2.append(s1) <<endl; /*Appending string s1 on top of s2 */
	
	//cout << s1[2] << endl; /*Reading a particular char from a string */
	
	//s1.clear(); /*Clearing or deleting a particular string */
	
	//cout << s2.compare(s1) << endl; /*Comparing s2 with s1 string (Asci value of (s2) - Asci value of s1) */
	
	
	/*Clearing or deleting a particular string */
    
	/*s1.empty();  
    
    if(s1.empty()){
    	cout << "string is emptry !" << endl;
	} */
	
	//s1.erase(3);    /*Deleting or erasing whole string starting from 3rd char */
	//s1.erase(3,2);  /*Deleting 2 chars starting from 3rd character of a string */
	//cout << s1.find("HELLO") << endl;  /*Finding a particular string or char from a given string */
	return 0;
}
