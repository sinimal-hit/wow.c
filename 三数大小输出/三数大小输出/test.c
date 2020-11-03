#include<stdio.h>
#include<windows.h>
#pragma warning (disable:4996)

int main()
{
	int a, b, c;
	int p;
	printf("请输入三个不相等的数：");
	scanf("%d %d %d",&a,&b,&c);
	if (a<b){
		p = a; a = b; b = p;
	}
	if (a < c){
		p = a; c = a; a = p;
	}
	if (b < c){
		p = b; b = c; c = p;
	}
	printf("%d %d %d",a,b,c);
	system("pause");
	return 0;

}