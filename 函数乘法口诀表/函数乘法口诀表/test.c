#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<windows.h>
void func(int n){
	for (int i = 1; i <= n; i++){
		for (int p = 1; p <= i; p++){
			int temp = i * p;
			printf("%d*%d=%d\t", p, i, temp);
			}	
		printf("\n");
		}

}
int main()
{
	int input;
	printf("请输入一个数字：");
	scanf("%d",&input);
	func(input);
	system("pause");
	return 0;
}