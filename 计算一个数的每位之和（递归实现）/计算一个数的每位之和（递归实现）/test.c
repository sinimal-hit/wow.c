#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<windows.h>
//����DigitSum(1729)����Ӧ�÷���1+7+2+9�����ĺ���19
//���룺1729�������19
int DigitSum(n){
	if (n < 10){
		return n;
	}
	return DigitSum(n / 10) + n % 10;
}
int main()
{
	printf("please input:");
	int num;
	scanf("%d", &num);
	printf("output = %d\n", DigitSum(num));
	system("pause");
	return 0;
}