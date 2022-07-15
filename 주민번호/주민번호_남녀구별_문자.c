#include <stdio.h>
int genders(int x);

int main() {
	int y, g, k, p, i;
	int gen[2] = {0, }; 
	char *gender[2] = {"여자", "남자"};
	
	FILE *fp;
	fp = fopen("ssn2022.txt", "r");
	
	if(fp == NULL) {
		printf("error");
		return 1;
	}
	
	while(1) {
		k = fscanf(fp, "%d%*c%d", &y, &g);
		if(k==EOF) break;
		
		p = genders(g);
		
		gen[p]++;
	}
	
	for(i=0; i<2; i++) {
		printf("%s : ", gender[i]);
		printf("%d\n", gen[i]);
	}
}

//뒷자리의 첫번째글짜가 짝수:여자, 홀수:남자 
int genders(int x) {
	int s = x % 2;
	 
	return s;    //1 : 남자 , 0 : 여자 
}
