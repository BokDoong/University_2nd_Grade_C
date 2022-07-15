#include <stdio.h>
int genders(int j);
int Check_Year(int j);

//파일 텍스트 형식 : 981015 1  
//한국인 vs 외국인 체크 
int main() {
	int birth, gen, x;
	int jumin[7], res[2] = {0, };
	char gender[2][5] = {"여자", "남자"};
	
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
		
		//내국인인지 체크(5미만) 
		if(gen<5) {
			//Check_Year
			//1900년생 : 1, 2000년생 : 0 
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
	//1900년생 : 1
	if(j==1 || j==2 || j==5 || j==6)
		return 1;
	
	//2000년생 : 0
	else
		return 0;
}

//입력 : 9810151 
int genders(int j) {
	int s;
	s = j;
	
	//남자 : 1, 여자 : 0 
	return (s%2);
}

//for(x=0; x<7; x++) {
//	printf("%d ", jumin[x]);
//	}
//printf("\n");	
	
//<scanf 확인>	
//		for(x=0; x<7; x++) {
//			printf("%d ", jumin[x]);
//		}
//		printf("\n");
