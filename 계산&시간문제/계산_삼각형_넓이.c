#include <stdio.h>
#include <math.h>
int main()
{
	double side, area;
//   정삼각형의 넓이 
	printf("정삼각형의 한 변 : ");
	scanf("%lf", &side);
	
	area = sqrt(3.)/4.*side*side;
	 
	printf("삼각형의 넓이 = %f\n", area);
	
//	  일반 삼각형 넓이	
//    double a=3., b=4., c=5., s;
//    s = (a + b + c)/2.;
//    s = sqrt(s*(s-a)*(s-b)*(s-c));
//    printf("삼각형의 면적 = %lf\n", s);
}
