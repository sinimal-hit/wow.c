#include<stdio.h>
#include<windows.h>
//实现函数init() 初始化数组为全0
//实现print()  打印数组的每个元素
//实现reverse()  函数完成数组元素的逆置。

void init(int arr[], int size){
	for (int i = 0; i <= size; i++){
		arr[i] = 0;
	}
}
void print(int arr[],int size){
	
	for (int i = 0; i <= size; i++){
		printf("%d ", arr[i]);
	}
	printf("\n");
}
void reverse(int arr[], int size){
	int left = 0;
	int right = size ;
	int temp;
	for (int i = 0; i < (left + right) / 2; i++){
		temp = arr[left];
		arr[left] = arr[right];
		arr[right] = temp;
		left++;
		right--;
	}
	for (int j = 0; j <= size; j++){
		printf("%d ", arr[j]);
	}
	
}
int main()
{
	int arr[] = { 5, 45, 12, 63 };
	int size = sizeof(arr) / sizeof(arr[0]) - 1;
	printf("%d\n", size);
	print(arr,size);
	reverse(arr, size);
	system("pause");
	return 0;
}