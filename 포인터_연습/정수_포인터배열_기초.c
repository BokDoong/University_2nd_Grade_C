#include <stdio.h>

//정수 포인터배열은 정수 포인터와 마찬가지로,
//*을 안주면 주솟값이 출력 된다 
int main() {
	int ary1[4] = {1, 3, 5, 7};
	int ary2[4] = {11, 13, 15, 17}; 
	int ary3[4] = {21, 23, 25, 27}; 
	int *ptr_ary[3] = {ary1, ary2, ary3};
	int i, j;
	
	for(i=0; i<3; i++) {
		printf("%d  ", *(ptr_ary[i]));              //각 원소 정수배열의 첫 자리 출력 
	}												//ptr_ary[i]은 각 i의 첫 자리를 가리키고 있다. 
	
	printf("\n\n");
	for(i=0; i<3; i++) {
		for(j=0; j<4; j++) {
			printf("%d  ", ptr_ary[i]+j);   		//각 자리의 주소값 출력
		}								//ptr_ary[i]+j 는 각 원소 i의 +j의 자리를 가리키고 있다.
		printf("\n");
	} 
	
	printf("\n\n"); 
	for(i=0; i<3; i++) {
		for(j=0; j<4; j++) {
			printf("%d  ", *(ptr_ary[i]+j));  		// 각 자리의 값을 출력 			
		}
		printf("\n");
	}
	
	printf("\n\n"); 
	for(i=0; i<3; i++) {
		for(j=0; j<4; j++) {
			printf("%d  ", *(ptr_ary[i])+j);  		// 각 자리의 값의 +j한 결과를 출력 			
		}
		printf("\n");
	} 
	
	printf("\n\n"); 
	for(i=0; i<3; i++) {
		for(j=0; j<4; j++) {
			printf("%d  ", ptr_ary[i][j]);  		//2차원 배열처럼하면 *없이 값 출력가능.			
		}
		printf("\n");
	}
}
