#include<stdio.h>
#include<windows.h>

//�ݹ鷽ʽ
//void func(int n){
//	if (n > 9){
//		func(n / 10);
//	}
//	printf("%d\n",n%10);
//}
//int main()
//{
//	int n = 1234;
//	func(n);
//	
//	return 0;
//}
int func(int n){
	int count = 0;
	for (int i = 0; i <= n; i++){
		count++;
		n = n / 10;
	}
	return count;
}

int main()
{
	int n = 1234; 
	int bill = 1;
	int ret = func(n);
	for (int i = 0; i < ret; i++){
		bill *= 10;
	}
	while (n != 0){
		printf("%d\n", n / bill);
		n = n % bill;
		bill = bill / 10;
	}
	
	

	system("pause");
	return 0;
}