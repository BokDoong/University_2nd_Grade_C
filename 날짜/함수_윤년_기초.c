#include <stdio.h>
int is_leapYear(int year);

int main() {
	int num;
	
}

int is_leapYear(int year)
{
	int res;
	
	if ( year % 400 == 0 || (( year % 4 == 0) && (year % 100 != 0)))
		res = 1;
	else
		res = 0;
	
	return res;      //res=1 : À±³âÀÌ´Ù., res=0 : À±³â¾Æ´Ï´Ù. 
}
