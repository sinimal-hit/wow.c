//�ݹ�ͷǵݹ�ֱ�ʵ�����n��쳲�������
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<windows.h>
//���룺5  �����5  ���룺10�� �����55  ���룺2�� �����1
// 1 1 2 3 5 8 13 21 34 55 
//��һ��͵ڶ����1���������ǵ�һ��͵ڶ���ĺ͡��Դ����ơ�
//int fib(int n){
//	if (n == 1){
//		return 1;
//	}
//	if (n == 2){
//		return 1;
//	}
//	int left1 = 1;
//	int left2 = 1;
//	int cur;
//	for (int i = 3; i <= n; i++){
//		cur = left1 + left2;
//		left1 = left2;
//		left2 = cur;
//	}
//	return cur;
//}
int fib(int n){
	if (n == 1){
		return 1;
	}
	if (n == 2){
		return 1;
	}
	return fib(n - 1) + fib(n - 2);
}
int main()
{
	printf("��������Ҫ���ҵĵ�n��쳲�������\n");
	int n;
	scanf("%d", &n);
	printf("��%d��쳲��������ж�Ӧ������%d\n", n, fib(n));
	system("pause");
	return 0;
}

