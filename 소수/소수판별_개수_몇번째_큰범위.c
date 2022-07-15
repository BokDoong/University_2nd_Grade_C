#include <stdio.h>
#include <math.h>
int Find_Non_Divisor(int num);

int main() {
	int num_1 = 2030401020, num_2 = 2030409090;
	int i, res;
	int cnt = 0, cnt_num = 0;
	
	for(i=num_1; i<=num_2; i++) {
		res = Find_Non_Divisor(i);
		if (res == 1) {
			cnt++; 				 // 소수의 개수 
			if (cnt == 100)      //100번째 
				cnt_num = i;
		}                
	}
	printf("소수는 %d개있고, 100번째 소수는 %d입니다.", cnt, cnt_num);	
} 

int Find_Non_Divisor(int num) {
	int x, prime = 1; 
	int s = sqrt(num);            //약수,소수 판별시 약수개수 구할때, (int)sqrt(목표값)을 변수로 지정하면 편리하다. 
	
	for(x=2; x<=s; x++) {
		if(num % x == 0) {
			prime = 0;
			break;               //소수가 아니다. 
		} 
	}
	return prime;
}
