#include <stdio.h>
#include <math.h>
int Cnt_Divisor(int num);
//�������� ����� ������ n���� ���� ��ΰ�?
 
int main() {
	int i, j, cnt_num;    //���� ����, �� ���� ���� 
	int cnt = 0;
	
 	for (i=20102010; i<=21102010; i++) {
 		cnt_num = Cnt_Divisor(i);
 		if(cnt_num == 10)
 			cnt++;
	}
	
	printf("Ư�� ����� ������ �� = %d��", cnt);
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
