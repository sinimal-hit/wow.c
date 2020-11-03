//递归和非递归分别实现求第n个斐波那契数
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<windows.h>
//输入：5  输出：5  输入：10， 输出：55  输入：2， 输出：1
// 1 1 2 3 5 8 13 21 34 55 
//第一项和第二项都是1，第三项是第一项和第二项的和。以此类推。
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
	printf("请输入想要查找的第n个斐波那契数\n");
	int n;
	scanf("%d", &n);
	printf("第%d个斐波那契数列对应的数是%d\n", n, fib(n));
	system("pause");
	return 0;
}

