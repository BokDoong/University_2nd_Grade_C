int main() {
	int y, m, d, g;
	char jumin[100];
	
	printf("�ֹι�ȣ�� �Է��ϼ��� : ");
//	sscanf : jumin ������ scanf�޾� jumin���� �ȿ��� �ٽ� scanf�Ѵ�.  
	scanf("%[0123456789-]", jumin);
	sscanf(jumin, "%2d%2d%2d-%1d", &y, &m, &d, &g);
	
	if(g>2)
		y += 2000;
	else
		y+=1900;
		
	printf("%s : %d�� %d�� %d�ϻ� ", jumin, y, m, d);
	if(g%2)
		printf("����\n");
	else
		printf("����\n");	
}
