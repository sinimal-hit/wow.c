#include<stdio.h>
#include<windows.h>
//冒泡排序法 将第i个数和i+1个数进行比较，把大的数放在arr[i]里，把小的数放在arr[i+1]里
int main()
{
	int arr[] = { 54,63,25,15,2 };
	
	printf("冒泡排序前：");
	for (int i = 0; i <= sizeof(arr) / sizeof(arr[0]) - 1; i++){
		
		printf("%d ", arr[i]);
	}
	printf("\n");

	/*printf("第1次排序；\n");
	for (int i = 0; i < (sizeof(arr)/sizeof(arr[0]) - 1); i++){
		if (arr[i] > arr[i + 1]){
			int temp = arr[i];
			arr[i] = arr[i + 1];
			arr[i + 1] = temp;
		}
	}
	for (int i = 0; i <= sizeof(arr) / sizeof(arr[0]) - 1; i++){
		printf("%d ", arr[i]);
	}
	printf("\n");
	printf("第2次排序；\n");
	for (int i = 0; i < (sizeof(arr) / sizeof(arr[0]) - 1); i++){
		if (arr[i] > arr[i + 1]){
			int temp = arr[i];
			arr[i] = arr[i + 1];
			arr[i + 1] = temp;
		}
	}
	for (int i = 0; i <= sizeof(arr) / sizeof(arr[0]) - 1; i++){
		printf("%d ", arr[i]);
	}
	printf("\n");
	printf("第3次排序；\n");
	for (int i =0; i < (sizeof(arr) / sizeof(arr[0]) - 1); i++){
		if (arr[i] > arr[i + 1]){
			int temp = arr[i];
			arr[i] = arr[i + 1];
			arr[i + 1] = temp;
		}
	}
	for (int i = 0; i <= sizeof(arr) / sizeof(arr[0]) - 1; i++){
		printf("%d ", arr[i]);
	}
	printf("\n");
	printf("第4次排序；\n");
	for (int i = 0; i < (sizeof(arr) / sizeof(arr[0]) - 1); i++){
		if (arr[i] > arr[i + 1]){
			int temp = arr[i];
			arr[i] = arr[i + 1];
			arr[i + 1] = temp;
		}
	}
	for (int i = 0; i <= sizeof(arr) / sizeof(arr[0]) - 1; i++){
		printf("%d ", arr[i]);
	}
	printf("\n");*/

	//根据上面代码进行改进
	printf("改进后的排序结果：\n");
	for (int j = 0; j < sizeof(arr) / sizeof(arr[0]) - 1; j++){

		for (int i = 0; i < (sizeof(arr) / sizeof(arr[0]) - 1); i++){
			if (arr[i] > arr[i + 1]){
				int temp = arr[i];
				arr[i] = arr[i + 1];
				arr[i + 1] = temp;
			}
		}
	}
	for (int i = 0; i <= sizeof(arr) / sizeof(arr[0]) - 1; i++){
		printf("%d ", arr[i]);
	}
	printf("\n");
	system("pause");
	return 0;

}