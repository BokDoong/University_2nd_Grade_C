#include <stdio.h>
#include <math.h>

int main()
{
	const double pi = 3.14;    //pi���� �� �� 
	double rad, sur, vol;
	
	printf("���� ������ :");
	scanf("%lf", &rad);       //double�� ���� scanf -> %lf 
	
	sur = 4. * pi * pow(rad,2);
	vol = (4. * pi * pow(rad,3)) / 3.;
	
	printf("���� ǥ���� = %f\n", sur);
	printf("���� ���� = %f\n", vol);     //double�� ���� printf -> %f 
}

//const double pi = 3.141592;

