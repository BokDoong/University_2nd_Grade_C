#include <stdio.h>
int Calculate_Year(int y, int g);
int Check_Year(int j);
void Swap(int *a, int *b);
void Sort_Array(int * data, int len);

//파일 텍스트 형식 : 981015 1 
int main() {
	int birth, gender, year, month, day;
	int input, size, check=0;
	int jumin[1609];
	//남녀 인원수 check해주는 파일로 몇개인지 읽기
	 
	FILE *fp;
	fp = fopen("ssn2022.txt", "r");
	if(fp == NULL) {
		printf("error");
		return 1;
	}
	
	while(!feof(fp)) {
		fscanf(fp, "%d%*c%d", &birth, &gender);

		//year, month, day
		//year : 년대 계산하여 함수로 계산(1998) 
		year = Calculate_Year(birth, gender);
		month = (birth/100)%100;
		day = birth%100;
		
		//input 형태: 19981015
		input = year*10000 + month*100 + day;
		
		//input(year, month, day)를 배열에 저장 
		jumin[check] = input;
		check++;		
	}
	
	//주민등록번호 배열 정렬
	//숫자가 낮을수록 나이가 많다. 
	size = sizeof(jumin)/sizeof(jumin[0]);
	Sort_Array(jumin, size);
	
	//인덱스에 따라서 몇번째 최고령자인지 알 수 있음. 
	printf("첫번째 최고령자 : %d\n", jumin[0]);
	printf("두번째 최고령자 : %d\n", jumin[1]);
	fclose(fp);
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

//성별에 따른 년생 계산
//input 형태 : 981015, 1or2
int Calculate_Year(int y, int g) {
	int num = y/10000;
	
	//1900년대 태어났을 때 태어난 날 check 
	if(Check_Year(g))
		num += 1900;
	
	//2000년대 태어났을 때 태어난 날 check
	else
		num += 2000;
	
	return num;
}

int Check_Year(int j) {
	//1900년생 : 1
	if(j==1 || j==2 || j==5 || j==6)
		return 1;
	
	//2000년생 : 0
	else
		return 0;
}

//		if(feof(fp)){
//			break;
//		}
