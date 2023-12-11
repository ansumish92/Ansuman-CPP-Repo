#include "iostream"
#include "fstream"
#include "string"
#define QSPI_PATH "D:/Ansu/CPP/VS/CPP_Practise/CPP/Basics_Of_Cpp/Trial.txt"
using namespace std;

#if 0
int main() {

	cout << " Welcome To File Programming." << endl;
	char name[20];
	// "ofstream" is class to use and write something to the file and "fobj" is the object for it..
	ofstream fobj("Trial.txt"); // Opening trial.txt file for writing operation using parametrised constructor.
			//OR
	//ofstream fobj;
	//fobj.open("Trial.txt"); /* This Method also used to open a file .*/

	/* Taking input from user to write into the opened file. */
	cout << "Enter the name to insert to the file" << endl;
	cin >> name;

	/* To write the data into the opened file. */
	fobj << name;
	fobj.close();

	// "ifstream" is class to use and read something from the file and "fobj1" is the object for it..
	ifstream fobj1("Trial.txt"); /// Opening trial.txt file for reading operation using parametrised constructor.
			//OR
	//ifstream fobj1;
	//fobj1.open("Trial.txt"); /* This Method also used to open a file .*/

	cout << "Name present in the opened file: " << endl;
	fobj1 >> name;
	cout << name;
	fobj1.close();
	return 0;
}
#endif

int main() {

	std::ifstream fileStatus;
	std::string filePath = QSPI_PATH;
	std::string strValueInFile = "";
	fileStatus.open(filePath, ios_base::in);
	bool flag = false;
	if (!fileStatus.is_open()) {
		//LOGI("FactoryService::getExternalHSMStatus failed to open /tmp/ehsm-mizaru-result");
		//ret = E_ERROR;
		cout << "### Can Not Open File ###" << endl;
	}
	else {
		fileStatus >> strValueInFile;
		for (char ch : strValueInFile) {
			if (ch != '0') {
				flag = true;
				//cout << "Fuse SUCCESS" << endl;
				break;
				  //cout << "False" << endl;
			}
		}
		if (flag) {
				cout << "Fuse SUCCESS" << endl;
		} else {
			cout << "Fuse FAILURE" << endl;
		}

		/*while (getline(fileStatus, strValueInFile)) {
			cout << "Value Inside File: " << strValueInFile << endl;
			if (strValueInFile.find("0000000000000000000000000000000000000000000000000000000000000000") != std::string::npos) {
				cout << "Fuse FAILURE" << endl;
			}
			else {
				cout << "Fuse SUCCESS" << endl;
			}
		}*/
		cout << strValueInFile << endl;
		fileStatus.close();
	}

	return 0;
}

#if 0
status_file >> value_str;
//LOGI("value from /tmp/ehsm-mizaru-result is : %s ", value_str);
cout << "Value read from File is :  " << value_str << endl;
if (value_str == "0")
{
	//LOGI("getExternalHSMStatus value failure");
	//status = HSM_STATUS::FAILURE;
	cout << "Fuse FAILURE" << endl;
}
else if (value_str != "0")
{
	//LOGI("getExternalHSMStatus value failure");
	//status = HSM_STATUS::SUCCESS;
	cout << "Fuse SUCCESS" << endl;
}
else
{
	//LOGE("Unexpected value in /tmp/ehsm-mizaru-result");
	//ret = E_ERROR;
	cout << "Unexpected value in defined file location" << endl;
}
#endif