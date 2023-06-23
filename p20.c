#include<stdio.h>
void func()
{
	int x=0;
	static int y;
	x++;
	y++;
	printf("%d-%d\n",x,y);
}
void main()
{
	func();
	func();
}
