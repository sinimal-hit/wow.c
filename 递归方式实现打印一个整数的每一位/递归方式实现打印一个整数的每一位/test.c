#include<stdio.h>
#include<windows.h>
//�ݹ鷽ʽ��ӡ������ÿһλ��
//ʹ�� ��������λ���� ��Ȼ��ʹ�ó��� 
// 1234   1234/10 = 123 
void func(int n){
	if (n > 9){
		 func(n / 10);
	}
	printf("%d\t", (n % 10)); 
}
int main(){
	int num = 17892;
	func(num);
	system("pause");
	return 0;
}