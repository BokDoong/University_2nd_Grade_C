#include <stdio.h>
#include <math.h>
int main()
{
	double side, area;
//   ���ﰢ���� ���� 
	printf("���ﰢ���� �� �� : ");
	scanf("%lf", &side);
	
	area = sqrt(3.)/4.*side*side;
	 
	printf("�ﰢ���� ���� = %f\n", area);
	
//	  �Ϲ� �ﰢ�� ����	
//    double a=3., b=4., c=5., s;
//    s = (a + b + c)/2.;
//    s = sqrt(s*(s-a)*(s-b)*(s-c));
//    printf("�ﰢ���� ���� = %lf\n", s);
}
