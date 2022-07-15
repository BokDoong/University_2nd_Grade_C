#include <stdio.h>
#include <math.h>
int Zeller_Cal(year, mon, day);

//���� �ؽ�Ʈ ���� : 981015 1 
int main() {
	int data1, data2;
	int y, m, d, g, k, p, i;
	int date[7] = {0, }; 
	int *week[7] = {"�Ͽ���", "������", "ȭ����", "������", "�����", "�ݿ���", "�����"};
	
	FILE *fp;
	fp = fopen("ssn2022.txt", "r");
	
	if(fp == NULL) {
		printf("error");
		return 1;
	}
	
	while(1) {
		//��/��/��/���� -> 2,1�ڸ��� �����´�.
		//y:98, m:10, d:15, g=1
		k = fscanf(fp, "%2d%2d%2d%*c%1d", &y, &m, &d, &g);
		if(k==EOF) break;
		
		//���� �� �ڸ��� ���� 2000��/1900�� ���� +=
		if(g==3 || g==4 || g==7 || g==8)
			y += 2000;
		else
			y += 1900;
		
		//  <���ǳ� ������ �¾ ���>
		//g < 5 : ��/�ܱ��� ���� 
		//1.�ش� �⵵ ���� �¾ ��� 
		if(y<2002 && g<5) {
			p = Zeller_Cal(y, m, d);
			date[p]++;
		}
		
		//2.���� ���� ���� �� �¾ ��� 
		if(y==2002 && m<6 && g<5) {
			p = Zeller_Cal(y, m, d);
			date[p]++;
		}
		
		//3.���� ���� ���� ������ �¾ ��� 
		if(y==2002 && m==6 && d<22 && g<5) {
			p = Zeller_Cal(y, m, d);
			date[p]++;
		}
	}
	
	//���Ϻ� �¾ ��� �� ��� 
	for(i=0; i<7; i++) {
		printf("%s : ", week[i]);
		printf("%d\n", date[i]);
	}
	printf("\n\n");

	//�ִ밪/�ּҰ� ���ϱ� 	
	int max_day=0, min_day=0;
	for(i=1; i<7; i++) {
		if(date[i] > date[max_day])
			max_day = i;
		
		if(date[i] < date[min_day])
			min_day = i;
	}
	
	printf("���� ���� ���� : %s\n", week[max_day]);
	printf("���� ���� ���� : %s", week[min_day]);
	
	fclose(fp);
	//��¥ �� �� ���
//	max_pop = date[0];
//	for(i=1; i<7; i++) {
//		if(max_pop < date[i]) {
//			max_pop = date[i];
//			max_date = i;
//		}
//	}
//	
//	printf("���帹�� ���� : %s\n", week[max_date]);
//	printf("�� �� : %d��\n", max_pop);
}


int Zeller_Cal(int year,int mon,int day) {
	int a, c, weekday;
	
	c=mon;
	a=year;
	
	if(mon==1 || mon==2) {
		c += 12;
		a -= 1;
	}	

	weekday = (21 * (a/100))/4 + (5 * (a%100)) / 4 + (26*(c+1))/10 + day - 1;
	
	return weekday%7;
}
