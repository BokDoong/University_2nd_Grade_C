#include <stdio.h>
#include <math.h>

//에라토스체 : 1~n까지의 소수를 구하는 프로그램. 
int Prime(int number) {
	int i, prime=1, limit;
	limit = sqrt(number);
	
	if(number==1)
		return 0;
		
	if(number==2)
		return 1;
	
	if(number%2 == 0)
		prime = 0;
	else {
		for(i=3; i<=limit && prime; i+=2)
			if(number % i == 0)
				prime = 0;
	}
	
	if(prime)
		return 1;     //소수일때 -> 1 
	else
		return 0; 	  //소수아닐때 -> 0 
}
