/*要求用户输入24小时制的时间，然后显示12小时制的格式
2021.1.26 
*/ 
#include <stdio.h>

int main(void)
{
	int hours, minutes;
	printf("Enter a 24-hour time: ");
	scanf("%d:%d", &hours, &minutes);
	
	if (hours > 12)
		printf("Equivalent 12-hour time: %d:%.2d PM\n", hours - 12, minutes);
	else 
		printf("Equivalent 12-hour time: %d:%.2d AM\n", hours, minutes);
	
	return 0;
 } 
 /*不完善
 运行时输入时间注意把输入法调成英文，否则冒号后面会有空格，影响结果 
 */ 
