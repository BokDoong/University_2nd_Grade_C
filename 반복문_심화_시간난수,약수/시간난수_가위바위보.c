#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	unsigned seed;
	int my_bet, cp_bet=0;
	int bet_dif;
	srand(time(NULL));              //�ð����� ���� 
	
	while(1) {
		printf("!! �� �����մϴ� !!\n");
		printf("����! ����! ��!(����=0, ����=1, ��=2) : ");
		scanf("%d", &my_bet);
		
		if(my_bet < 0 || my_bet > 2) {
			printf("�߸� �Է��ϼ̽��ϴ�.\n");
			continue;
		}
		
		cp_bet = rand()%3;          //cp_bet(����)�� ���� : 0,1,2 
		bet_dif = cp_bet - my_bet;

		printf("��ǻ�� : %d, �� : %d\n",cp_bet, my_bet);
		
		if (bet_dif == 0)
			printf("�����ϴ�.\n");
		else if (bet_dif == 1 || bet_dif == -2 )
			printf("��ǻ�Ͱ� �̰���ϴ�.\n");
		else
			printf("����� �̰���ϴ�.\n");
	}
}
