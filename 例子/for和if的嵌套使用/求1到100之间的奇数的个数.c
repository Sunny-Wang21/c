//求1到100之间奇数的个数
//2021.1.27
#include <stdio.h>

int main(void)
{
	int i;
	int number = 0;
	
	for (i=1; i<100; ++i)
		if (i%2 != 0)
			number = number + 1;
		
	printf("number = %d\n", number);
	
	return 0;
 } 
 /*
 --------------------------------- 
 number = 50

--------------------------------
 
 */ 
