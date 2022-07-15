#include <stdio.h>
#include <math.h>
int Cnt_Divisor(int num);
//******자기 자신 포함하는지 안하는지 check*****
int main() {
	int i= 2002005720;
	int res = Cnt_Divisor(i);
	
	printf("%d의 약수의 개수는 %d개입니다.", i, res);
}

int Cnt_Divisor(int num) {
	int x, cnt = 0;
	int s = sqrt(num);
	
	for(x=1; x<=s; x++) {
		if(num % x == 0) {
			cnt++;
			if(x != (num/x))
				cnt++;
		}
	}
	return cnt;
}
