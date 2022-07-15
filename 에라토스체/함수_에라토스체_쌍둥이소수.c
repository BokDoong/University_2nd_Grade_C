#include <stdio.h>
#include <math.h>
int prime(int number);

int main() {
	int x, count=0;
	int c1 = 180102030, c2 = 184102030;
//	범위 지정. 
	
//	x+2가 마지막범위 되기 전까지 돌려라. 
	for(x=c1; x<=c2 && x+2<=c2; x++) {
//		쌍둥이소수 : x와 x+2가 둘다 소수. 
//		prime(x) == 1 : x가 소수이다. 
		if(prime(x) && prime(x+2)) {
			count++;
			if(count == 50)
				printf("50번째 쌍둥이 소수 멤버 : (%d, %d)\n", x, x+2);
		}
	}
	printf("쌍둥이 멤버의 개수 : %d개\n", count);
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
