#include "std_lib_facilities.h"

void swap(int *xp, int *yp)
{
	int temp = *xp;
	*xp = *yp;
	*yp = temp;
}

void bubbleSort(int arr[], int n)
{
	int i, j;
	for (i = 0; i < n - 1; i++)

		// Last i elements are already in place   
		for (j = 0; j < n - i - 1; j++)
			if (arr[j] > arr[j + 1])
				swap(&arr[j], &arr[j + 1]);
}


int main(int argc, char *argv[]) {
	int arr[8];
	int arr1[8];
	//cout << argc;

	if (argc == 10) {
		double n = atof(argv[9]);
		for (int i = 1; i < 9; i++) {
			arr[i] = atof(argv[i]);
			cout << arr[i] << endl;
		}
		cout << "Sorted output are:" << endl;
		bubbleSort(arr, n);
		for (int i = 0; i < 8; i++) {
			cout << arr[i + 1] << " position:" << (i) << endl;
			
			arr1[i] = arr[i];
		}

		for (int i = 1; i < 9; i++) {

			if (arr1[i] == n) {
				cout << "That number " << n << " is found at element " << (i-1) << " in the array " << endl;
			}
		}
//		return 0;
	}
	else if (argc > 1 && argc < 10 ) {

		cout << "Please type exact 9 arguments" << endl;
		//return 0;
	}
	else if (argc > 10) {

		cout << "Please type exact 9 arguments" << endl;
	//	return 0;
	}
	
	else {
		cout << "Please type Atlease one Argument" << endl;
		//return 0;
	}
	
	keep_window_open();
	return 0;
	}

	




