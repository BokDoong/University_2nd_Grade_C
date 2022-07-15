#include <stdio.h>
void MaxMin(int *array, int Number, int *maximum, int *minimum);

int main(void) {
	int arr[10] = {43, 86, 31, 52, 13, 98, 48, 18, 75, 23};
	int max, min, size;
	size = sizeof(arr) / sizeof(arr[0]);
	
	MaxMin(arr, size, &max, &min);    //함수에 포인터주는법
 
	printf("max = %d, min = %d", max, min);
}

//함수에 포인터(정수)를 주면 -> 함수에서 값이 바꿀수있다.
//배열을 함수에 줄때 -> 포인터 형식으로 준다.(첫자리 가리킴) 
void MaxMin(int *dim, int N, int *max, int *min) {
	int x;
	*max = *min = *dim;      //셋 다 첫번째 요소 가리키는 걸로 초기화. 
	for(x=1; x<N; x++) {     //두번째요소 부터 비교 
		dim++; 				 //dim은 두번째 원소를 가리킨채 시작, 하나씩 자리 이동 
		if(*max < *dim)
			*max = *dim;
		if(*min > *dim)
			*min = *dim;
	}
} 
