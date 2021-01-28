/*求1到100之间所有的奇数之和
2021.1.27 
*/ 
#include <stdio.h>

int main(void)
{
	int i;
	int sum = 0;
	
	for (i = 1; i < 100; i+=2)
		sum = sum + i; 
		
	printf("i = %d\n", i);
	printf("sum = %d\n", sum);
	
	
	return 0;
 } 
 /*
 -------------------------------
 i = 101
sum = 2500

--------------------------------
 
 */
