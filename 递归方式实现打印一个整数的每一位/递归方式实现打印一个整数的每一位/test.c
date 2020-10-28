#include<stdio.h>
#include<windows.h>
//递归方式打印整数的每一位；
//使用 求余计算个位数字 ，然后使用除法 
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