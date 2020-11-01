#define	_CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<windows.h>
#include<time.h>
#define MAX_ROW 3
#define MAX_COL 3
//1������ ���̲��ҳ�ʼ��
//2����ӡ����
//3��������ӣ����������������ķ�ʽ���ӣ�
//4����������
//5���ж�ʤ��
//�ٴλص�2�м���ִ��




//��������ӣ�ͨ������̨���������б�ķ�ʽ��ʵ�֣������������ַ�x��ʾ������룻
//������Ӻ���Ҫ����У�飬1����������겻�ܳ��������±꣬2���¹��ӵĵط���������

void playermove(char chessboard[MAX_ROW][MAX_COL]){
	while (1){
		printf("�����������꣨row col���������м��Կո���\n");
		int row = 0;
		int col = 0;
		scanf("%d %d", &row, &col);
		if (row < 0 || row >2 || col < 0 || col > 2){
			printf("����������겻�ڷ�Χ�ڣ����������룡\n");
			continue;
		}
		if (chessboard[row][col] != ' '){
			printf("�������λ���Ѿ������ˣ���\n");
			continue;
		}
		chessboard[row][col] = 'x';
		break;
	}
}

//�ж��Ƿ����--------------���пո��˾��Ǻ�����
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

// �ж�ʤ����ϵ	������ ��x����ʾ��һ�ʤ ��o����ʾ���Ի�ʤ  ��z����ʾ���� 
	// �� ����ʾʤ��δ�� ���Ǹ���մ����  ��û�зֳ�ʤ��

char iswin(char chessboard[MAX_ROW][MAX_COL]){
	//�ж�������
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
	// �ж��Ƿ����
	// ���������Ƿ���ʣ��ռ�
	if (isFull(chessboard)) {
		return 'q';
	}
	return ' ';
}

//�������ӡ������-=-=-=-=  �ж��¹����ӵĵط�����������,�������ɵ�λ���� �ַ���o������ʾ
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
	//1,�������̽��г�ʼ��
	char chessboard[MAX_ROW][MAX_COL] = { 0 };
	char winner = ' ';
	for (int row = 0; row < MAX_ROW; row++){
		for (int col = 0; col < MAX_COL; col++){
			chessboard[row][col] = ' ';
		}
	}
	//2����ӡ����
	while (1){
		printf("+---+---+---+\n");
		for (int row = 0; row < MAX_ROW; row++){
			printf("| %c | %c | %c |\n", chessboard[row][0], chessboard[row][1], chessboard[row][2]);
			printf("+---+---+---+\n");
		}
		//3��������ӣ�
		playermove(chessboard);

		//4���ж�ʤ����ϵ	
		winner = iswin(chessboard);
		if (winner != ' '){
			break;
		}
		//5����������  ������������ӣ���Ȼ����ѭ���ڽ���
		computermove(chessboard);
		//6���ж�ʤ����ϵ
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
		printf("��ϲ���ʤ\n");
	}
	if (winner == 'o'){
		printf("�˼�\n");
	}
	if (winner == 'q'){
		printf("����\n");
	}
}



int menu(){
	printf("=====================\n");
	printf("===== 0����ʼ��Ϸ====\n");
	printf("===== 1��������Ϸ====\n");
	printf("=====================\n");
	int choice;
	printf("����������ѡ��\n");
	scanf("%d", &choice);
	if ((choice != 0) && (choice != 1)){
		printf("���������������������\n");
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
			printf("�ݰ�!\n");
			break;
		}
	}
	system("pause");
	return 0;
}
