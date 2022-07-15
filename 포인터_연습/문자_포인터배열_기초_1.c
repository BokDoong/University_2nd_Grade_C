#include <stdio.h>

//2차원문자배열 : 미리 정해진 길이만큼 메모리를 내어 원소의 크기가 그것보다 작더라도
//				  원소+\0이 아닌 부분은 null값으로 저장.
//포인터 문자배열 : 각 원소의 입력되는 자리+\0 값 까지만 저장.(null값이 들어가는 것 같은
//					쓸모 없는 메모리를 따로 안내어도 된다. 
int main() {
	char *number[] = {"first", "second", "third", "fourth", "fifth"};
	int cnt;
	
	printf("몇번쨰 ? : ");
	scanf("%d", &cnt);
	
	printf("%d번째 : %s\n", cnt, number[cnt-1]);
}
