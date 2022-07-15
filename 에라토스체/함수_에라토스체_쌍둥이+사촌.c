#include <stdio.h>
#include <math.h>
int prime(int number);

int main() {
	int x, count=0;
	int c1 = 1, c2 = 100;
	//���� ����. 
	
	//ù��° ��������, x+2�� ���������� �Ǳ� ������ ������. 
	for(x=c1; x<=c2 && x+4<=c2; x++) {
		if(prime(x) && prime(x+2) && prime(x+4)) {                    //x�� x+2�� �Ҽ��̸�, 
			count++;
			if(count == 50)
				printf("50��° ���� �Ҽ� ��� : (%d, %d, %d)\n", x, x+2, x+4);
		}
	}
	printf("�ֵ���+���� ����� ���� : %d��\n", count);
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
} // 1 => �Ҽ�,, 0 => �Ҽ��� �ƴ�. 
