#include <stdio.h>

//int main(void) {
//	int k, i, p;
//	
//	for(k=1; k<=20; k++) {
//		p=1;
//		for(i=2; i<k; i++)
//			if (k % i == 0) p=0;
//			
//		if (p==1)	
//			printf("%d�� �Ҽ��Դϴ�.\n", k);
//	}	
//	
//	return 0;
//} 

//���� �� �� 
int main () {
	int i, num;
	
	for (num=1; num<=20; num++) {
		int cnt = 0;                   //�Ҽ������ƴ��� Ȯ������ ���� ���� 
		for(i=2; i<num; i++) {
			if (num % i == 0)  {  //����� �ִ�. 
				cnt=1;
				break;
			}
		}
		if (cnt == 0)
			printf("%3d", num);
	}
}

