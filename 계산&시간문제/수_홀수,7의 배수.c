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
	
	printf("홀수의 합은 %d, 7의 배수는 %d개입니다.", sum, cnt); 
}
