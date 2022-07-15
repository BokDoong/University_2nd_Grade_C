#include <stdio.h>
void Swap(int *a, int *b);
void Sort_Array(int * data, int len);
void Birth_Overlap_Array(int * data, int len);

//���� �ؽ�Ʈ ���� : 981015 1 
int main() {
	int birth, gender, year, month, day;
	int input, size, check=0;
	//���� �ο��� check���ִ� ���Ϸ� ����� �б�
	int jumin[1609];
	 
	FILE *fp;
	fp = fopen("ssn2022.txt", "r");
	if(fp == NULL) {
		printf("error");
		return 1;
	}
	
	while(!feof(fp)) {
		fscanf(fp, "%d%*c%d", &birth, &gender);
		
		//month, day
		//input : ��)1015 : �� + �� 
		month = (birth/100)%100;
		day = birth%100;
		input = month*100 + day;
		
		//input(month, day)�� �迭�� ���� 
		jumin[check] = input;
		check++;
		
//		if(feof(fp)){
//			break;
//		}
	}
	fclose(fp);
	
	//������ �迭�� ���� 
	size = sizeof(jumin)/sizeof(jumin[0]);
	Sort_Array(jumin, size);
	
	//�ִ� �ߺ� ��� ���
	Birth_Overlap_Array(jumin, size);
}

void Birth_Overlap_Array(int * data, int len) {
	int i, j, cnt;
	int before_cnt=0, before_num;
	int after_cnt, after_num;
	
	//i�� �ִ� ���� �� ������ ���� ���� ���� check
	//�� ������ �ߺ������� �ִ� ������ ��  
	for(i=1; i<len; i++) {
		cnt=0;
		for(j=0; j<=i; j++) {
			if(data[i] == data[j])
				cnt++;
		}
		if(before_cnt < cnt) {
			before_cnt = cnt;
			before_num = data[i];
		}
	}
	
	after_cnt = before_cnt;
	after_num = before_num;
	printf("���� ���� �¾ �� : %04d\n", after_num);
	printf("�� ���� �¾ ��� �� : %d��\n", after_cnt);
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
