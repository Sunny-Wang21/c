//for和while可以相互转换 

#include <stdio.h>

int main(void)
{
	int sum = 0;
	int i;
	
	
	/*
	
		for (i=1; i<101; ++i)
		{
			sum = sum + i;
        }
	
	*/
	
	i = 1;
	while (i<101)
	{
		sum = sum + i;
		++i;
		
	}
	printf("sum = %d\n", sum);
	
	return 0;
 } 
 /*
 -------------------------------
 sum = 5050

--------------------------------
 
 
 */
 
 
 
