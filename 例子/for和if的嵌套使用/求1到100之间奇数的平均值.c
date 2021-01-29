//求1到100之间奇数的平均值 
//2021.1.27
#include <stdio.h>

int main(void)
{
	int i;
	int sum = 0, cnt = 0;//不能写成sum = cnt = 0 
	float average;//average可能是小数，注意定义变量类型，后面写他的表达式注意1.0*sum 
	for (i=1; i<100; ++i)
		if (i%2 != 0)
		{
			sum = sum + i; 
			cnt = cnt + 1;//++cnt;
		}
	
	printf("average = %f\n", 1.0*sum / cnt);//也可以在printf前面写average =1.0* sum /number,printf里面的1.0*sum/number替换成average 
	//1.0默认是double 类型 
	return 0;
	
}
/*
--------------------------------
average = 50.000000 

--------------------------------


*/
