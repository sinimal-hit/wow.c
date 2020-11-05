#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<windows.h>
#include<time.h>
#define MAX_ROW 9
#define MAX_COL 9
#define DEFAULT_MINE_COUNT 10

int menu(){
	printf("==========================\n");
	printf("======== 0;开始游戏=======\n");
	printf("======== 1;退出游戏=======\n");
	printf("==========================\n");
	int choice;
	printf("请输入您的选择：\n");
	scanf("%d", &choice);
	return choice;
}
//1、创建地图并且初始化、
void init(char showmap[MAX_ROW][MAX_COL], char minemap[MAX_ROW][MAX_COL]){
	//对showmap进行初始化  界面用*表示地图
	for (int row = 0; row < MAX_ROW; row++){
		 for (int col= 0; col < MAX_COL; col++){
			 showmap[row][col] = '*';
		}
	}
	//对mine进行初始化   界面用‘0’表示地图 用‘1’表示地雷
	for (int row = 0; row < MAX_ROW; row++){
		for (int col = 0; col < MAX_COL; col++){
			minemap[row][col] = '0';
		}
	}
	//电脑随机生成地雷  生成是个地雷
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
//2、打印地图
void printmap(char themap[MAX_ROW][MAX_COL]){
	//打印showmaop 
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
//不是地雷增加，显示周围地雷的个数
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
	//1、创建地图并且初始化、
	char showmap[MAX_ROW][MAX_COL] = { 0 };
	char minemap[MAX_ROW][MAX_COL] = { 0 };
	init(showmap, minemap);
	int playmove = 0;
	while (1){
		//2、打印地图、
		printmap(showmap);
		printmap(minemap);
	
		//3、用户输入坐标，对应点开某个位置。进行校验。
		//要不要写个函数呢呀？还是直接在这用户输入*.*
		int row;
		int col;
		printf("请输入翻开的*（row，col）\n");
		scanf("%d %d", &row, &col);
		printmap(showmap);
		if (showmap[row][col] != '*'){
			printf("您已经翻开此位置了,请重新输入\n");
			continue;
		}
		if (row >= MAX_ROW || row < 0 || col >= MAX_COL || col < 0){
			printf("您输入的位置有误，请重新输入\n");
			continue;
		}
		//4、判断用户输入的位置是否是地雷 ，是地雷直接‘gameover’shoumap[row][col] == '1'  踩雷了
		if (minemap[row][col] == '1'){
			printf("gameover!!!!!\n");
			printmap(minemap);
			break;
		}

		//5、不是地雷的话，显示用户周围所点开地雷的个数，
		updateshowmap(showmap, minemap, row, col);
		

		//6、判断游戏是否胜利(用户翻开的*  =  方格子总数-地雷数)两者相等，则游戏胜利，否则游戏失败
		playmove ++;	
		if (playmove == MAX_ROW*MAX_COL - DEFAULT_MINE_COUNT){
			printf("恭喜你游戏胜利了\n");
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
			printf("您输入有误，请您重新输入；\n");
		}
		
	}
	system("pause");
	return 0;
}