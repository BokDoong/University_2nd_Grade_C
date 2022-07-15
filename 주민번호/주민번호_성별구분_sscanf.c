int main() {
	int y, m, d, g;
	char jumin[100];
	
	printf("주민번호를 입력하세요 : ");
//	sscanf : jumin 변수에 scanf받아 jumin변수 안에서 다시 scanf한다.  
	scanf("%[0123456789-]", jumin);
	sscanf(jumin, "%2d%2d%2d-%1d", &y, &m, &d, &g);
	
	if(g>2)
		y += 2000;
	else
		y+=1900;
		
	printf("%s : %d년 %d월 %d일생 ", jumin, y, m, d);
	if(g%2)
		printf("남자\n");
	else
		printf("여자\n");	
}
