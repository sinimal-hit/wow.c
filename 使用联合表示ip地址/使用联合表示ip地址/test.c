#include<stdio.h>
#include<windows.h>

union IP{
	int data;//ip的数字表示；
	struct Point{
		char a;
		char b;
		char c;
		char d;
	}point;

};
union ip{
	int date;
	char a;
	char b;
	char c;
	char d;
}pointe;
int main()
{
	union IP ip;
	ip.data = 0x11223344;
	pointe.date = 0x11223344;
	printf("%d.%d.%d.%d\n", ip.point.a, ip.point.b, ip.point.c, ip.point.d);
	printf("%d.%d.%d.%d\n", pointe.a, pointe.b, pointe.c, pointe.d);
	system("pause");
	return 0;
}