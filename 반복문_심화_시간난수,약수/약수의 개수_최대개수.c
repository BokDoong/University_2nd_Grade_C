#include <stdio.h>
#include <math.h>
//범위 값 중 가장많은 약수를 가진 수는?
 
int main() {
	int num_1 = 2001005000, num_2 = 2001015000;
	int i, j, cnt;
	int max_cnt = 0;
	int cnt_num = 0;
	
	for (i = num_1; i <= num_2; i++) {
		cnt = Cnt_Divisor(i);
		
		if (max_cnt < cnt) {
			max_cnt = cnt;               //max_cnt보다 많은 수의 cnt가 나오면 그걸로 바꾼다. 
			cnt_num = i;	             //그때의 수     
		}
	}		
	
	 printf("약수의 개수가 가장 많은 수 : %d, 약수의 개수 : %d", cnt_num, max_cnt);
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
