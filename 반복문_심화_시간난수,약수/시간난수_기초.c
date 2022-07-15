#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	unsigned int i, seed;
	int res=0;
	seed = time(0);       //난수 초기화 함수의 매개변수를 현재의 시간으로 지정 
	srand(seed);          //난수 초기화
	//srand(time(NULL))만 해도됨. 

	for(i=0; i<5; i++) {
		res = rand()%30 - 15;		 //최대 15, 30개 지정(범위) 
		printf("%d\n",rand());		 //난수 지정 
		printf("%d\n",seed);         //현재 시간을 가리키는 난수 
		printf("%d   \n", res); 
	}		
}

//난수 발생범위의 식 : rand()%난수범위의 개수 + 시작num => 시작 num으로부터 몇개 
//난수 발생범위의 식_2 : rand()%난수범위의 개수 - 끝num  => 끝 num으로부터 앞으로 몇개 
//rand() % 3 : 0,1,2 (0부터 지정)

 
