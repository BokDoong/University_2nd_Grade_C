#include <stdio.h>
#include <math.h>
int Sum_Divisor(int x);
//ģȭ�� - �⺻ 
 
int main() {
	int x;
	int sum_x, sum_y;

	for (x=2; x<1000; x++) {		
		sum_x = Sum_Divisor(x);
		sum_y = Sum_Divisor(sum_x);	
		if(x == sum_y && x != sum_x)
			printf("(x=%d, y=%d)ģȭ���Դϴ�.\n", x ,sum_x);
	}
}

int Sum_Divisor(int x) {
	int i, sum=1;
	int y = sqrt(x);
	
	for(i = 2; i <= y; i++) {
		if (x % i == 0) {
			sum += i;
			if (i != (x/i))
				sum += (x/i);
		}
	}
	return sum;
}
