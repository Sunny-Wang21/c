//求1到100之间的奇数之和
//2021.1.27
#include <stdio.h>

int main(void)
{
	int i;
	int sum = 0;
	
	for (i=1; i<100; ++i)
		if (i%2 != 0)
			sum = sum + i; 
	
	printf("sum = %d\n", sum);
	
	return 0;
 } 
 /*-------------------------------
 sum = 2500

--------------------------------*/
