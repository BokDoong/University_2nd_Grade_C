#include <stdio.h>
int Calculate_Year(int y, int g);
int Check_Year(int j);
void Swap(int *a, int *b);
void Sort_Array(int * data, int len);
void Differnce_Day(int fisrt, int second);

int main() {
	int birth, gender, year, month, day;
	int input, size, check=0;
	int jumin[1609];
	//���� �ο��� check���ִ� ���Ϸ� ����� �б�
	 
	FILE *fp;
	fp = fopen("ssn2022.txt", "r");
	if(fp == NULL) {
		printf("error");
		return 1;
	}
	
	while(!feof(fp)) {
		fscanf(fp, "%d%*c%d", &birth, &gender);

		//year, month, day 
		year = Calculate_Year(birth, gender);
		month = (birth/100)%100;
		day = birth%100;
		input = year*10000 + month*100 + day;
		
		//input(year, month, day)�� �迭�� ���� 
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
	
	//��� 
	printf("ù��° �ְ���� : %d\n", jumin[0]);
	printf("�ι�° �ְ���� : %d\n", jumin[1]);
	
	//�� �ϼ��� ���� ��� 
	Differnce_Day(jumin[0], jumin[1]);
}

//first(Big)-second(Small) 
void Differnce_Day(int first, int second) {
	int year1, mon1, day1, year2, mon2, day2, i; 
	int ref, dd1, dd2;
	int dates[] = {0, 0, 31, 59, 90, 120, 151, 181, 212, 243, 273, 304, 334};
	
	//y1~d2 ����
	year1=first/10000; mon1=(first/100)%100; day1=first%100;
	year2=second/10000; mon2=(second/100)%100; day2=second%100;

	ref = year1;
	if(year2 < year1)
		ref = year2;
	
	dd1 = 0;
	dd1 = dates[mon1];
	for(i=ref; i<year1; i++) {
		if(i%4 == 0)
			dd1 += 1;
	}
	dd1 = dd1 + day1 + (year1 - ref)*365;
	
	dd2 = 0;
	for(i=ref; i<year2; i++) {
		if(i%4 == 0)
			dd2 += 1;
	} 
	
	dd2 = dates[mon2] + dd2 + day2 + ((year2-ref) * 365);
	printf("�� ��¥ ������ �� ���� %d��\n", abs(dd2 - dd1));
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

//������ ���� ��� ��� 
int Calculate_Year(int y, int g) {
	int num = y/10000;
	
	//1900��� �¾�� �� �¾ �� check 
	if(Check_Year(g))
		num += 1900;
	
	//2000��� �¾�� �� �¾ �� check
	else
		num += 2000;
	
	return num;
}

int Check_Year(int j) {
	//1900��� : 1
	if(j==1 || j==2 || j==5 || j==6)
		return 1;
	
	//2000��� : 0
	else
		return 0;
}
