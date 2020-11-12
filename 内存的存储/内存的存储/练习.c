#include<stdio.h>
#include<windows.h>
int isDuan(int a){
	char* p = &a;
	/*char* p1 = (char*)p;*/
	if (*p == 0x11){
		return 1;//表示大端字节序
	}
	return 0;//表示小端字节序
}
int main()
{
	int a = 0x11223344;
	printf("%d\n", isDuan(a));


	system("pause");
	return 0;
}