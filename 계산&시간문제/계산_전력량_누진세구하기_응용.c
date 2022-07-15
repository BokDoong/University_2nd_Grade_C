#include <stdio.h>
void Before_Electric_tax(int use);
void After_Electric_tax(int use);

int main(){
	int kw;
	
	printf("���� ��뷮 �Է�: ");
	scanf("%d", &kw);
	
	Before_Electric_tax(kw);
	printf("\n ----------���� �� ----------\n\n");
	After_Electric_tax(kw);
}

void Before_Electric_tax(int use) {
	int total;
	double pay, tax, base;
	
	switch((use-1)/100){       //case�̿� ���� -1�� ���� 100���� ���� �������� case����(������ 1~100,101~200, .. �̱� ����) 
		case 0: 
			pay = 410 + use*60.7;
			break;
		case 1:
			pay = 910 + 6070 + (use-100)*125.9;
			break;
		case 2:
			pay = 1600 + 6070 + 12590 + (use-200)*187.9;
			break;
		case 3:
			pay = 3850 + 6070 + 12590 + 18790 + (use-300)*280.6;
			break;
		case 4:
			pay = 7300 + 6070 + 12590 + 18790 + 28060 + (use-400)*417.7;
			break;
		default :
			pay = 12940 + 6070 + 12590 + 18790 + 28060 + 41770 + (use-500)*709.5;
	}                        //������ ���ϱ�
	 
	tax = pay * 0.1 + 0.5;      // �ΰ��� : �������� 10% (4����� : �Ҽ��� "�ݿø�" ���� "0.5" ����.)
	base = pay * .037;          //���±�ݿ�� : ������ * 0.037 (10�� �̸� ����) 

	total = (int)pay + (int)tax + (int)base - ((int)base)%10; //10�� �̸� ����
	total = total - total%10; //10�� �̸� ����
	
	printf("������ : %d��, �ΰ���ġ�� : %d��, ���±�ݿ�� : %d��\n",
			(int)pay, (int)tax, (int)base - ((int)base)%10);
	printf("������ ���� û������� %d��\n", total);
}

void After_Electric_tax(int use) {
	int total;
	double pay, tax, base;
	
	switch((use-1)/200){       //case�̿� ���� -1�� ���� 100���� ���� �������� case����(������ 1~200,201~400, .. �̱� ����) 
		case 0: 
			pay = 910 + use*93.3;
			break;
		case 1:
			pay = 1600 + 18660 + (use-200)*187.9;
			break;
		default:
			pay = 7300 + 18660 + 37580 + (use-400)*280.6;
			break;
	}                        //������ ���ϱ�
	 
	tax = pay * 0.1 + 0.5;      // �ΰ��� : �������� 10% (4����� : �Ҽ��� "�ݿø�" ���� "0.5" ����.)
	base = pay * .037;          //���±�ݿ�� : ������ * 0.037 (10�� �̸� ����) 

	total = (int)pay + (int)tax + (int)base - ((int)base)%10; //10�� �̸� ����
	total = total - total%10; //10�� �̸� ����
	
	printf("������ : %d��, �ΰ���ġ�� : %d��, ���±�ݿ�� : %d��\n",
			(int)pay, (int)tax, (int)base - ((int)base)%10);
	printf("������ ���� û������� %d��\n", total);
	
}
