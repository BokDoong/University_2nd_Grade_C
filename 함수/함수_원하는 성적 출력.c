#include <stdio.h>

int main() {
	int num, length;
	int stud[10] = {45, 92, 88, 34, 88, 95, 82, 59, 70, 76};
	
	printf("원하는 등수를 입력하세요 : ");
	scanf("%d", &num); 
	length = sizeof(stud)/sizeof(stud[0]);
	
	int res = Cal_Rank(stud, length, num);
	printf("%d등의 점수는 %d점 입니다.\n", num, res);
}

int Cal_Rank(int *array, int size, int target) {
	int i, j, rank;
	
	for(i=0; i<size; i++) {
		//rank=1 인게 중요! 
		rank = 1;
		
		for(j=0; j<size; j++) {
			//전체에서 해당 값보다 큰 값이 있으면 등수+1 
			if(array[i] < array[j])
				rank++;
		}
		if(rank == target)
			return array[i];
	}
}
