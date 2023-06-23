#include<stdio.h>
#define AB(x) x<0?x*-1:x
void main()
{
	int a=-5;
	a=AB(a);
	printf("%d",a);
}
