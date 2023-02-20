#include<stdio.h>

main(){
	int a=100;
    int	b=10;
    int	c=5;
    int	t=8;
    int	result;
	
	b=(a*b)/100;
	c=(a*c)/100;
	t=(a*t)/100;
	
	result=a+b+c+t;
	printf("gross salary is %d",result);
	
}
