#include<stdio.h>
#include<windows.h>
int main()
{
	int a = 10;
	int*p = &a;
	int* q = p;
	
	printf("p = %p\n", p);
	printf("*p = %d\n", *p);
	printf("q = %p\n", q);
	printf("*q = %d\n", *q);
	system("pause");
	return 0;
}