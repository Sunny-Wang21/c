/*
2021.1.27
��1��10֮�������ܱ�3����������֮�� 
*/ 
#include <stdio.h>

int main(void)
{
	int i;
	int sum = 0;
	
	for (i=3; i<=10; ++i)
		if (i%3 == 0)
			sum = sum + i;
			
	printf("sum = %d\n", sum);
	
	return 0;
 } 
