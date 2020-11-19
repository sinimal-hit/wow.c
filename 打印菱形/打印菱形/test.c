#include<stdio.h>
#include<windows.h>
void print(int line){
	for (int row = 1; row <= line; row++){
		for (int cur = 0; cur <= line - row; cur++){
			printf(" ");
		}
		for (int cur = 0; cur < 2 * row - 1; cur++){
			printf("*");
		}
		printf("\n");
	}
	for (int row = 1; row < line; row++){
		for (int cur = 0; cur <= row; cur++){
			printf(" ");
		}
		for (int cur = 2*(line-row)-1; cur >0 ; cur--){
			printf("*");
		}
		printf("\n");
	}
}
int main()
{
	print(5);
	system("pause");
	return 0;
}