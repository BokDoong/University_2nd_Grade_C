#include <stdio.h>

//2�������ڹ迭 : �̸� ������ ���̸�ŭ �޸𸮸� ���� ������ ũ�Ⱑ �װͺ��� �۴���
//				  ����+\0�� �ƴ� �κ��� null������ ����.
//������ ���ڹ迭 : �� ������ �ԷµǴ� �ڸ�+\0 �� ������ ����.(null���� ���� �� ����
//					���� ���� �޸𸮸� ���� �ȳ�� �ȴ�. 
int main() {
	char *number[] = {"first", "second", "third", "fourth", "fifth"};
	int cnt;
	
	printf("����� ? : ");
	scanf("%d", &cnt);
	
	printf("%d��° : %s\n", cnt, number[cnt-1]);
}
