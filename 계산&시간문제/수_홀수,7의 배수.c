#include <stdio.h>

int main() {
	int i, sum=0;
	int cnt = 0;
	
	for(i=5001; i<= 9999; i++) {
		if (i % 2 == 1) 
			sum += i;
		
		if (i % 7 == 0)
			cnt += 1;
	}
	
	printf("Ȧ���� ���� %d, 7�� ����� %d���Դϴ�.", sum, cnt); 
}
