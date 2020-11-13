#include<stdio.h>
#include<windows.h>
//typedef int(*Cmp)(int a, int b);
void bubbleSort2(int arr[], int size, int(*cmp)(int a,int b)) {
	for (int bound = 0; bound < size; bound++) {
		for (int cur = size - 1; cur > bound; cur--) {
			// cur - 1 的位置在前
			// cur 的位置在后
			// 如果发现 cmp 的函数返回值 为 1
			if (cmp(arr[cur - 1], arr[cur]) == 1) {
				int tmp = arr[cur - 1];
				arr[cur - 1] = arr[cur];
				arr[cur] = tmp;
			}
		}
	}
}
int less(int a, int b) {
	if (a == b) {
		return 0;
	}
	if (a < b) {
		return 1;
	}
	return -1;
}
int main()
{

	int arr[] = { 9, 5, 2, 7 };
	bubbleSort2(arr, 4, less);
	for (int i = 0; i < 4; i++) {
		printf("%d\n", arr[i]);
	}
	system("pause");
	return 0;
}