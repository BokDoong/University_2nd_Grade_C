#include <stdio.h>
#include <math.h>
int prime(int number);

int main() {
	int x, count=0;
	int c1 = 180102030, c2 = 184102030;
//	범위 지정. 
	
//	x+4<=c2 : 마지막 자릿수가 마지막범위 되기 전까지 돌려라. 
	for(x=c1; x<=c2 && x+4<=c2; x++) {
//		사촌소수 조건 : x, x+4 둘 다 소수이다. 
		if(prime(x) && prime(x+4)) {
			count++;
			if(count == 50)
				printf("50번째 사촌 소수 멤버 : (%d, %d)\n", x, x+2);
		}
	}
	printf("사촌 멤버의 개수 : %d개\n", count);
	return 0;
}

int prime(int number) {
	int i, prime=1, limit;
	limit = sqrt(number);
	
	if(number==1)
		return 0;
	if(number==2)
		return 1;
	
	if(number%2==0)
		prime=0;
	else {
		for(i=3; i<=limit && prime; i+=2){
			if(number%i == 0)
				prime = 0;
		}
	}
	
	if(prime)
		return 1;
	else
		return 0;
} // 1 => 소수,, 0 => 소수가 아님. 
