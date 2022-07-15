#include <stdio.h>
int Calculate_Year(int y, int g);
int Check_Year(int j);
void Swap(int *a, int *b);
void Sort_Array(int * data, int len);

//���� �ؽ�Ʈ ���� : 981015 1 
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
		//year : ��� ����Ͽ� �Լ��� ���(1998) 
		year = Calculate_Year(birth, gender);
		month = (birth/100)%100;
		day = birth%100;
		
		//input ����: 19981015
		input = year*10000 + month*100 + day;
		
		//input(year, month, day)�� �迭�� ���� 
		jumin[check] = input;
		check++;		
	}
	
	//�ֹε�Ϲ�ȣ �迭 ����
	//���ڰ� �������� ���̰� ����. 
	size = sizeof(jumin)/sizeof(jumin[0]);
	Sort_Array(jumin, size);
	
	//�ε����� ���� ���° �ְ�������� �� �� ����. 
	printf("ù��° �ְ���� : %d\n", jumin[0]);
	printf("�ι�° �ְ���� : %d\n", jumin[1]);
	fclose(fp);
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
//input ���� : 981015, 1or2
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

//		if(feof(fp)){
//			break;
//		}
