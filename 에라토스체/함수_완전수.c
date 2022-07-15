#include <stdio.h>
int Sum_Divisor(int num);
int Perfect_Num(int x1, int x2);

int main() {
	int num1, num2, res;
	
	printf("완전수를 구할 범위를 입력하시오(x y) : ");
	scanf("%d %d", &num1, &num2); 
	
	res = Perfect_Num(num1, num2);
	printf("완전수 : %d개", res);
}

int Perfect_Num(int x1, int x2) {
	int x, sum_x;
	int cnt=0;
	
	for(x=x1; x<=x2; x++) {
		sum_x = Sum_Divisor(x);
		if (x == sum_x) {
			cnt++;
		}
	}
	
	return cnt;
}

int Sum_Divisor(int num) {
	int i, sum = 1;
	int y = sqrt(num);
	
	for (i=2; i<=y; i++) {
		if (num % i == 0) {
			sum += i;
			if (i != (num / i))
				sum += (num/i);
		}
	}
	return sum;
}
