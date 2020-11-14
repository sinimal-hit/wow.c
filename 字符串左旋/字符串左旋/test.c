#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<windows.h>
//实现一个函数，可以左旋字符串中的k个字符。
//ABCD左旋一个字符得到BCDA
//ABCD左旋两个字符得到CDAB
void fun(char arr[10], int size ,int fly){
	for (int i = 0; i < fly; i++){
		for (int j = 0; j < size-1;j++){
			int temp = arr[j];
			arr[j] = arr[j + 1];
			arr[j + 1] = temp;
		}
	}
	for (int i = 0; i < size; i++){
		printf("%c", arr[i]);
	}
}
int main()
{
	char arr[] = "ABCD";
	int size = 4;
	int fly = 0;//左旋的次数
	printf("请输入左旋的次数：\n");
	scanf("%d", &fly);
	fun(arr, size, fly);
	system("pause");
	return 0;
}