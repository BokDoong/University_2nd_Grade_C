#include <stdio.h>

int main() {
	int i, res;
	
	for(i=101; i<1000; i++) {     //�ڸ��� ������ ���� check ���ϱ� 
		if (i%2 == 1) {
			res = i*(i+2)*(i+4);
			if (res/100000000 == 1 && (res%100000) / 10000 == 5 && res%10 == 7)
				printf("%d * %d * %d = %d", i, i+2, i+4, res);
		}
	}
}
