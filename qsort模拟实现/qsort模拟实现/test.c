#include<stdio.h>
#include<windows.h>
#include<stdlib.h>
//123, 245, 12, 96, 67
void bubble_sort(int arr[], int size,int (*cmp)(int a ,int b)){
	for (int i = 0; i < size-1; i++){
		for (int j = 0; j <size-1; j++){
			if (cmp(arr[j],arr[j+1])== -1){//a>b
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
	for (int i = 0; i < size; i++){
		printf("%d ", arr[i]);
	}
}
int cmp(int a, int b){
	if (a == b){
		return 0;
	}
	if (a < b){
		return -1;
	}
	return 1;

}
int main()
{
	int arr[] = { 123, 245, 12, 96, 67 };
	int size = 5;
	bubble_sort(arr, size,cmp);
	system("pause");
	return 0;
}