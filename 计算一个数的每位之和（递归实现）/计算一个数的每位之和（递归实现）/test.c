#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<windows.h>
//调用DigitSum(1729)，则应该返回1+7+2+9，它的和是19
//输入：1729，输出：19
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