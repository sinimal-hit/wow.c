#include<stdio.h>
#include<windows.h>
// ָ��ǿ������ת����
int isfun(){
	int a = 0x11223344;
	int* p = &a;
	char* pa = (char*)p;
	if (*pa == 0x44){
		return 1;
	}
	return 0;
}
int isfun1(){
	union un{
		int a;
		char b;
	}u;
	u.a = 0x11223344;
	if (u.b == 0x44){
		return 1;
	}
	return 0;
}


int main()
{

	printf("%d\n", isfun1());
	system("pause");
	return 0;
}