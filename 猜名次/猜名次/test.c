#include<stdio.h>
#include<windows.h>
int main()
{
	for (int A = 0; A <= 5; A++){
		for (int B = 0; B <= 5; B++){
			for (int C = 0; C <= 5; C++){
				for (int D = 0; D <= 5; D++){
					for (int E = 0; E <= 5; E++){
						if ((B == 2) + (A == 3) == 1
							&& (B == 2) + (E == 4) == 1
							&& (C == 1) + (D == 2) == 1
							&& (C == 5) + (D == 3) == 1
							&& (E == 4) + (A == 1) == 1){
							if (A*B*C*D*E == 120){
								printf("A = %d  B = %d  C = %d  D = %d  E = %d", A, B, C, D, E);
							}
							
						}
					}
				}
			}
		}
	}
	system("pause");
	return 0;
}