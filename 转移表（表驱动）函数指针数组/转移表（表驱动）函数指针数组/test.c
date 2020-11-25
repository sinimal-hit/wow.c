#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<windows.h>
int add(int a, int b){
	return a + b;
}
int sub(int a, int b){
	return a - b;
}
int mul(int a, int b){
	return a*b;
}
int dive(int a, int b){
	return a / b;
}

int main()
{
	int(*func[])(int a, int b) = {
		NULL,
		add,
		sub,
		mul,
		dive,
	};
	int a = 0;
	int b = 0;
	int ret = 0;
	int choice = 0;

	while (1){
		printf("请输入您的选择：");
		scanf("%d", &choice);
		printf("请输入需要计算的两个数：");
		scanf("%d %d", &a, &b);
		ret = (*func[choice])(a, b);
		printf("%d\n", ret);
		/*if (choice == 1){
			ret = add(a, b);
		}
		if (choice == 2){
			ret = sub(a, b);
		}
		if (choice == 3){
			ret = mul(a, b);
		}
		if (choice == 4){
			div(a, b);
		}*/
	}
	system("pause");
	return 0;
}