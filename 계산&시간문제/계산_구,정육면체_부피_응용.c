#include <stdio.h>
#include <math.h>

int main()
{
	const double pi = 3.14;    //pi���� �� �� 
	double rad, sur, vol_circle;
	int a, vol_cube, a_circle;
	
	printf("���� ���� :");
	scanf("%lf", &rad);       //double�� ���� scanf -> %lf 
	
	sur = 4. * pi * pow(rad/2,2);
	vol_circle = (4. * pi * pow(rad/2,3)) / 3.;
	
	printf("���� ǥ���� = %.2f\n", sur);
	printf("���� ���� = %.2f\n", vol_circle);     //double�� ���� printf -> %f 
	
	for(a=1; a<1000; a++) {
		a_circle = (4. * pi * pow(a,3)) / 3.;
		vol_cube = pow(a, 3);
		if(a_circle < vol_cube) {
			printf(" ���� �����ϴ� �� ���� ���� : %d\n", a);
			printf(" �׶��� ������ü ���� : %d", vol_cube);
			break;
		}
	}
}

//const double pi = 3.141592;

