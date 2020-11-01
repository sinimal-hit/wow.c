#include <stdio.h>
#include<windows.h>
int main(){
	extern  int a;
	printf("%d\n",a);
	system("pause");
	return 0;
}