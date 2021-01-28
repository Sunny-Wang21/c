/*
怎么将结果显示为20110217？ 
*/

#include <stdio.h>

int main(void)
{
	int m, d, y;
	printf("Enter a date (mm/dd/yyyy): ");
	scanf("%d/%d/%d", &m, &d, &y);
	
	printf("You entered the date %d%d%d\n", y, m, d);
	
	return 0;
 } 
 /*
 ---------------------------------------
 Enter a date (mm/dd/yyyy): 2/17/2011
You entered the date 2011217

--------------------------------
 */
