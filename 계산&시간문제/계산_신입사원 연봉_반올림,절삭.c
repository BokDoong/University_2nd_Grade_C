#include <stdio.h>

int main() {
	int year=1, annual_salary=24000000;
	int house=100000000, total_save=0;
	double inc=0.045, save_rate=.15, interest=0.05;
	
	do {
		total_save += (int)(annual_salary*save_rate + 0.5) + (int)(total_save*interest);  //�ų� ����ݾ� ����15%(�ݿø��ؼ� ����)  + ����*5% 
		
		printf("%3d���� ���� : %10d\t", year, annual_salary);
		printf("���� �ݾ� : %10d\n", total_save);
		
		if (total_save > house) {
			printf("%d�� ���� ����� �Ϸ�", year);
			break;												//�������� ������� Ŀ���� ���� 
		}
		
		annual_salary += (int)(annual_salary*inc+0.5); 
		annual_salary -= annual_salary % 100;              //100�̸����� ���� 
		year++;
		
	} while(1); 
	
}
	
//	do {
//		total_save += (int)(anuual_salary*save_rate+0.5) + (int)(total_save*interest);  //������ 15%, �ų� ��������� 5%���� 
//		
//		printf("%3d���� ���� : %10d\t", year, annual_salary);
//		printf("���� �ݾ� : %10d\n", total_save);
//		
//		if (total_save > house) {
//			printf("%d�� ���� ������� %10d�Դϴ�.\n", year, total_save);
//			break;
//		}
//		
//		year++;
//		annual_salary += (int)(annual_salary*inc + 0.5);       //������ �ų� 4.5%�� ���� 
//		annual_salary -= annual_salary % 100;				   //������ 100�� �̸� ���� 
//	}while(1);
//}

//�տ� (int)+(���� + 0.5)�ϸ� �Ҽ��� ù°�ڸ����� �ݿø��Ͽ� ������ �ȴ�. 
