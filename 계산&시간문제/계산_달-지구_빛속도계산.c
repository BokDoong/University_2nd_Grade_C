#include <stdio.h>
int main()
{
	int distance = 149597870, speed = 299792, min, sec;
	
	sec = distance/speed;     //��ü �ʸ� ���� ���Ѵ�. 
	min = sec / 60;           //60���� ���� ���� ���Ѵ�. 
	sec = sec % 60;			  //60���� ���� �������� �ʸ� ���Ѵ�. 
	
	printf("%d�� %d��\n", min, sec);
}

//1�� = 7�� 
