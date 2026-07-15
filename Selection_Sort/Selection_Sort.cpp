#include<iostream>
using namespace std;

void Selection_Sort(int arr[], int size) {
	int min_index, temp;
	
	for (int i = 0; i < size - 1; i++) {
		min_index = i;
		//假设最小值就是第一个
		//外层循环决定要给哪一个位置找最小值

		for (int j = i + 1; j < size; j++) {
			//内层循环在i后面的全部数字里面，去验证到底谁才是最小的
			if (arr[j] < arr[min_index]) {
				min_index = j;
				//找到有比记录的数字还要小，那就更新一下下标

				temp = arr[i];
				arr[i] = arr[min_index];
				arr[min_index] = temp;
				//交换最小值
			}
		}
	}
}

void Print_Array(int arr[], int size) {
	for (int i = 0; i < size; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}

int main() {
	int num;
	int arr[50];
	cout << "Enter the length of array:" << endl;
	cin >> num;

	cout << "Enter the number of array:" << endl;
	for (int i = 0; i < num; i++) {
		cin >> arr[num];
	}

	Selection_Sort(arr, num);
	Print_Array(arr, num);

	return 0;
}