#include<stdio.h>
#include<windows.h>
//�ݹ鷽ʽ��ӡ������ÿһλ��
//ʹ�� ��������λ���� ��Ȼ��ʹ�ó��� 
void func(int n){
	if (n > 9){
		func(n / 10);
	}
	printf("%d", (n % 10)); 
}
int main(){
	int num = 17892;
	func(num);
	system("pause");
	return 0;
}