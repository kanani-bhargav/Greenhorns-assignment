#include<stdio.h>
main(){
	float a,b,c;
	x:
	printf("Enter First value : ");
	scanf("%f",&a);
	printf("Enter second value : ");
	scanf("%f",&b);
	printf("\nBefore swap : a=%f b=%f",a,b);
	c=a+b;
	a=c-a;
	b=c-b;
	printf("\nafter swap : a=%f b=%f \n\n",a,b);
	goto x;

}
