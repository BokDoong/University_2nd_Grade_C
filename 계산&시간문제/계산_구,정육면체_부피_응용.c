#include <stdio.h>
#include <math.h>

int main()
{
	const double pi = 3.14;    //pi변수 정 의 
	double rad, sur, vol_circle;
	int a, vol_cube, a_circle;
	
	printf("구의 지름 :");
	scanf("%lf", &rad);       //double형 변수 scanf -> %lf 
	
	sur = 4. * pi * pow(rad/2,2);
	vol_circle = (4. * pi * pow(rad/2,3)) / 3.;
	
	printf("구의 표면적 = %.2f\n", sur);
	printf("구의 부피 = %.2f\n", vol_circle);     //double형 변수 printf -> %f 
	
	for(a=1; a<1000; a++) {
		a_circle = (4. * pi * pow(a,3)) / 3.;
		vol_cube = pow(a, 3);
		if(a_circle < vol_cube) {
			printf(" 조건 만족하는 한 변의 길이 : %d\n", a);
			printf(" 그때의 정육면체 부피 : %d", vol_cube);
			break;
		}
	}
}

//const double pi = 3.141592;

