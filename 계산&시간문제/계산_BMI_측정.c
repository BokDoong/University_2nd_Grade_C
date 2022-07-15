#include <stdio.h>
#include <math.h>

int main()
{
	double weight, height, BMI;
	
	printf("몸무게(kg) : ");
	scanf("%lf", &weight);
	printf("키(m) : ");
	scanf("%lf", &height);    //double : scan할때 %lf, print할때, %f 
	
	BMI = weight / pow(height,2);
	printf("BMI = %.1f", BMI);  //**********소숫점 체크******** 
	if(BMI < 18.5)
		printf("저체중입니다.\n");
	else if (BMI < 24.9)
		printf("정상입니다.\n");
	else if (BMI < 29.9)
		printf("과체중입니다.\n");
	else if (BMI < 34.9)
		printf("비만입니다.\n");
	else
		printf("고도비만입니다.\n");	
}
