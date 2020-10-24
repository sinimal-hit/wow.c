#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<windows.h>
#include<string.h>
//二分查找，定义一个整形有序数组，从数组0号和最后一位开始定义，
//再把中间的数定义好，进行比较。
int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	int left = 0; int right = sizeof(arr) / sizeof(arr[1]) - 1;
	int input;
	int mid = (left + right) / 2;
	printf("请输入需要查找的数：");
	scanf("%d", &input);
	while (left <= right){
		if (input <arr[mid]){
			right = mid - 1;
		}
		else if (input>arr[mid]){
			left = mid + 1;
		}
		else {
			printf("恭喜你找到了：%d", mid);
			break;
		}
	}
	system("pause");
	return 0;
}



//int main(){
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8 };
//	int temp  ;
//	printf("请输入要查找的数:");
//	scanf("%d",&temp);
//	int left = 0;
//	int right = sizeof(arr)/sizeof(arr[1]) - 1;
//	while (left <= right){
//		int mid = (left + right) / 2;
//		if (temp<arr[mid]){ 
//			right = mid - 1;
//		}
//		else if (temp>arr[mid]){
//			left = mid + 1;
//		}
//		else{
//			printf("找到了对应的元素,下标为: %d\n", mid);
//			break;
//		}
//	}
//	
//	system("pause");
//	return 0;
//
//
//
//}