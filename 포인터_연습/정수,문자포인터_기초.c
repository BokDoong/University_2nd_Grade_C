#include <stdio.h>

int main() {
	int a = 10; 
	int* b = 100;
	int *c;
	char d[] = "good"; 
	char* ch = "char";
	char* test; 
	
	//���� ������
	printf("%s\n", ch);			   //ch�� "char"�� �����ϰ� ������, �����ʹ� ù �ڸ��� "c"�� ����Ų��. 
	printf("%s\n", ch+1);          //ch+# �� ���ڸ��� �����͸� �ϳ��� �ڷ� �̵��Ѵ�. 
	test = &d;
	printf("%s\n", test);          //���������ʹ� *�� ���� ����Ű�� ���� ���ص� ���� ��µ�.
	printf("%s\n", test+1); 
	printf("%d\n", test); 
	
	printf("\n\n");
	//���� ������ 
	printf("%d\n", b);	
	c = &a;        
	printf("%d\n", c);       //c�� ����Ű�� �ּ� ��� 
	printf("%d\n", *c);		 //c�� ����Ű�� ���� ���� ��� 
} 
