#include <stdio.h>

int main() {
	int i, num = 10;
	int *pos; 
	char ch[] = "char";         //ch�� "char"�� ù �ε����� "c"�� ����Ų��.
	
	pos = &num;
	printf("%d\n", num);
	printf("%d\n", pos);		//������ �ּ� 
	printf("%d\n", *pos);       //������ �� 
	
	printf("%s\n", ch);        //%s : *���� �ʾƵ� ��� ���ڸ� ����Ѵ�.
	printf("%s\n", ch+1);      //'ch+1'�ڸ��� h���� ���ڸ� ����Ѵ�.
	 
	printf("%d\n", ch);		   //%d : ch�� �ּ��� ù �ε����� �ּҸ� ��� 
	printf("%d\n", ch+1);      //ch+1�� "h"�� �ּ� ���. 
	
	int size = sizeof(ch)/sizeof(ch[0]);      //���ڿ��� ũ�� ����. 
	for(i=0; i<size; i++)
		printf("%c", *(ch+i));      
	
	printf("\n\n");
	for(i=0; i<size; i++)
		printf("%d  ", ch+i);
}
