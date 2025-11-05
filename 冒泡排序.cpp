#include<iostream>
using namespace std;

void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

void bubbleSort(int* arr, int len) {
	for (int i = 0; i < len - 1; i++) {
		for (int j = 0; j < len - 1 - i; j++) {
			if (arr[j] > arr[j + 1]) {
				swap(arr[j], arr[j + 1]);
			}
				
			}
		}
	}

void printArray(int* arr, int len) {
	for (int i = 0; i < len; i++) {
		cout << arr[i] << endl;

	}
}

int main() {
	
	int arr[10] = { 7,2,6,3,5,4,9,1,8,0 };

	int len = sizeof(arr) / sizeof(arr[0]);

	bubbleSort(arr, len);

	printArray(arr, len);
	
	return 0;

}
