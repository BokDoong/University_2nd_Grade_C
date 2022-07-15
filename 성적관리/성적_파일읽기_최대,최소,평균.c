#include <stdio.h>
void Sort_Array(int * data, int len);
double find_Avg(int *array, int size);
void Swap(int *a, int *b);
void Find_Rank(double * origin, double * data, int rank);

int main(void) {
	int i, j, size, cnt=0;
	int test[10], original[9], score[120][7];
	double final[60];
	
	FILE *fp;
	fp = fopen("judge2018.txt", "r");
	if(fp == NULL) {
		printf("error");
		return 1;
	}
	
	while(1) {
		int max, min;
		double avg;
		
		//10개의 고유번호+성적을 fscanf 
		for(i=0; i<10; i++)
			fscanf(fp, "%d", &test[i]);
				
		//맨 앞 고유번호 뺴고 각 줄의 성적만 original에 저장. 
		j=0;		
		for(i=1; i<10; i++) {
			original[j] = test[i];
			j++;
		}
		
		//original 정렬 => 최대/최소값 찾기 
		size = sizeof(original)/sizeof(original[0]);
		Sort_Array(original, size);
		
		//score(2차원배열)에 original의 최대/최소 값 뺀 7개의 점수 저장.
		j=0;
		for(i=1; i<8; i++) {
			score[cnt][j] = original[i];
			j++;
		}
		cnt++;

		if(feof(fp)) {
			break;
		}
	}
	fclose(fp);
	
	//두 종목의 점수 평균 final에 저장. 
	for(i=0; i<60; i++) {
		final[i] = (find_Avg(score[i], 7) + find_Avg(score[i+60], 7))/2.;
	}
	
	printf("<성적표>\n");
	for(i=0; i<60; i++) {
		printf("%.3f  ", final[i]);
	}
	printf("\n\n");
	
	//final점수 정렬
	double ranked_final[60];
	for(i=0; i<60; i++)
		ranked_final[i] = final[i];
		
	int length = sizeof(ranked_final)/sizeof(ranked_final[0]);
	Double_Sort_Array(ranked_final, length);
	
	//ranked_final 성적표 출력 
	printf("<등수 성적표>\n");
	for(i=0; i<60; i++) {
		printf("%.3f  ", ranked_final[i]);
	}
	printf("\n\n"); 
	
	//원하는 등수의 점수&고유번호
	while(1) {
		int wanted_rank;
		printf("몇 등을 원하나요? : ");
		scanf("%d", &wanted_rank);
		
		if(!wanted_rank)
			break;
		
		Find_Rank(final, ranked_final, wanted_rank);
	}	
}

//등수 뽑기 origin : 정렬x 성적표,  data : 정렬o 성적표 
void Find_Rank(double * origin, double * data, int rank) {
	int i;
	double avg = data[rank-1];
	
	printf("%d등의 성적표\n", rank); 
	for(i=0; i<60; i++) {
		if(avg == origin[i]) {
			printf("점수 : %.3f점\n", avg);
			printf("고유번호 : %d번\n", i+1);
		}
	}
}

//double 정렬 
void Double_Sort_Array(double * data, int len) {
	int j, k;
	int max;
	
	for(j=0; j<len-1; j++) {
		max = j;
		for(k=j+1; k<len; k++) {
			if(data[max]<data[k])
				max=k;
		}
		Double_Swap(&data[j], &data[max]);
	}
}

//double Swap
void Double_Swap(double *a, double *b) {
	double temp;
	
	temp = *a;
	*a = *b;
	*b = temp;
}

//선택정렬(index를 저장) 
void Sort_Array(int * data, int len) {
	int j, k;
	int min;
	
	for(j=0; j<len-1; j++) {
		min = j;
		for(k=j+1; k<len; k++) {
			if(data[min]>data[k])
				min=k;
		}
		Swap(&data[j], &data[min]);
	}
}

//Swap
void Swap(int *a, int *b) {
	int temp;
	
	temp = *a;
	*a = *b;
	*b = temp;
}


double find_Avg(int *array, int Number) {
	int sum=0, i;
	double average;
	
	for(i=0; i<Number; i++){
		sum += *(array + i);
	}
	
//	printf("sum : %d\n", sum);
	average = (double)sum/(double)Number;
	return average;
}
