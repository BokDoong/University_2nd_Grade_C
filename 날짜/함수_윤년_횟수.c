#include <stdio.h>

int main()
{
	int year, cnt = 0;
	
	for (year=1990; year<=2116; year++) {     //¹üÀ§ ÁöÁ¤. 
		if (leap_Year(year) == 1)
			cnt += 1;
	}
	
	printf("1990~2116³â±îÁö À±³â È½¼ö´Â %dÈ¸", cnt);
}

int leap_Year(int year) {
	if (year % 400 == 0 || (year % 100 && year % 4 == 0))
		return 1;    //À±³âÀÏ ¶§ - > 1 
	else
		return 0;    //À±³â ¾Æ´Ò ¶§ -> 0 
}
