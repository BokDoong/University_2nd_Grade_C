#include <stdio.h>
#include <math.h>
int main()
{	
	double principal=10000000, tot, rate=0.05;
	int years = 10;
	tot = principal*pow(1+rate, 10);
	printf("гу = %.1f\n", tot);
}
