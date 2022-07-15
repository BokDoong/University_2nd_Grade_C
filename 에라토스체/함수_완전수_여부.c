#include <stdio.h>
int Sum_Divisor(int num);
int Perfect_Num(int x1, int x2);

int main() {
	int num, res;
	
	printf("�������� ���� ���� �Է��Ͻÿ� : ");
	scanf("%d", &num); 
	
	res = Perfect_Num(num);
	
	if(res)
		printf("������ �Դϴ�.\n");
	else
		printf("�ƴմϴ�.");
}

int Perfect_Num(int x) {
	int sum_x;
	
	sum_x = Sum_Divisor(x);
	if (x == sum_x)
		return 1;
	else
		return 0;
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
