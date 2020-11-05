#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <windows.h>
//编程实现：两个int（32位）整数m和n的二进制表达中，有多少个位(bit)不同？ 
//输入例子:
//1999 2299
//输出例子 : 7
int main()
{
	int a = 1234, b = 5678;
	int count = 0;
	int temp = a^b;
	for (int i = 0; i < 32; i++){
		if ((1 << i)&temp){
			count++;
		}
	}
	printf("%d\n", count);
	system("pause");
	return 0;


}