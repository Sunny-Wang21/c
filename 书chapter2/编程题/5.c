#include <stdio.h>

int main(void)
{
	float x, z;
	
	printf("输入x的值：");
	scanf("%f", &x);
	z = 3 * x * x * x * x * x * x + 2 * x * x * x * x - 5 * x * x * x - x * x + 7 * x - 6;
	
	printf("多项式的值为：%f\n", z); 
	
	return 0;
 } 
