#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<windows.h>
//��Sn=a+aa+aaa+aaaa+aaaaa��ǰ5��֮�ͣ�����a��һ�����֣�
//���磺2 + 22 + 222 + 2222 + 22222
int main()
{
	printf("��������Ҫ��͵���������\n");
	int a = 0, Sn = 0, n = 0;
	scanf("%d %d", &a, &n);
	int bill = 1;
	for (int i = 1; i <= n; i++){
		Sn = a * bill + Sn;
		bill = bill * 10;
	}
	printf("%d\n", Sn);
	
	system("pause");
	return 0;
}