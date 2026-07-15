#include<iostream>
using namespace std;

void Insertion_Sort(int arr[], int size) {
	int temp, j;
	//j代表已经排序好了的数组，目标数组分成两部分，排序好的和没有排序的

	for (int i = 1; i < size; i++) {
		temp = arr[i];
		//先把当前未排序的存起来，后续可能要排序
		j = i - 1;
		//代表排序好的数组最右边的那个元素

		while (j >= 0 && arr[j] > temp) {
			//j >= 0保证已排序数组重新排序到第一个元素了
			//如果已排序数组的最后一位比当前的大，那就交换位置
			arr[j + 1] = arr[j];
			j--;
			//向左移动继续看写一个元素
		}
		arr[j + 1] = temp;
		//while循环结束代表已排序数组重新排序好了
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
	cout << "Enter the length of array:" << endl;
	cin >> num;
	int arr[50];
	for (int i = 0; i < num; i++) {
		cin >> arr[i];
	}

	Insertion_Sort(arr, num);
	Print_Array(arr, num);

	return 0;
}