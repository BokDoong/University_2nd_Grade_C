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
			cnt++; 				 // �Ҽ��� ���� 
			if (cnt == 100)      //100��° 
				cnt_num = i;
		}                
	}
	printf("�Ҽ��� %d���ְ�, 100��° �Ҽ��� %d�Դϴ�.", cnt, cnt_num);	
} 

int Find_Non_Divisor(int num) {
	int x, prime = 1; 
	int s = sqrt(num);            //���,�Ҽ� �Ǻ��� ������� ���Ҷ�, (int)sqrt(��ǥ��)�� ������ �����ϸ� ���ϴ�. 
	
	for(x=2; x<=s; x++) {
		if(num % x == 0) {
			prime = 0;
			break;               //�Ҽ��� �ƴϴ�. 
		} 
	}
	return prime;
}
