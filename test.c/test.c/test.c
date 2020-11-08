#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<windows.h>
int main()
{
	int money = 0;
	int total = 0;
	
	printf("ÒªÂòÆûË®µÄÇ®\n");
	scanf("%d", &money);
	if (money <= 0)
	{
		total = 0;
	}
	else
	{
		total = money + money/2;
	}
	printf("%d\n", total);
	system("pause");
	return 0;
}