#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<windows.h>
//实现函数判断year是不是润年。
void isyear(int n){
	if (n == 100){
		if (n % 100 == 0){
			printf("是闰年\n");
		}
		else{
			printf("不是闰年\n ");
		}
	}
	else {
		if (n% 4 == 0){
			printf("是闰年\n");
		}
		else{
			printf("不是闰年\n");
		}
	}
	
}

int main()
{
	int year;
	printf("请输入需要判断的年份：");
	scanf("%d", &year);
	isyear(year);
	system("pause");
	return 0;
}

