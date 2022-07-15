#include <stdio.h>

//animal[i]는 i자리의 각 원소의 첫 문자를 가리킨다.
//animal[i]의 크기 i가 저장된 원소들 보다 크면, null로 저장.
int main() {
	char *animal[5] = {"monkey", "ant", "elephanuhi", "cat", "sheep"};
	
	int i, j;
	int size;
	//sizeof(animal) : "저장된 원소의 개수"가 아닌 "i"만큼 나온다. 
	
	for(i=0; i<5; i++) {
		size = sizeof(int*);
		printf("%d\n", size);
	}
	size = sizeof(animal)/sizeof(char*);
	printf("%d\n", size);
	size = sizeof(animal)/sizeof(animal[0]);
	printf("%d\n", size);	
//		printf("%s  ", animal[i]);     //각 원소의 단어 모두 출력. 
		
	printf("\n\n");
	for(i=0; i<size; i++) {
		for(j=0; j<strlen(animal[i]); j++) {
			printf("%c", *(animal[i]+j));
		}
		printf("\n");
	}
} 
