#include<stdio.h>
#include<windows.h>
#include<stdlib.h>
int cmp1(const void* a, const void* b) {
	return *(int*)a - *(int*)b;//С��������
}
int cmp2(const void* a, const void* b){//�ַ��� �Ƚ�
	return *(char*)a - *(char*)b;
}

// С���Ƚ�
int cmp3(const void* a, const void* b){
	if ( *(double*)a - *(double*)b >0){
		return 1;
	}
	return -1;
	
}
int main()
{
	//����������
	int arr1[] = { 123, 34, 66, 73, 45 };
	qsort(arr1, 5, sizeof(int), cmp1);
	for (int i = 0; i < 5; i++){
		printf("%d ", arr1[i]);
	}
	printf("\n");
	//�ַ�������
	char arr2[] = { 'a', 'b', 't', 'd' };
	qsort(arr2, 4, sizeof(char), cmp2);
	for (int i = 0; i < 4; i++){
		printf("%c ", arr2[i]);
	}
	printf("\n");
	//�ַ������У�
	char arr3[] = "bavde";
	qsort(arr3, 5, sizeof(char), cmp2);
	for (int i = 0; i < 5; i++){
		printf("%c ", arr3[i]);
	}
	printf("\n");
	//С���ıȽ�
	double arr4[] = { 1.121, 11.98, 3.35, 234.45 };
	qsort(arr4, 4, sizeof(double), cmp3);
	for (int i = 0; i < 4; i++){
		printf("%f ", arr4[i]);
	}
	system("pause");
	return 0;
}