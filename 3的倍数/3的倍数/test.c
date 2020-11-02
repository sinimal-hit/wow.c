#include <stdio.h>
#include <windows.h>
int main()
{
	int i;
	for (i = 1; i <= 100; i++){
		if (i % 3 == 0){
			printf("%d\n", i);
		}
	}
	system("pause");
	return 0;
}