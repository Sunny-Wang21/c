//计算1+1/2+1/3+1/4+1/5+......+1/100
//2021.1.29
#include <stdio.h>

int main(void)
{
	int i;
	float sum = 0;
	
	for (i=1; i<=100; ++i)
	{
		sum = sum + 1 / (float)(i);
		//sum = sum +(float)(1/i);这样写是不对的
		//更简单的写法是：sum = sum + 1.0/i; 
	}
	printf("sum = %f\n", sum);
	
	return 0;
 } 
