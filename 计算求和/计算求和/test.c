#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<windows.h>
//求Sn=a+aa+aaa+aaaa+aaaaa的前5项之和，其中a是一个数字，
//例如：2 + 22 + 222 + 2222 + 22222
int main()
{
	printf("请输入a和n的值以空格间隔：\n");
	int a = 0;
	int n = 0;
	int bill = 1;
	int Sn = 0;
	scanf("%d %d", &a, &n);
	for (int i = 1; i <= n; i++){
		Sn = Sn + a * bill;
		bill *= 10;
	}
	printf("%d\n", Sn);
	system("pause");
	return 0;
	/*printf("请输入需要求和的数和项数\n");
	int a = 0, Sn = 0, n = 0;
	scanf("%d %d", &a, &n);
	int bill = 1;
	for (int i = 1; i <= n; i++){
		Sn = a * bill + Sn;
		bill = bill * 10;
	}
	printf("%d\n", Sn);
	
	system("pause");
	return 0;*/
}