#include <stdio.h>
#define PI 3.14
#define XISHU (4.0f / 3.0f)

int main(void)
{
	int r ;
	float v ;

	printf("Enter r of sphere: ");
	scanf("%d", &r);
	v = XISHU * PI * r * r * r * r;
	
	printf("V:%f\n", v);
	
	return 0;
 } 
