#include<stdio.h>
#include<windows.h>
int func(int n){
	int count = 0;
	for (int i = 0; i < 32; i++){
		if (n&(1 << i)){
			count++;
		}
	}
	return count;
}
int main()
{
	int n = 123;
	printf("%d\n", func(n));
	system("pause");
	return 0;
}