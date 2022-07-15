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
		
		//10���� ������ȣ+������ fscanf 
		for(i=0; i<10; i++)
			fscanf(fp, "%d", &test[i]);
				
		//�� �� ������ȣ ���� �� ���� ������ original�� ����. 
		j=0;		
		for(i=1; i<10; i++) {
			original[j] = test[i];
			j++;
		}
		
		//original ���� => �ִ�/�ּҰ� ã�� 
		size = sizeof(original)/sizeof(original[0]);
		Sort_Array(original, size);
		
		//score(2�����迭)�� original�� �ִ�/�ּ� �� �� 7���� ���� ����.
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
	
	//�� ������ ���� ��� final�� ����. 
	for(i=0; i<60; i++) {
		final[i] = (find_Avg(score[i], 7) + find_Avg(score[i+60], 7))/2.;
	}
	
	printf("<����ǥ>\n");
	for(i=0; i<60; i++) {
		printf("%.3f  ", final[i]);
	}
	printf("\n\n");
	
	//final���� ����
	double ranked_final[60];
	for(i=0; i<60; i++)
		ranked_final[i] = final[i];
		
	int length = sizeof(ranked_final)/sizeof(ranked_final[0]);
	Double_Sort_Array(ranked_final, length);
	
	//ranked_final ����ǥ ��� 
	printf("<��� ����ǥ>\n");
	for(i=0; i<60; i++) {
		printf("%.3f  ", ranked_final[i]);
	}
	printf("\n\n"); 
	
	//���ϴ� ����� ����&������ȣ
	while(1) {
		int wanted_rank;
		printf("�� ���� ���ϳ���? : ");
		scanf("%d", &wanted_rank);
		
		if(!wanted_rank)
			break;
		
		Find_Rank(final, ranked_final, wanted_rank);
	}	
}

//��� �̱� origin : ����x ����ǥ,  data : ����o ����ǥ 
void Find_Rank(double * origin, double * data, int rank) {
	int i;
	double avg = data[rank-1];
	
	printf("%d���� ����ǥ\n", rank); 
	for(i=0; i<60; i++) {
		if(avg == origin[i]) {
			printf("���� : %.3f��\n", avg);
			printf("������ȣ : %d��\n", i+1);
		}
	}
}

//double ���� 
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

//��������(index�� ����) 
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
