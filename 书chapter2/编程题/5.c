#include <stdio.h>

int main(void)
{
	float x, z;
	
	printf("����x��ֵ��");
	scanf("%f", &x);
	z = 3 * x * x * x * x * x * x + 2 * x * x * x * x - 5 * x * x * x - x * x + 7 * x - 6;
	
	printf("����ʽ��ֵΪ��%f\n", z); 
	
	return 0;
 } 
