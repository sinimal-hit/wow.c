#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <windows.h>
//���ʵ�֣�����int��32λ������m��n�Ķ����Ʊ���У��ж��ٸ�λ(bit)��ͬ�� 
//��������:
//1999 2299
//������� : 7
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