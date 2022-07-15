#include <stdio.h>
#include <math.h>
#define NUM 1000

int main(void) {
	static int prime[NUM+1];       //index=1000���� �ڸ����ִ� �迭 ���� 
	int i, j, Limit;
	int cnt = 0;

	for (i=2; i<=NUM; i++)
		prime[i] = 1;              //index=1~1000���� 1�� ä���. 
	
	Limit = (int)sqrt(NUM);
	for(i=2; i<=Limit; i++) {
		if(prime[i] == 1) {        
			for (j=2*i; j<=NUM; j++) {
				if (j%i == 0)
					prime[j] = 0;
			}
		}
	}
	
	printf("2 ~ %d ������ �Ҽ�\n", NUM);
	for(i=2; i<=NUM; i++)
		if (prime[i] == 1)
			cnt++;
	
	printf("������ %d�� �ֽ��ϴ�.");	
	printf("\n");
	return 0;
}
