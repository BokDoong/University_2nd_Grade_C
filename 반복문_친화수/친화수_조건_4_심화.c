#include <stdio.h>
#include <math.h>
#define SIZE 100
int Sum_Divisor(int x);
//��Һ�, �Ѵ� �������� �ִ� ����
//(p,q)�� (q,p)�� (p,q)�� �ϳ��� ���´�. 
//�迭 Ȱ�� => �� 
 
int main() {
	int x, stat, j, cnt=0, i=0;
	int sum_x, sum_y;
	int compare[SIZE] = {0};    // �迭 ���� ��� 0���� �ʱ�ȭ 

	for (x=166600000; x<168400000; x++) {
		stat = 0;	                        //stat=0���� �ʱ�ȭ 
		sum_x = Sum_Divisor(x);
		sum_y = Sum_Divisor(sum_x);	
		
		if(x == sum_y) {
			compare[i] = x;					//compare�迭�� ���� ������Ű�� x�� ���� 
			for(j=0; j<=i; j++) {
				if (compare[j] == sum_x) {
					stat=1;                 //stat=1 :  �ߺ��ȴ�. + ���x 
					break;
				}
			}
			if (stat == 0) {				
				printf("(x=%d, y=%d)ģȭ���Դϴ�.\n", x ,sum_x);
				cnt++;
			}
			i++;
		}
	}
	printf("ģȭ���� %d���� ���� �ֽ��ϴ�.\n", cnt);
	return 0;
}

int Sum_Divisor(int x) {
	int i, sum=1;
	int y = sqrt(x);
	
	for(i = 2; i <= y; i++) {
		if (x % i == 0) {
			sum += i;
			if (i != (x/i))
				sum += x/i;
		}
	}
	
	return sum;
}
