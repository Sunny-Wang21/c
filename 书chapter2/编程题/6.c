#include <stdio.h>

int main(void)
{
	float x, z;
	printf("����x��ֵ��");
	scanf("%f", &x);
	z = ((((3*x + 2)*x - 5)*x - 1)*x + 7)*x - 6; 
	
	printf("����ʽ��ֵ��%f\n", z);
	
	return 0;
}
