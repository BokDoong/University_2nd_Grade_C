#include <stdio.h>
#include <math.h>

//�����佺ü : 1~n������ �Ҽ��� ���ϴ� ���α׷�. 
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
		return 1;     //�Ҽ��϶� -> 1 
	else
		return 0; 	  //�Ҽ��ƴҶ� -> 0 
}
