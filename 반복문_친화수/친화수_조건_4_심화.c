#include <stdio.h>
#include <math.h>
#define SIZE 100
int Sum_Divisor(int x);
//대소비교, 둘다 범위내에 있는 조건
//(p,q)와 (q,p)중 (p,q)인 하나만 적는다. 
//배열 활용 => 비교 
 
int main() {
	int x, stat, j, cnt=0, i=0;
	int sum_x, sum_y;
	int compare[SIZE] = {0};    // 배열 원소 모두 0으로 초기화 

	for (x=166600000; x<168400000; x++) {
		stat = 0;	                        //stat=0으로 초기화 
		sum_x = Sum_Divisor(x);
		sum_y = Sum_Divisor(sum_x);	
		
		if(x == sum_y) {
			compare[i] = x;					//compare배열에 조건 충족시키는 x값 저장 
			for(j=0; j<=i; j++) {
				if (compare[j] == sum_x) {
					stat=1;                 //stat=1 :  중복된다. + 출력x 
					break;
				}
			}
			if (stat == 0) {				
				printf("(x=%d, y=%d)친화수입니다.\n", x ,sum_x);
				cnt++;
			}
			i++;
		}
	}
	printf("친화수는 %d개의 쌍이 있습니다.\n", cnt);
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
