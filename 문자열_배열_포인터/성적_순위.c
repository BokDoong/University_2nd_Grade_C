#include <stdio.h>

int main() { 
	int i, j, rank;
	int score[10][5] = {{30, 54, 0, 0}, {46, 84, 0, 0}, {75, 88,},
						   {65, 87,}, {98, 65,}, {99, 94,}, {90, 88,},
						   {95,78, }, {98, 80, }, {95, 81, }};
	
	for(i=0; i<10; i++) {
		score[i][2] = score[i][0] + score[i][1];
		score[i][3] = (score[i][0] + score[i][1]) / 2;
	}				
	
	for(i=0; i<10; i++) {
		rank = 1;
		for(j=0; j<10; j++) {
			if(score[i][3] < score[j][3])
				rank++;
		}
		score[i][4] = rank;
	}	   
	
	for(i=0; i<10; i++) {
		printf("학생의 평균 : %d, 순위 : %d위\n", score[i][3], score[i][4]);
	}	
} 
