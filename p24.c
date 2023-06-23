#include<stdio.h>
#define LINE 5
void main()
{
	#if LINE
		#error macro is available
	#else
		printf("Second Line");
	#endif
}
