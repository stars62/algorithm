#include<iostream>
using namespace std;

int binarySearch(int arr[], int size, int desired) {
	//基础的二分查找函数
	int left = 0, right = size - 1, middle;
	//初始化边界，定义搜索区间的左右端点

	while (left <= right) {
		middle = left + (right - left) / 2;

		if (arr[middle] == desired) {
			return middle;
		}
		//刚好要找的就在中间，直接返回下标志
		else if (desired < arr[middle]) {
			right = middle - 1;
		}//目标更小，目标一定在左半区，右边界往左移
		else {
			left = middle + 1;
		}//目标更大，目标一定在右半区，左边界往右移
	}

	return -1;
	//循环结束还没返回，就是整个数组都找遍了，目标不存在
}

int lowerBound(int arr[], int size, int desired) {
	//下界查找
	int left = -1, right = size, middle;
	//如果数组所有元素都 ≥ 目标：右阵营从下标 0 开始，最终返回 0
	//如果数组所有元素都 < 目标：右阵营从数组末尾之后开始，最终返回 size

	while (right - left > 1) {
		//缩小范围，只要左界和右界中间还有元素就继续缩小
		middle = left + (right - left) / 2;

		if (arr[middle] <= desired) {
			left = middle;
		}
		else {
			right = middle;
		}
	}
	return right;
	//第一个大于等于目标值的元素的下标，找到了下界
}

int upperBound(int arr[], int size, int desired) {
	//用来找上界
	int left = -1, right = size, middle;

	while (right - left > 1) {
		middle = left + (right - left) / 2;

		if (arr[middle] <= desired) {
			left = middle;
		}
		else {
			right = middle;
		}
	}

	return right;
}

int main() {
	int num, arr[50];
	cout << "Enter the length of array:" << endl;
	cin >> num;

	cout << "Enter the num of the array:" << endl;
	for (int i = 0; i < num; i++) {
		cin >> arr[i];
	}

	int desired;
	cout << "Enter which number you want to desire:" << endl;
	cin >> desired;

	if (binarySearch(arr, num, desired) != -1) {
		cout << "Found" << endl;
	}
	else {
		cout << "Not Found" << endl;
	}

	cout << lowerBound(arr, num, 5) << endl;
	cout << lowerBound(arr, num, 6) << endl;
	cout << upperBound(arr, num, 5) << endl;
	cout << upperBound(arr, num, 0) << endl;

	return 0;
}