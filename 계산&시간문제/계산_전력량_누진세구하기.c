#include <stdio.h>
int main(){
	int kw, total;
	double pay, tax, base;
	
	printf("전력 사용량 입력: ");
	scanf("%d", &kw);
	
	switch((kw-1)/100){       //case이용 위헤 -1한 다음 100으로 나눈 나머지로 case적용(범위가 1~100,101~200, .. 이기 때문) 
		case 0: 
			pay = 410 + kw*60.7;
			break;
		case 1:
			pay = 910 + 6070 + (kw-100)*125.9;
			break;
		case 2:
			pay = 1600 + 6070 + 12590 + (kw-200)*187.9;
			break;
		case 3:
			pay = 3850 + 6070 + 12590 + 18790 + (kw-300)*280.6;
			break;
		case 4:
			pay = 7300 + 6070 + 12590 + 18790 + 28060 + (kw-400)*417.7;
			break;
		default :
			pay = 12940 + 6070 + 12590 + 18790 + 28060 + 41770 + (kw-500)*709.5;
	}                        //누진세 구하기
	 
	tax = pay * 0.1 + 0.5;      // 부가세 : 누진세의 10% (4사오입 : 소숫점 "반올림" 위해 "0.5" 더함.)
	base = pay * .037;          //전력기반요금 : 누진세 * 0.037 (10월 미만 절사) 

	total = (int)pay + (int)tax + (int)base - ((int)base)%10;
	 //tax(부가세) : 4사5입, base(기반요금) : 10원 미만 절사
	total = total - total%10; 
	//total(총액) : 10원 미만 절사
	
	printf("전기요금 : %d원, 부가가치세 : %d원, 전력기반요금 : %d원\n",
			(int)pay, (int)tax, (int)base - ((int)base)%10);
	printf("납부할 전기요금은 %d원\n", total);
}

