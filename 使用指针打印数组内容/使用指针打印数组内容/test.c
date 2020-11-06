#include<stdio.h>
#include<windows.h>

//写一个函数打印arr数组的内容，不使用数组下标，使用指针。
//arr是一个整形一维数组。
//指针指向第一个数组下标，然后指针+1，打印数组第二个元素
void func(int* arr,int temp){

	for (int i = 0;i<= temp; i++){
		printf("%d\n", *arr+i);
	}
}
int main()
{
	int arr[] = { 1,2,3,4 };
	int temp = sizeof(arr) / sizeof(arr[0]) - 1;
	func(arr, temp);
	system("pause");
	return 0;
}
