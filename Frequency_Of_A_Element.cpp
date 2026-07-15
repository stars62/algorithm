#include<iostream>
#include<math.h>
using namespace std;

int main() {
	int num, arr[50], number;

	cout << "Enter number of elements in your array:" << endl;
	cin >> num;

	cout << "Enter your array:" << endl;
	for (int i = 0; i < num; i++) {
		cin >> arr[i];
	}

	int count = 0;
	cout << "Enter the number whose occurence is to be found:" << endl;
	cin >> number;

	for (int i = 0; i < num; i++) {
		if (arr[i] == number) {
			count++;
		}
	}
	cout << "Frequency = " << count << endl;

	return 0;
}