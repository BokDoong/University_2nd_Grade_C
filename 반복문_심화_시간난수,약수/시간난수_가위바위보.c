#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	unsigned seed;
	int my_bet, cp_bet=0;
	int bet_dif;
	srand(time(NULL));              //시간난수 설정 
	
	while(1) {
		printf("!! 자 시작합니다 !!\n");
		printf("가위! 바위! 보!(가위=0, 바위=1, 보=2) : ");
		scanf("%d", &my_bet);
		
		if(my_bet < 0 || my_bet > 2) {
			printf("잘못 입력하셨습니다.\n");
			continue;
		}
		
		cp_bet = rand()%3;          //cp_bet(난수)의 범위 : 0,1,2 
		bet_dif = cp_bet - my_bet;

		printf("컴퓨터 : %d, 나 : %d\n",cp_bet, my_bet);
		
		if (bet_dif == 0)
			printf("비겼습니다.\n");
		else if (bet_dif == 1 || bet_dif == -2 )
			printf("컴퓨터가 이겼습니다.\n");
		else
			printf("당신이 이겼습니다.\n");
	}
}
