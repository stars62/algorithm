#include<iostream>
using namespace std;

int main() {
	int arr[20];
	int num;
	int max, smax;

	cout << "Enter number of elements in array:" << endl;
	cin >> num;

	cout << "Enter your array" << endl;
	for (int i = 0; i < num; i++) {
		cin >> arr[i];
	}

	if (arr[0] > arr[1]) {
		max = arr[0];
		smax = arr[1];
	}
	else {
		max = arr[1];
		smax = arr[0];
	}

	for (int i = 2; i < num; i++) {
		if (arr[i] > smax) {
			if (arr[i] > max) {
				max = smax;
				max = arr[i];
			}
			else {
				smax = arr[i];
			}
		}
	}
	cout << "Max:" << endl;
	cout << "Next max:" << endl;

	return 0;
}