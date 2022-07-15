#include <stdio.h>
int Calculate_Year(int y, int g);
int Check_Year(int j);
void Swap(int *a, int *b);
void Sort_Array(int * data, int len);
void Overlap_Array(int * data, int len);

//파일 텍스트형식(주민등록번호 앞 7자리) : 981015 1  
int main() {
	int birth, gender, year, month, day;
	int input, size, check=0;
	//남녀 인원수 check해주는 파일로 몇개인지 읽기
	int jumin[1609];
	 
	FILE *fp;
	fp = fopen("ssn2022.txt", "r");
	if(fp == NULL) {
		printf("error");
		return 1;
	}
	
	while(!feof(fp)) {
		fscanf(fp, "%d%*c%d", &birth, &gender);
		
		//year, month, day
		//input : 예)19981015 
		year = Calculate_Year(birth, gender);
		month = (birth/100)%100;
		day = birth%100;
		input = year*10000 + month*100 + day;
		
		//input(year, month, day)를 배열에 저장 
		jumin[check] = input;
		check++;
		
//		if(feof(fp)){
//			break;
//		}
	}
	fclose(fp);
	
	//저장한 배열을 정렬 
	size = sizeof(jumin)/sizeof(jumin[0]);
	Sort_Array(jumin, size);
	
	//최대 중복 요소 출력
	Overlap_Array(jumin, size);
}

void Overlap_Array(int * data, int len) {
	int i, j, cnt;
	int before_cnt=0, before_num;
	int after_cnt, after_num;
	
	//i에 있는 수와 그 전까지 같은 수의 개수 check
	//그 전까지 중복개수의 최대 갯수와 비교  
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
	printf("가장 많이 태어난 날 : %d\n", after_num);
	printf("그 날에 태어난 사람 수 : %d\n", after_cnt);
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

//성별에 따른 년생 계산(981015, 1)
//num : 98 -> 1998 
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
