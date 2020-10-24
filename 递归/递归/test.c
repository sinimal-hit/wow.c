#include<stdio.h>
#include<windows.h>
int func(int n){
	if (n == 1){
		return 1;
	}
	return n*func(n - 1);
}
int main()
{
	int a = 5;
	printf("%d\n",func(a));
	system("pause");
	return 0;
}