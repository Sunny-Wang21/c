#include <stdio.h>

int main(void)
{
	float x, z;
	printf("输入x的值：");
	scanf("%f", &x);
	z = ((((3*x + 2)*x - 5)*x - 1)*x + 7)*x - 6; 
	
	printf("多项式的值：%f\n", z);
	
	return 0;
}
