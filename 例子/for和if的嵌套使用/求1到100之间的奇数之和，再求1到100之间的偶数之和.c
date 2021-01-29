//求1到100之间的奇数之和，再求1到100之间的偶数之和 
//2021.1.27
#include <stdio.h>

int main(void)
{
	int i;
	int odd_numbers = 0, even_numbers = 0;
	
	for (i=1; i<101; i+=2)
		odd_numbers = odd_numbers + i;
	for (i=2; i<101; i+=2)
		even_numbers= even_numbers + i;
	
	printf("odd_numbers = %d\n", odd_numbers);
	printf("even_numbers = %d\n", even_numbers);
	
	return 0;
 } 
 /*
 -------------------------------
 odd_numbers = 2501   !!不对，应该是2500 之前错因：未对odd_numbers和 even_numbers初始化 
even_numbers = 2550

--------------------------------
 
 */
