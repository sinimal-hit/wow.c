#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<windows.h>
//��дһ������ʵ��n��k�η���ʹ�õݹ�ʵ�֡�
int func(int n, int k){
	if (k == 0 ){
		return 1;
	}
	return n*func(n, k - 1);
}
int main()
{
	printf("������n��k�η��������Կո���\n");
	int n, k;
	scanf("%d %d", &n, &k);
	printf("%d", func(n, k));
	system("pause");
	return 0;
}