#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<windows.h>
//ʵ��һ�����������������ַ����е�k���ַ���
//ABCD����һ���ַ��õ�BCDA
//ABCD���������ַ��õ�CDAB
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
	int fly = 0;//�����Ĵ���
	printf("�����������Ĵ�����\n");
	scanf("%d", &fly);
	fun(arr, size, fly);
	system("pause");
	return 0;
}