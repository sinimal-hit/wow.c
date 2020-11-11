#include<stdio.h>
#include<windows.h>
int main()
{
	char killer = 'A';
	for (killer = 'A'; killer <= 'D'; killer++){
		if ((killer != 'A') + (killer == 'C') + (killer == 'D') + (killer != 'D') == 3){
			printf("Ð×ÊÖ¾ÍÊÇ%c\n", killer);
		}
	}
	system("pause");
	return 0;
}
