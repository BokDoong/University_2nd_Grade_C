#include <stdio.h>
#include <math.h>

int main()
{
	double weight, height, BMI;
	
	printf("������(kg) : ");
	scanf("%lf", &weight);
	printf("Ű(m) : ");
	scanf("%lf", &height);    //double : scan�Ҷ� %lf, print�Ҷ�, %f 
	
	BMI = weight / pow(height,2);
	printf("BMI = %.1f", BMI);  //**********�Ҽ��� üũ******** 
	if(BMI < 18.5)
		printf("��ü���Դϴ�.\n");
	else if (BMI < 24.9)
		printf("�����Դϴ�.\n");
	else if (BMI < 29.9)
		printf("��ü���Դϴ�.\n");
	else if (BMI < 34.9)
		printf("���Դϴ�.\n");
	else
		printf("�����Դϴ�.\n");	
}
