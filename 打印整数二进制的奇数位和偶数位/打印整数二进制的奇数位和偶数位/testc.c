#include<stdio.h>
#include<windows.h>
//��ȡһ���������������������е�ż��λ������λ���ֱ��ӡ������������\
//��λ���ӵ�һλ��ʼһ��������λ����
//żλ���ӵڶ�λ��ʼ����������λ����
int main()
{
	int num = 456729102;
	for (int i = 31; i >= 1; i -= 2)
	{
		printf("%d ", (num >> i) & 1);
	}
	printf("\n");
	for (int i = 30; i >= 0; i -= 2)
	{
		printf("%d ", (num >> i) & 1);

	}
	printf("\n");
	// 0001 1011 0011 1001 0010 0010 0000 1110   0 1 0
	//int n = 456729102;
	//for (int i = 0; i <= 30; i +=2)
	//{
	//	printf("%d ", (n>>i)&1);
	//	//printf("%d ", (n >> i) & 1);
	//	
	//	printf("%d ", (1 << i) & n);
	//}
	//printf("\n");

	//for (int i = 1; i <= 31; i += 2)
	//{
	//	printf("%d ",(n >> i)&1);
	//	
	//	//printf("%d ", (1 >> i) & n);
	//}
	//printf("\n");
	system("pause");
	return 0;
}