#include <stdio.h>

//animal[i]는 i자리의 각 원소의 첫 문자를 가리킨다.
//animal[][i]의 길이 i가 저장된 원소들 보다 크면, null로 저장.
//문자배열 : sizeof(animal)하면 animal의 총 원소개수 저장. 
//변수[][i] : "저장된 원소의 개수"만큼 저장된다. 
int main() {
	char animal[][10] = {"monkey", "ant", "elephant", "cat", "sheep"};
	
	int i, j;
	int size = sizeof(animal) / sizeof(animal[0]);
	
	for(i=0; i<size; i++)
		printf("%s  ", animal[i]);     //각 원소의 단어 모두 출력. 
	
	printf("\n\n");
	for(i=0; i<size; i++)
		printf("%s  ", animal+i);	  //각 원소의 단어 모두 출력. 
		
	printf("\n\n");
	for(i=0; i<size; i++)
		printf("%d  ", animal[i]);	  //각 문자열의 시작단어 주소 출력. 
		
	printf("\n\n");
	for(i=0; i<size; i++) {
		for(j=0; j<10; j++) {
			printf("%c", animal[i][j]);     //정해진 길이(10)을 줘야 출력가능.(10까지 길이가 안되는 것도
											  //10번을 돌려야함) 
		}
		printf("\n");
	}
 
} 
