#include <stdio.h>
void Univ_Score(int num);

int main() {
	int score;
	// 50������� : F
	// 60������� ���� �ڸ� ������ ������ D->A 
	char grade[] = {'F', 'F', 'F', 'F', 'F', 'F', 'D', 'C', 'B', 'A', 'A'};
	
	printf("������ �Է��Ͻÿ� : ");
	scanf("%d", &score);

	if(score < 0 || score > 100) {
		printf("������ �߸� �Ǿ����ϴ�.\n");
		return 0;
	}
	
	//���� �ڸ��� �ε��� ��� 
	//�� �������� ���� �ڸ��� 5�� �Ѱ� 100���̸� +�߰� 
	printf("%d : %c", score, grade[score/10]);
	if((score>60 && score%10 >= 5) || score == 100)
		printf("+\n");
}


