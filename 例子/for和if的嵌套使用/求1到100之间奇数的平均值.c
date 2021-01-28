//求1到100之间奇数的平均值 
//2021.1.27
#include <stdio.h>

int main(void)
{
	int i, average;
	int sum = 0, number = 0;//不能写成sum = number = 0 
	
	for (i=1; i<100; ++i)
		if (i%2 != 0)
		{
			sum = sum + i; 
			number = number + 1;
		}
	
	printf("average = %d\n", sum / number);//也可以在printf前面写average = sum /number,printf里面的sum/number替换成average 
	
	return 0;
	
}
/*
--------------------------------
average = 50

--------------------------------


*/
