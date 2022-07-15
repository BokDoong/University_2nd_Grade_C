#include <stdio.h>
#include <math.h>
int prime(int number);

int main() {
	int y, p, i, cnt=0;
	int pri[100];
	//n(100)개가 될때까지 소수를 저장. 
	
	for(y=2; cnt<=100; y++) {
		p = prime(y);
		
		if(p == 1) {
			pri[cnt] = y;
			cnt++;
		}
	}
	
	for(i=0; i<100; i++) {
		if(pri[i] + 2 == pri[i+1]) {
			printf("%d %d\n", pri[i], pri[i+1]);
		}
	}
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
} // 1 => 소수, 0 => 소수가 아님. 
