#include<stdio.h>
#define LOGIC(a,b) (a==b)
void main()
{
	if(LOGIC(6,5))
		printf("Same");
	else
		printf("different");
}
