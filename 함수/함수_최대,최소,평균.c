#include <stdio.h>
void MaxMin(int *array, int Number, int *maximum, int *minimum);

int main(void) {
	int arr[10] = {43, 86, 31, 52, 13, 98, 48, 18, 75, 23};
	int max, min, size;
	size = sizeof(arr) / sizeof(arr[0]);
	
	MaxMin(arr, size, &max, &min);    //�Լ��� �������ִ¹�
 
	printf("max = %d, min = %d", max, min);
}

//�Լ��� ������(����)�� �ָ� -> �Լ����� ���� �ٲܼ��ִ�.
//�迭�� �Լ��� �ٶ� -> ������ �������� �ش�.(ù�ڸ� ����Ŵ) 
void MaxMin(int *dim, int N, int *max, int *min) {
	int x;
	*max = *min = *dim;      //�� �� ù��° ��� ����Ű�� �ɷ� �ʱ�ȭ. 
	for(x=1; x<N; x++) {     //�ι�°��� ���� �� 
		dim++; 				 //dim�� �ι�° ���Ҹ� ����Ųä ����, �ϳ��� �ڸ� �̵� 
		if(*max < *dim)
			*max = *dim;
		if(*min > *dim)
			*min = *dim;
	}
} 
