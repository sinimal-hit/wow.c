#include<stdio.h>
#include<windows.h>
#pragma warning (disable:4996)
int Add(int a, int b)
{
	return a + b;
}
int Sub(int a, int b)
{
	return a - b;
}
int Mul(int a, int b)
{
	return a * b;
}
int Div(int a, int b)
{
	return a / b;
};
int main(){
	printf("������������������");
	int x = 0;
	int y = 0;
	scanf("%d %d", &x, &y);
	char op = 'z';
	printf("������������ţ�+-*/����");
	scanf(" %c", &op);
	if ('+' == op){
		printf("%d+ %d=%d\n", x, y, Add(x, y));
    }
	else if ('-' == op){
		printf("%d - %d = %d\n", x, y, Sub(x, y));
	}
	else if ('*' == op){
		printf("%d * %d = %d", x, y, Mul(x, y));
	}
	else if ('/' == op){
		printf("%d/%d=%d\n", x, y, Div(x, y));

	}
	
	system("pause");
	return 0;

	}





