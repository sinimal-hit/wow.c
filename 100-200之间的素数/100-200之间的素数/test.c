#include<stdio.h>
#include<windows.h>
int main(){
	int temp;
	for (int i = 100; i <= 200;i++){
		for (temp = 2; temp <= i; temp++){
			if (i%temp == 0){
				break;
			}
		}
		if (temp>=i){
			printf("%d",i);
		}
	}
	system("pause");
	return 0;
}