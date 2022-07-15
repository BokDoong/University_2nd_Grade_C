#include <stdio.h>
#include <math.h>
#define NUM_1 10101010
#define NUM_2 11101010
int Find_Non_Divisor(int num);

int main() {
	int i, cnt=0;
	int stat;
	
	for(i=NUM_1; i<=NUM_2; i++) {
		stat = 0;
		if (i == (int)sqrt(i) * (int)sqrt(i)) {
			stat = Find_Non_Divisor(i);
			if (stat == 1) {
				cnt++;
			}
		}
	}
	printf("%d�� �ֽ��ϴ�.", cnt);
}

int Find_Non_Divisor(int num) {
	int x, prime = 1; 
	int s = sqrt(num);            //���,�Ҽ� �Ǻ��� ������� ���Ҷ�, (int)sqrt(��ǥ��)�� ������ �����ϸ� ���ϴ�. 
	
	for(x=2; x<s; x++) {
		if(num % x == 0) {
			prime = 0;
			break;    
		} 
	}
	return prime;    //prime=0 : �Ҽ��� �ƴ�.  prime=1 : �Ҽ��̴�. 
}
