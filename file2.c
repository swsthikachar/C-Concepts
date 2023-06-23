#include<stdio.h>
#include"file1.c"
int a=5;
void main()
{
	printf("%d\n",a);
	fun();
	printf("%d\n",a);
}
