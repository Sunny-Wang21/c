/*编写一个程序，要求用户输入一个两位数，然后按数的逆序打印出这个数*/ 

#include <stdio.h>

int main(void)
{
	int n;
	
	printf("Enter a two-digit number: ");
	scanf("%d", &n);
	
	printf("The reversal is: %d%d\n", n % 10, n / 10);
	
	return 0;
 } 
