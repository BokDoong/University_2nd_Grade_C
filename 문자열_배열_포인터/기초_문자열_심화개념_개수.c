//char s1[20] = "string!" : ������ �ڸ�(!) �ڿ� NULL���� �ڵ����� ����ȴ�.
//������ : char *s3 = "String!" -> s3�� ���ڿ��� ù�ڸ�(S)�� ����Ų��.

//2���� ���ڿ� 
//char s1[5][20] -> printf("%s", s1[2]) : ����Ҷ� �ϳ��� �ε����� �Է��ص� �ڵ����� �ش� �� ���
//ũ�� : ���� = sizeof(s1)/sizeof(size[0]) 
//char[#]�� �� �ڸ�(#)�� ù ���� ������ �ּҰ� ����Ǿ��ִ�. 
#include <stdio.h>  

int main() {
	char animal[][10] = {"moneky", "elephant", "ant", "turtle", "tiger"};
	int i, count;
	count = sizeof(animal) / sizeof(animal[0]);
	
	for(i=0; i<count; i++) {
		printf("%c\n", *animal[i]);
		printf("%c\n", animal[i]);
		printf("%d\n", animal[i]);
		printf("%s\n", animal[i]); 
	}
}
