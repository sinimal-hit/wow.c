#include<stdio.h>
#include<windows.h>
//��ȡһ���������������������е�ż��λ������λ���ֱ��ӡ������������\
//��λ���ӵ�һλ��ʼһ��������λ����
//żλ���ӵڶ�λ��ʼ����������λ����
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