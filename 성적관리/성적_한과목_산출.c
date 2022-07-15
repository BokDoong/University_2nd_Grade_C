#include <stdio.h>

int main() {
	int score;
	char grade[] = {'F', 'F', 'F', 'F', 'F', 'F', 'D', 'C', 'B', 'A', 'A'};
	
	printf("성적을 입력하시오 : ");
	scanf("%d", &score);
	
	if(score < 0 || score > 100) {
		printf("점수가 잘못 되었습니다.\n");
		return 0;
	}
	
	printf("%d : %c", score, grade[score/10]);
	if((score > 60 && score%10 >= 5) || score == 100)
		printf("+\n");
}
