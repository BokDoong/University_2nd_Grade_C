#include <stdio.h>
#include <math.h>
//���� �� �� ���帹�� ����� ���� ����?
 
int main() {
	int num_1 = 2001005000, num_2 = 2001015000;
	int i, j, cnt;
	int max_cnt = 0;
	int cnt_num = 0;
	
	for (i = num_1; i <= num_2; i++) {
		cnt = Cnt_Divisor(i);
		
		if (max_cnt < cnt) {
			max_cnt = cnt;               //max_cnt���� ���� ���� cnt�� ������ �װɷ� �ٲ۴�. 
			cnt_num = i;	             //�׶��� ��     
		}
	}		
	
	 printf("����� ������ ���� ���� �� : %d, ����� ���� : %d", cnt_num, max_cnt);
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
