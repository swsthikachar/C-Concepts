#include<stdio.h>
#define a 10
void foo()
{
	#undef a
	#define a 50
}
void main()
{
	printf("%d..",a);
	foo();
	printf("%d",a);
}

