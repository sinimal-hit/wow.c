//ʵ��һ���������ж�һ�����ǲ���������	
//��������ʵ�ֵĺ�����ӡ100��200֮���������
#include<stdio.h>
#include<windows.h>
int isprime(int n){
	if (n == 1||n==0){
		return 0;
	}
	for (int i = 2; i <= n; i++){
			if (n % i == 0){
				return 0;
			}
			printf("%d", n);
			return 1;
		}
	
	}



int main()
{
	for (int i =100;i<=200;i++){
		isprime(i);
	}
	system("pause");
	return 0;
}