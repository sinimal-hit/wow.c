#define	_CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<windows.h>
#include<time.h>
#define MAX_ROW 3
#define MAX_COL 3
//1、创建 棋盘并且初始化
//2、打印棋盘
//3、玩家落子（玩家输入行列坐标的方式落子）
//4、电脑落子
//5、判断胜负
//再次回到2中继续执行




//让玩家落子，通过控制台输输入行列表的方式来实现；我们这里用字符x表示玩家输入；
//玩家落子后需要进行校验，1、输入的坐标不能超过数组下标，2、下过子的地方不能再下

void playermove(char chessboard[MAX_ROW][MAX_COL]){
	while (1){
		printf("请您输入坐标（row col）以坐标中间以空格间隔\n");
		int row = 0;
		int col = 0;
		scanf("%d %d", &row, &col);
		if (row < 0 || row >2 || col < 0 || col > 2){
			printf("您输入的坐标不在范围内，请重新输入！\n");
			continue;
		}
		if (chessboard[row][col] != ' '){
			printf("你输入的位置已经有子了！！\n");
			continue;
		}
		chessboard[row][col] = 'x';
		break;
	}
}

//判断是否和棋--------------捏有空格了就是何其了
int isFull(char chessboard[MAX_ROW][MAX_COL]){
	for (int row = 0; row < MAX_ROW; row++){
		for (int col = 0; col < MAX_COL; col++){
			if (chessboard[row][col] == ' '){
				return 0;
			}
		}
	}
	return 1;
}

// 判断胜负关系	我们用 ‘x’表示玩家获胜 ‘o’表示电脑获胜  ‘z’表示和其 
	// ‘ ’表示胜负未分 就是格子沾满了  还没有分出胜负

char iswin(char chessboard[MAX_ROW][MAX_COL]){
	//判断所有行
	for (int row = 0; row < MAX_ROW; row++){
		if (chessboard[row][0] != ' '&& chessboard[row][0] == chessboard[row][1]
			&& chessboard[row][1] == chessboard[row][2]){
			return chessboard[row][0];
		}
	}
	for (int col = 0; col < MAX_COL; col++) {
		if (chessboard[0][col] != ' '
			&& chessboard[0][col] == chessboard[1][col]
			&& chessboard[0][col] == chessboard[2][col]) {
			return chessboard[0][col];
		}
	}
	if (chessboard[0][0] != ' '
		&& chessboard[0][0] == chessboard[1][1]
		&& chessboard[0][0] == chessboard[2][2]) {
		return chessboard[0][0];
	}
	if (chessboard[2][0] != ' '
		&& chessboard[2][0] == chessboard[1][1]
		&& chessboard[2][0] == chessboard[0][2]) {
		return chessboard[2][0];
	}
	// 判定是否和棋
	// 看棋盘中是否有剩余空间
	if (isFull(chessboard)) {
		return 'q';
	}
	return ' ';
}

//电脑落子。随机数-=-=-=-=  判断下过棋子的地方不能再生成,电脑生成的位置用 字符‘o’来表示
void computermove(char chessboard[MAX_ROW][MAX_COL]){
	while (1){
		int row = rand() % MAX_ROW;
		int col = rand() % MAX_COL;
		if (chessboard[row][col] != ' '){
			continue;
		}
		chessboard[row][col] = 'o';
		break;
	}
}

void game()
{
	//1,创建棋盘进行初始化
	char chessboard[MAX_ROW][MAX_COL] = { 0 };
	char winner = ' ';
	for (int row = 0; row < MAX_ROW; row++){
		for (int col = 0; col < MAX_COL; col++){
			chessboard[row][col] = ' ';
		}
	}
	//2、打印棋盘
	while (1){
		printf("+---+---+---+\n");
		for (int row = 0; row < MAX_ROW; row++){
			printf("| %c | %c | %c |\n", chessboard[row][0], chessboard[row][1], chessboard[row][2]);
			printf("+---+---+---+\n");
		}
		//3、玩家落子；
		playermove(chessboard);

		//4、判断胜负关系	
		winner = iswin(chessboard);
		if (winner != ' '){
			break;
		}
		//5、电脑落子  随机数进行落子；依然是在循环内进行
		computermove(chessboard);
		//6、判断胜负关系
		winner = iswin(chessboard);
		if (winner != ' '){
			break;
		}
	}
	printf("+---+---+---+\n");
	for (int row = 0; row < MAX_ROW; row++){
		printf("| %c | %c | %c |\n", chessboard[row][0], chessboard[row][1], chessboard[row][2]);
		printf("+---+---+---+\n");
	}

	if (winner == 'x'){
		printf("恭喜你获胜\n");
	}
	if (winner == 'o'){
		printf("菜鸡\n");
	}
	if (winner == 'q'){
		printf("和棋\n");
	}
}



int menu(){
	printf("=====================\n");
	printf("===== 0、开始游戏====\n");
	printf("===== 1、结束游戏====\n");
	printf("=====================\n");
	int choice;
	printf("请输入您的选择：\n");
	scanf("%d", &choice);
	if ((choice != 0) && (choice != 1)){
		printf("你的输入有误，请重新输入\n");
	}
	return choice;
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
			printf("拜拜!\n");
			break;
		}
	}
	system("pause");
	return 0;
}
