//정수형 포인터 배열 int *포인터변수[3] = {배열1, 배열2, 배열3}
//형태 : 포인터 배열 변수 = **"배열들이 저장"**
//2차원 문자배열이라고 생각하자. 

#include <stdio.h>

int main() {
	int i, j;
	int ary1[4] = {1, 3, 5, 7};
	int ary2[4] = {11, 13, 15, 17};
	int ary3[4] = {21, 23, 25, 27};
	int *ptr_ary[3] = {ary1, ary2, ary3};
	//ptr_ary[1] = ary2의 첫번째 자리 포인터
	 
	printf("%d\n", *ptr_ary[1]);		   //index1의 첫째 값 출력 
	printf("%d\n", *ptr_ary[1]+1);
	printf("%d\n\n\n", ptr_ary[1]);        //index1의 포인터 "주소" 출력 
	
	for(i=0; i<3; i++) {
		for(j=0; j<4; j++) {
			printf("%d ", *(ptr_ary[i]+j));		//각 자리의 값 출력
//			printf("%d ", ptr_ary[i]+j);        //각 자리의 주소값 출력 
//			printf("%d ", ptr_ary[i][j]); 		//각 자리의 값 출력 
//			printf("%d ", *ptr_ary[i]+j);		//각 포인터의 "첫 번째 값+j" 출력 
		}
		printf("\n");
	}
//	for(i=0; i<3; i++) {
//		printf("%d\n", *ptr_ary[i]);
//	}	
} 
