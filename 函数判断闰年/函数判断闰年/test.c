#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<windows.h>
//ʵ�ֺ����ж�year�ǲ������ꡣ
void isyear(int n){
	if (n == 100){
		if (n % 100 == 0){
			printf("������\n");
		}
		else{
			printf("��������\n ");
		}
	}
	else {
		if (n% 4 == 0){
			printf("������\n");
		}
		else{
			printf("��������\n");
		}
	}
	
}

int main()
{
	int year;
	printf("��������Ҫ�жϵ���ݣ�");
	scanf("%d", &year);
	isyear(year);
	system("pause");
	return 0;
}

