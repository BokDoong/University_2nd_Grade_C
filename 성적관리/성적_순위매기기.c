#include <stdio.h>

int main() {
	int i, j, rank;
	int stud[10] = {45, 92, 88, 34, 88, 95, 82, 59, 70, 76};
	
	for(i=0; i<10; i++) {
		//rank=1 인게 중요! 
		rank = 1;
		
		for(j=0; j<10; j++) {
			//전체에서 해당 값보다 큰 값이 있으면 등수+1 
			if(stud[i] < stud[j])
				rank++;
		}
		printf("%d점의 등수 : %d등\n", stud[i], rank);
	}
}
