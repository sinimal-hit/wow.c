#include<stdio.h>
#include<windows.h>
void swop(int* a, int* b){
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}
int main()
{
	int a = 10;
	int b = 20;
	swop(&a, &b);
	printf("%d %d", a, b);
	system("pause");
	return 0;
}
//void swop(int a, int b){
//	int temp;
//	temp = a;
//	b = a;
//	temp = b;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	swop(a, b);
//	printf("%d %d", a, b);
//	system("pause");
//	return 0;
//}