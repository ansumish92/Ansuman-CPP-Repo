#include "iostream"
#include "string"

using namespace std;

#if 0

/* "get_1st_matrix_data" method will take the input from the user for 1st Matrix */

void get_1st_matrix_data(int arr_1[10][10], int *arr_1_row, int *arr_1_col) {

	cout << "Enter the number of row of 1st matrix: " << endl;
	cin >> *arr_1_row;
	cout << "Enter the number of coloumn of 1st matrix: " << endl;
	cin >> *arr_1_col;

	cout << "Enter the element of the 1st matrix :" << endl;
	for (int r = 0; r < *arr_1_row; r++) {
		for (int c = 0; c < *arr_1_col; c++) {
			cin >> arr_1[r][c];
		}
	}
	cout << endl;
}

/* "get_2nd_matrix_data" method will take the input from the user for 2nd Matrix */

void get_2nd_matrix_data(int arr_2[10][10], int *arr_2_row, int *arr_2_col) {

	cout << "Enter the number of row of 2nd matrix: " << endl;
	cin >> *arr_2_row;
	cout << "Enter the number of coloumn of 2nd matrix: " << endl;
	cin >> *arr_2_col;

	cout << "Enter the element of the 1st matrix :" << endl;
	for (int r = 0; r < *arr_2_row; r++) {
		for (int c = 0; c < *arr_2_col; c++) {
			cin >> arr_2[r][c];
		}
	}
	cout << endl;
}

/* "show_1st_matrix_data" method will display the 1st Matrix element */

void show_1st_matrix_data(int arr_1[10][10], int *arr_1_row, int *arr_1_col) {
	cout << "Your 1st matrix :" << endl;

	for (int r = 0; r < *arr_1_row; r++) {
		for (int c = 0; c < *arr_1_col; c++) {
			cout << arr_1[r][c] << "\t";
		}
		cout << "\n";
	}
	cout << endl;
}

/* "show_2nd_matrix_data" method will display the 2nd Matrix element */

void show_2nd_matrix_data(int arr_2[10][10], int* arr_2_row, int* arr_2_col) {
	cout << "Your 1st matrix :" << endl;

	for (int r = 0; r < *arr_2_row; r++) {
		for (int c = 0; c < *arr_2_col; c++) {
			cout << arr_2[r][c] << "\t";
		}
		cout << "\n";
	}
	cout << endl;
}

int main() {
	int arr_1_row = 0, arr_1_col = 0, arr_2_row = 0, arr_2_col = 0;
	int arr_1[10][10], arr_2[10][10], mul_arr[10][10], sum = 0, sum_arr[10][10];
	
	get_1st_matrix_data(arr_1, &arr_1_row, &arr_1_col);
	get_2nd_matrix_data(arr_2, &arr_2_row, &arr_2_col);
	show_1st_matrix_data(arr_1, &arr_1_row, &arr_1_col);
	show_2nd_matrix_data(arr_2, &arr_2_row, &arr_2_col);

	if (arr_1_col != arr_2_row) {
		cout << endl;
		cout << "!!! MATRIX MULTIPLICATION NOT POSSIBLE. !!!" << endl;
		cout << "Reason :" << "arr_1_col: " << arr_1_col << "\t != \t" << "arr_2_row: " << arr_2_row << endl;
		cout << "!!! RE-ENTER THE MATRIX TO MEET arr_1_col = arr_2_row CONDITION !!!" << endl;
		exit(0);
	}
	else {
		cout << endl;
		cout << "MATRIX MULTIPLICATION STARTS..." << endl;
		for (int r = 0; r < arr_1_row; r++) {
			for (int c = 0; c < arr_1_col; c++) {
				for (int k = 0; k < arr_1_col; k++) {
					sum_arr[r][c] = sum_arr[r][c] +(arr_1[c][k] * arr_2[k][c]) ;
					//sum_arr[r][c] = sum;
				}
			}
		}
	}

	return 0;
}

#endif

int main() {
	char s[100] = {0}, temp[100];
	int i = 0;
	cout << "Enter the string: " << endl;

	//while (s[i] != '\n') {
	//	cin >> s[i];
	//	i++;
	//}
	//i = 0;
	//	while(s[i] != '\n') {
	//		cout << "String is: " << s[i] << endl;
	//	}

	cin.getline(s, 100);
	i = 0;
	//cout << endl;
	cout << "Entered String :" << s;

	while (s[i] != '\n') {
		cout << i << endl;
		i++;

	}
	cout << "String clear" << endl;
	cout << "check : " << s;



	return 0;
}