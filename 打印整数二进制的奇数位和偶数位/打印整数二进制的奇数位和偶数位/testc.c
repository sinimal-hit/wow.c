#include<stdio.h>
#include<windows.h>
//获取一个整数二进制序列中所有的偶数位和奇数位，分别打印出二进制序列\
//奇位数从第一位开始一次左移两位数，
//偶位数从第二位开始依次左移两位数。
int main()
{
	// 0 0 0 1 0 1 0 1 1 1 1 1 0 1 0 
	int n = 2;
	for (int i = 31; i >= 1; i -= 2)
	{
		printf("%d ", (n >> i) & 1);
		
		//printf("%d ", (1 >> i) & n);
	}
	printf("\n");

	for (int i = 30; i >= 0; i -= 2)
	{
		printf("%d ", (n >> i) & 1);
		
		//printf("%d ", (1 >> i) & n);
	}
	printf("\n");
	system("pause");
	return 0;
}