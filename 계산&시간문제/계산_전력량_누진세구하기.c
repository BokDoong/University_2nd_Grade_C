#include <stdio.h>
int main(){
	int kw, total;
	double pay, tax, base;
	
	printf("���� ��뷮 �Է�: ");
	scanf("%d", &kw);
	
	switch((kw-1)/100){       //case�̿� ���� -1�� ���� 100���� ���� �������� case����(������ 1~100,101~200, .. �̱� ����) 
		case 0: 
			pay = 410 + kw*60.7;
			break;
		case 1:
			pay = 910 + 6070 + (kw-100)*125.9;
			break;
		case 2:
			pay = 1600 + 6070 + 12590 + (kw-200)*187.9;
			break;
		case 3:
			pay = 3850 + 6070 + 12590 + 18790 + (kw-300)*280.6;
			break;
		case 4:
			pay = 7300 + 6070 + 12590 + 18790 + 28060 + (kw-400)*417.7;
			break;
		default :
			pay = 12940 + 6070 + 12590 + 18790 + 28060 + 41770 + (kw-500)*709.5;
	}                        //������ ���ϱ�
	 
	tax = pay * 0.1 + 0.5;      // �ΰ��� : �������� 10% (4����� : �Ҽ��� "�ݿø�" ���� "0.5" ����.)
	base = pay * .037;          //���±�ݿ�� : ������ * 0.037 (10�� �̸� ����) 

	total = (int)pay + (int)tax + (int)base - ((int)base)%10;
	 //tax(�ΰ���) : 4��5��, base(��ݿ��) : 10�� �̸� ����
	total = total - total%10; 
	//total(�Ѿ�) : 10�� �̸� ����
	
	printf("������ : %d��, �ΰ���ġ�� : %d��, ���±�ݿ�� : %d��\n",
			(int)pay, (int)tax, (int)base - ((int)base)%10);
	printf("������ �������� %d��\n", total);
}

