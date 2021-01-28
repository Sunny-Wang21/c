#include <stdio.h>

int main(void)
{
	int amount, yushu1, yue1, yushu2, yue2, yushu3, yue3;
	
	printf("Enter a dollar amount: ");
	scanf("%d", &amount);
	
	if (amount > 20)
	{
	yushu1 = amount / 20;
	yue1 = amount - yushu1 * 20;
	}
	return 0;
}
