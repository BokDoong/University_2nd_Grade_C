#include <stdio.h>
#include <math.h>
int Cnt_Divisor(int num);
//범위에서 약수의 개수가 n개인 수는 몇개인가?
 
int main() {
	int i, j, cnt_num;    //범위 시작, 끝 정수 지정 
	int cnt = 0;
	
 	for (i=20102010; i<=21102010; i++) {
 		cnt_num = Cnt_Divisor(i);
 		if(cnt_num == 10)
 			cnt++;
	}
	
	printf("특정 약수의 개수의 수 = %d개", cnt);
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
