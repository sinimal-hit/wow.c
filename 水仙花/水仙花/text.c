#include<stdio.h>
#include<windows.h>
#include<math.h>
//Ë®ÏÉ»¨  153 = 1^3 + 5^3 + 3^3;

void narcissistic(){
	for (int i = 100; i <= 999; i++){
		if (i == pow((i / 100), 3) + pow(((i % 100) / 10), 3) + pow((i % 10), 3)){
			printf("%d ", i);
		}
	}
}
int main()
{
	narcissistic();
	system("pause");
	return 0;
}