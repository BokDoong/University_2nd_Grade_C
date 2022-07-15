#include <stdio.h>
#include <math.h>
#define NUM 1000

int main(void) {
	static int prime[NUM+1];       //index=1000까지 자리가있는 배열 생성 
	int i, j, Limit;
	int cnt = 0;

	for (i=2; i<=NUM; i++)
		prime[i] = 1;              //index=1~1000까지 1로 채운다. 
	
	Limit = (int)sqrt(NUM);
	for(i=2; i<=Limit; i++) {
		if(prime[i] == 1) {        
			for (j=2*i; j<=NUM; j++) {
				if (j%i == 0)
					prime[j] = 0;
			}
		}
	}
	
	printf("2 ~ %d 사이의 소수\n", NUM);
	for(i=2; i<=NUM; i++)
		if (prime[i] == 1)
			cnt++;
	
	printf("개수는 %d개 있습니다.");	
	printf("\n");
	return 0;
}
