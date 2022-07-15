#include <stdio.h>
#include <math.h>

int main() {
	double lit, celcius, km;				//Ãâ·Â : ¼·¾¾,¸®ÅÍ,km
	int mile = 414, fareheit = 124, gallon = 15;         //ÀÔ·Â : È­¾¾,°¶·±,¸¶ÀÏ 
	double oil;
	
	lit = (double)gallon * 3.7854;
	celcius = (5./9.)*((double)fareheit-32.);
	km = (double)mile * 1.6093;
	oil = km / lit;
	
	printf("È­¾¾ %dµµ= ¼·¾¾ %.1fµµ.\n", fareheit, celcius); 
	printf("%d°¶·± = %.1f¸®ÅÍ\n", gallon, lit); 
	printf("%d¸¶ÀÏ = %.1fÅ³·Î¹ÌÅÍ.\n\n", mile, km); 
	printf("·»Æ®Ä«ÀÇ ¿¬ºñ =  %.1f\n", oil);
	
}
