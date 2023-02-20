#include<stdio.h>

main(){
	double c,r;
	x:
	printf("convert temperature from degree Celsius to Fahrenheit.\n");
	printf("Enter degree Celsius :");
	scanf("%lf",&c);
	r=((c*9)/5)+32;
	printf("Fahrenheit result : %lf F\n",r);
	goto x;
}
