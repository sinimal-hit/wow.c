#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<windows.h>
//编写一个函数实现n的k次方，使用递归实现。
int func(int n, int k){
	if (k == 0 ){
		return 1;
	}
	return n*func(n, k - 1);
}
int main()
{
	printf("请输入n的k次方两个数以空格间隔\n");
	int n, k;
	scanf("%d %d", &n, &k);
	printf("%d", func(n, k));
	system("pause");
	return 0;
}