//�����͹迭 : �����͵��� ��� �迭�� ���� �� 
//char * ptr_array[5]
//���� : char* char* char* char* char* => ������ �����Ͱ� 5���� �迭
//ptr_ary[i] = �� ����(����)�� ù �ڸ��� ����Ŵ 
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
		
		printf("%d ", ptr_ary[i]);       //�� ������ ù ���ĺ��� �ּ� 
		printf("%d ", ptr_ary+i);		//�� ������ �ּ� 
		printf("%s ", *(ptr_ary+i));	//�� 
		printf("%s\n", ptr_ary[i]);     //��  
	}

}
//ptr_ary + i : �ּҸ� ��� -> *(ptr_ary+i) �� ���� ����ؾ���. 
//ptr_ary[i] : ���� ��� 
