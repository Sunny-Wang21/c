/*12	2	E:\学c\例子\if...else if...else...的用法.cpp	[Error] 'else' without a previous 'if'
一定要明白该程序为何会编译出错 
*/ 
#include <stdio.h>

int main(void)
{
	double delta = -1;
	
	if (delta > 0)
		printf("有两个解\n");
		printf("哈哈\n");
	else if (delta == 0)
		printf("有一个唯一解\n");
	else
		printf("无解\n");
		
	return 0;
 } 
