#include<stdio.h>
#include<windows.h>
#include<stdlib.h>
struct Test
{
	int Num;
	char *pcName;
	short sDate;
	char cha[2];
	short sBa[4];
}*p = (struct Test*)0x100000;
int main()
{
	int a[3][2] = { (0, 1), (2, 3), (4, 5) };//���ű��ʽȡ���ź���ĵ�ֵ
	int *p;
	p = a[0];
	printf("%d", p[0]);
	//int a[4] = { 1, 2, 3, 4 };
	//int *ptr1 = (int *)(&a + 1);
	//int *ptr2 = (int *)((int)a + 1);
	//printf("%x,%x", ptr1[-1], *ptr2);//
	//printf("%p\n", p + 0x1);//100014
	//printf("%p\n", (unsigned long)p + 0x1);//100000
	//printf("%p\n", (unsigned int*)p + 0x1);//100004
	//int a[5] = { 1, 2, 3, 4, 5 };
	//int *ptr = (int *)(&a + 1);
	//printf("%d,%d", *(a + 1), *(ptr - 1));
	//// 2 5
 //
//
//	//һά����
//	//int a[] = { 1, 2, 3, 4 };
//	//printf("%d\n", sizeof(a));//16 �������ĸ�Ԫ��
//	//printf("%d\n", sizeof(a + 0));//4 ��ʽת��Ϊָ�룬sizeof��int*��
//	//printf("%d\n", sizeof(*a)); // 4 sizeof��a[0]����a������   a��ʽתΪָ���ٽ�����
//	//printf("%d\n", sizeof(a + 1));//4 sizeof(int *)
//	//printf("%d\n", sizeof(a[1]));//4 ������ڶ���Ԫ�صĴ�С 
//	//printf("%d\n", sizeof(&a));//4 ����һ�� ����ָ��ָ������������飬
//	//printf("%d\n", sizeof(*&a));//16 & ���ȼ��� ָ������ ������Ϊ��������
//	//printf("%d\n", sizeof(&a + 1));//4 ָ������ +1  
//	//printf("%d\n", sizeof(&a[0]));//4 ָ����������һ��Ԫ�صĵ�ַ
//	//printf("%d\n", sizeof(&a[0] + 1));//4 ָ���������ڶ���Ԫ�صĵ�ַ
//	
//	
//	//�ַ�����
//	char arr[] = { 'a', 'b', 'c', 'd', 'e', 'f' };
//	//printf("%d\n", sizeof(arr));//6
//	//printf("%d\n", sizeof(arr + 0));//4 sizeof(char*)
//	//printf("%d\n", sizeof(*arr));//1 sizeof(arr[0])�����������ʽת��Ϊָ���ڽ�����Ϊָ��ָ�������Ԫ��
//	//printf("%d\n", sizeof(arr[1]));// 1 ����ĵڶ���Ԫ�ش�С
//	//printf("%d\n", sizeof(&arr));// 4 arr(*)[]����ָ�룬ָ��ָ����������
//	//printf("%d\n", sizeof(&arr + 1));//4 ����ָ�� ָ���������һԪ�ص�ַ+1 �ĵ�ַ
//	//printf("%d\n", sizeof(&arr[0] + 1));//4 sizeof(char*)
//	
//	//printf("%d\n", strlen(arr));//δ������Ϊ �˴����ַ�����û��\0��β
//	//printf("%d\n", strlen(arr + 0));//ͬ����
//	//printf("%d\n", strlen(*arr));
//	//printf("%d\n", strlen(arr[1]));
//	//printf("%d\n", strlen(&arr));
//	//printf("%d\n", strlen(&arr + 1));
//	//printf("%d\n", strlen(&arr[0] + 1));
//	//
//	
//	char arr[] = "abcdef";
//	
//	printf("%d\n", sizeof(arr));//7 �ַ���\0 ��βҲҪ��������Ԫ�ص���
//	printf("%d\n", sizeof(arr + 0));//4 sizeof(char*)ָ���һ��Ԫ�صĵ�ַ
//	printf("%d\n", sizeof(*arr));// 1 sizeof(char[0]);��������ʽת��Ϊָ��ָ���һ��Ԫ�أ��ڽ�����
//	printf("%d\n", sizeof(arr[1]));//1 
//	printf("%d\n", sizeof(&arr));// 4 ����ָ�� char(*)[]
//	printf("%d\n", sizeof(&arr + 1));// 4 ������һ������ָ��  ָ�������һ������
//	printf("%d\n", sizeof(&arr[0] + 1));// 4 ָ��ĵ�һ��Ԫ��ȡ��ַת��Ϊָ�� ��+1
//	
//	printf("%d\n", strlen(arr));//6 �����ַ������ȣ������� \0
//	printf("%d\n", strlen(arr + 0));//6 �ӵ�һ��Ԫ�ؿ�ʼһ��+1֪������\0��
//	printf("%d\n", strlen(*arr));//δ������Ϊ��������strlen���������涨����Ϊָ��
//	printf("%d\n", strlen(arr[1]));//δ������Ϊ
//	printf("%d\n", strlen(&arr));//6
//	printf("%d\n", strlen(&arr + 1));//δ������Ϊ����ʱ��ָ����������һ����ַ��
//	printf("%d\n", strlen(&arr[0] + 1));//5
//	
//
//	//char *p = "abcdef";
//	/*
//	("%d\n", sizeof(p));//4 sizeof(char*)��ָ��
//	printf("%d\n", sizeof(p + 1));//4��ָ��+1���� sizeof(char*)
//	printf("%d\n", sizeof(*p));//1 size(p[0]) ��pָ�������
//	printf("%d\n", sizeof(p[0]));//1 size(char) ��ʵp[0]���൱��*p 
//	printf("%d\n", sizeof(&p));//����ָ�� 4 sizeof(char**)
//	printf("%d\n", sizeof(&p + 1));//4 ����ָ��
//	printf("%d\n", sizeof(&p[0] + 1));//4 sizeof(char*)
//	printf("%d\n", sizeof(*&p)); // 4 sizeof(char*)��pָ��ȡ��ַ��Ϊ����ָ�룬�ڽ�����
//	printf("%d\n", sizeof(&*p)); //4 sizeof(char*) ��p�Ƚ����á���ȡ��ַ
//
//	printf("%d\n", strlen(p)); //6
//	printf("%d\n", strlen(p + 1)); // 5 ָ���һ���� 
//	printf("%d\n", strlen(*p)); // δ������Ϊ
//	printf("%d\n", strlen(p[1])); // δ����Ϊ
//	printf("%d\n", strlen(&p)); //  δ������Ϊ
//	printf("%d\n", strlen(&p[1] + 1)); // 4 p[1]ȡ��ַָ��ڶ���Ԫ���ټ�1
//	printf("%d\n", strlen(*&p)); // 6 ָ�� ȡ��ַ �ٽ����û���ָ��
//	printf("%d\n", strlen(&*p)); //6 
//	*/
//
//	//int arr[3][4] = { 0 };
//	//printf("%d\n", sizeof(arr)); //48��3��4�� 12��Ԫ�� ==>48���ֽ�
//	//printf("%d\n", sizeof(arr[0])); //16 ��ʾ��һ�е�Ԫ�� 4 �� ==>16
//	//printf("%d\n", sizeof(arr[0] + 1)); // 4 ��1��������ʽתΪָ�� ֻ��Ĵ�С����4���ֽ� 
//	//printf("%d\n", sizeof(&arr[0] + 1)); // 4  ȡ��ַ����ָ����� 
//	//printf("%d\n", sizeof(arr[0][0])); //  4 sizeof(int) ��һ�е�һ��Ԫ��
//	//printf("%d\n", sizeof(*arr[0])); // 4 ����������ʽתΪָ�룬ָ���һ��Ԫ�أ��ٽ�����
//	//printf("%d\n", sizeof(*arr)); // 16
//	////��ά��������ã���ʽתΪ����ָ�� arr==> arr(*)[4] �ڽ��н����� arr[4];
//
//	//printf("%d\n", sizeof(*(arr + 1))); // 16 
//	//printf("%d\n", sizeof(*arr + 1));//4 sizeof(int*)
//	//printf("%d\n", sizeof(&arr[0] + 1)); // 4 sizeof(int(*)[4])
//	//// arr[0] ==> int[4] ==>& int (*)[4] +1 ==> int(*)[4]
//	//printf("%d\n", sizeof(*(arr[0] + 1)));//4
//	//// arr[0]==>int[4] +1 ==> int* ==>* 
	system("pause");
	return 0;
}