#include <stdio.h>
int genders(int j);
int Check_Year(int j);

//���� �ؽ�Ʈ ���� : 981015 1  
//�ѱ��� vs �ܱ��� üũ 
int main() {
	int birth, gen, x;
	int jumin[7], res[2] = {0, };
	char gender[2][5] = {"����", "����"};
	
	FILE *fp;
	fp = fopen("ssn2022.txt", "r");
	if(fp == NULL) {
		printf("error");
		return 1;
	}
	
	while(1) {
		int p;
		fscanf(fp, "%d%*c%d", &birth, &gen);
		
		if(feof(fp)){
			break;
		}
		
		//���������� üũ(5�̸�) 
		if(gen<5) {
			//Check_Year
			//1900��� : 1, 2000��� : 0 
			if(!Check_Year(gen)) {
				p = genders(gen);
				res[p]++;

			}
		}	
	}
	
	for(x=0; x<2; x++)
		printf("%s : %d\n", gender[x], res[x]);	
		
	fclose(fp);
}

int Check_Year(int j) {
	//1900��� : 1
	if(j==1 || j==2 || j==5 || j==6)
		return 1;
	
	//2000��� : 0
	else
		return 0;
}

//�Է� : 9810151 
int genders(int j) {
	int s;
	s = j;
	
	//���� : 1, ���� : 0 
	return (s%2);
}

//for(x=0; x<7; x++) {
//	printf("%d ", jumin[x]);
//	}
//printf("\n");	
	
//<scanf Ȯ��>	
//		for(x=0; x<7; x++) {
//			printf("%d ", jumin[x]);
//		}
//		printf("\n");
