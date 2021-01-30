/*
举例：从键盘输入一个数字，如果该数字是回文数，则返回yes，否则返回No
回文数：正着写和倒着写都一样
		比如： 121  12321 
2021.1.30 

【如何判断一个数字是否为回文数】 
*/ 
#include <stdio.h>

int main(void)
{
	int val;//存放待判断的数字 
	int m;
	int sum = 0;
	
	printf("请输入您需要判断的数字：");
	scanf("%d", &val);
	
	m = val;
	while (m)//m非零为真，零为假 
	{
		sum = sum * 10 + m%10;
		m /= 10;
	}
	
	if (sum == val)
		printf("Yes!\n");
	else
		printf("No!\n");
	
	return 0;
}
