#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<windows.h>
#include<time.h>
#define MAX_ROW 9
#define MAX_COL 9
#define DEFAULT_MINE_COUNT 10

int menu(){
	printf("==========================\n");
	printf("======== 0;��ʼ��Ϸ=======\n");
	printf("======== 1;�˳���Ϸ=======\n");
	printf("==========================\n");
	int choice;
	printf("����������ѡ��\n");
	scanf("%d", &choice);
	return choice;
}
//1��������ͼ���ҳ�ʼ����
void init(char showmap[MAX_ROW][MAX_COL], char minemap[MAX_ROW][MAX_COL]){
	//��showmap���г�ʼ��  ������*��ʾ��ͼ
	for (int row = 0; row < MAX_ROW; row++){
		 for (int col= 0; col < MAX_COL; col++){
			 showmap[row][col] = '*';
		}
	}
	//��mine���г�ʼ��   �����á�0����ʾ��ͼ �á�1����ʾ����
	for (int row = 0; row < MAX_ROW; row++){
		for (int col = 0; col < MAX_COL; col++){
			minemap[row][col] = '0';
		}
	}
	//����������ɵ���  �����Ǹ�����
	int n = DEFAULT_MINE_COUNT;
	while (n>0){
		int row = rand() % MAX_ROW;
		int col = rand() % MAX_COL;
		if (minemap[row][col] == '1'){
			continue;
		}
		minemap[row][col] = '1';
		n--;
	}
}
//2����ӡ��ͼ
void printmap(char themap[MAX_ROW][MAX_COL]){
	//��ӡshowmaop 
	printf(" |");
	for (int col = 0; col < MAX_COL; col++){
		printf(" %d", col);
	}
	
	printf("\n");
	printf("-+------------------\n");
	for (int row = 0; row < MAX_ROW; row++){
		printf("%d| ", row);
		for (int col = 0; col < MAX_COL; col++){
			printf("%c ", themap[row][col]);
		}
		printf("\n");
	}
	printf("\n");
}
//���ǵ������ӣ���ʾ��Χ���׵ĸ���
void updateshowmap(char showmap[MAX_ROW][MAX_COL], char minemap[MAX_ROW][MAX_COL], int row, int col){
	int count = 0;
	for (int i = row - 1; i <= row + 1; i++){
		for (int m = col - 1; m <= col + 1; m++){
			if (i < 0 || i >= MAX_ROW || m < 0 || m >= MAX_COL) {
				continue;
			}
			if (minemap[i][m] == '1'){
				count++;
			}
		}
	}
	showmap[row][col] = count + '0';
}
void game(){
	//1��������ͼ���ҳ�ʼ����
	char showmap[MAX_ROW][MAX_COL] = { 0 };
	char minemap[MAX_ROW][MAX_COL] = { 0 };
	init(showmap, minemap);
	int playmove = 0;
	while (1){
		//2����ӡ��ͼ��
		printmap(showmap);
		printmap(minemap);
	
		//3���û��������꣬��Ӧ�㿪ĳ��λ�á�����У�顣
		//Ҫ��Ҫд��������ѽ������ֱ�������û�����*.*
		int row;
		int col;
		printf("�����뷭����*��row��col��\n");
		scanf("%d %d", &row, &col);
		printmap(showmap);
		if (showmap[row][col] != '*'){
			printf("���Ѿ�������λ����,����������\n");
			continue;
		}
		if (row >= MAX_ROW || row < 0 || col >= MAX_COL || col < 0){
			printf("�������λ����������������\n");
			continue;
		}
		//4���ж��û������λ���Ƿ��ǵ��� ���ǵ���ֱ�ӡ�gameover��shoumap[row][col] == '1'  ������
		if (minemap[row][col] == '1'){
			printf("gameover!!!!!\n");
			printmap(minemap);
			break;
		}

		//5�����ǵ��׵Ļ�����ʾ�û���Χ���㿪���׵ĸ�����
		updateshowmap(showmap, minemap, row, col);
		

		//6���ж���Ϸ�Ƿ�ʤ��(�û�������*  =  ����������-������)������ȣ�����Ϸʤ����������Ϸʧ��
		playmove ++;	
		if (playmove == MAX_ROW*MAX_COL - DEFAULT_MINE_COUNT){
			printf("��ϲ����Ϸʤ����\n");
			printmap(minemap);
			break;
		}
	}
	
}
int main()
{
	srand((unsigned)time(0));
	
	while (1){
		int choice = menu();
		if (choice == 0){
			game();
			
		}
		else if (choice == 1){
			printf("bye~~bye~~\n");
			break;
		}
		else{
			printf("���������������������룻\n");
		}
		
	}
	system("pause");
	return 0;
}