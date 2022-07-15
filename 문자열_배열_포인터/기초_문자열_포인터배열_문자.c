//포인터배열 : 포인터들을 모아 배열로 만든 것 
//char * ptr_array[5]
//형태 : char* char* char* char* char* => 문자형 포인터가 5개인 배열
//ptr_ary[i] = 각 문자(원소)의 첫 자리를 가리킴 
#include <stdio.h>

int main() {
	char * ptr_ary[5];
	int i;
	
	ptr_ary[0] = "dog";
	ptr_ary[1] = "elephant";
	ptr_ary[2] = "ant";
	ptr_ary[3] = "cat";
	ptr_ary[4] = "lion";
	
	for(i=0; i<5; i++) {
		int size = sizeof(ptr_ary[i])/sizeof(char);
		printf("size : %d    ", size);
		
		printf("%d ", ptr_ary[i]);       //각 원소의 첫 알파벳의 주소 
		printf("%d ", ptr_ary+i);		//각 원소의 주소 
		printf("%s ", *(ptr_ary+i));	//값 
		printf("%s\n", ptr_ary[i]);     //값  
	}

}
//ptr_ary + i : 주소를 출력 -> *(ptr_ary+i) 로 값을 출력해야함. 
//ptr_ary[i] : 값을 출력 
