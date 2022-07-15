#include <stdio.h>
void Univ_Score(int num);

int main() {
	int score;
	// 50점대까지 : F
	// 60점대부터 십의 자리 높아질 때마다 D->A 
	char grade[] = {'F', 'F', 'F', 'F', 'F', 'F', 'D', 'C', 'B', 'A', 'A'};
	
	printf("성적을 입력하시오 : ");
	scanf("%d", &score);

	if(score < 0 || score > 100) {
		printf("점수가 잘못 되었습니다.\n");
		return 0;
	}
	
	//십의 자리의 인덱스 출력 
	//각 학점에서 일의 자리가 5가 넘고 100점이면 +추가 
	printf("%d : %c", score, grade[score/10]);
	if((score>60 && score%10 >= 5) || score == 100)
		printf("+\n");
}


