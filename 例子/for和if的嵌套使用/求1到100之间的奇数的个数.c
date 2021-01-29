//求1到100之间奇数的个数
//2021.1.27
#include <stdio.h>

int main(void)
{
	int i;
	int cnt = 0;//个数一般用cnt表示 
	
	for (i=1; i<100; ++i)
		if (i%2 != 0)
			cnt = cnt + 1;//++cnt;
		
	printf("cnt = %d\n", cnt);
	
	return 0;
 } 
 /*
 --------------------------------- 
 number = 50

--------------------------------
 
 */ 
