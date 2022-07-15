#include <stdio.h>
#include <math.h>

int main()
{
	const double pi = 3.14;    //pi변수 정 의 
	double rad, sur, vol;
	
	printf("구의 반지름 :");
	scanf("%lf", &rad);       //double형 변수 scanf -> %lf 
	
	sur = 4. * pi * pow(rad,2);
	vol = (4. * pi * pow(rad,3)) / 3.;
	
	printf("구의 표면적 = %f\n", sur);
	printf("구의 부피 = %f\n", vol);     //double형 변수 printf -> %f 
}

//const double pi = 3.141592;

