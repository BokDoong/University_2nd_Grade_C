#include <stdio.h>

//animal[i]�� i�ڸ��� �� ������ ù ���ڸ� ����Ų��.
//animal[i]�� ũ�� i�� ����� ���ҵ� ���� ũ��, null�� ����.
int main() {
	char *animal[5] = {"monkey", "ant", "elephanuhi", "cat", "sheep"};
	
	int i, j;
	int size;
	//sizeof(animal) : "����� ������ ����"�� �ƴ� "i"��ŭ ���´�. 
	
	for(i=0; i<5; i++) {
		size = sizeof(int*);
		printf("%d\n", size);
	}
	size = sizeof(animal)/sizeof(char*);
	printf("%d\n", size);
	size = sizeof(animal)/sizeof(animal[0]);
	printf("%d\n", size);	
//		printf("%s  ", animal[i]);     //�� ������ �ܾ� ��� ���. 
		
	printf("\n\n");
	for(i=0; i<size; i++) {
		for(j=0; j<strlen(animal[i]); j++) {
			printf("%c", *(animal[i]+j));
		}
		printf("\n");
	}
} 
