/* 2021.1.14
	功能：得出一元二次方程组解的情况和个数 
	目的：对于我，初次感受编程思想 


*/


# include <stdio.h>
# include <math.h>
int main (void)
 {
 	//把三个系数保存到计算机中
	int a = 1; //=不表示相等，表示赋值
	int b = 2;
	int c = 3;
	double delta;//delta存放的是 b*b - 4*a*c
	float x1;//存放一元二次方程的其中一个解
	float x2;//存放一元二次方程的其中一个解
	delta = b*b - 4*a*c; 
	
	if (delta > 0)
	{
		x1 = (-b + sqrt(delta)) / (2*a);
	    x2 = (-b - sqrt(delta)) / (2*a);
	    printf("该一元二次方程有两个解，x1 = %f,x2 = %f\n",x1,x2);
	 } 
 	else if (delta == 0)
 	{
 		x1 = (-b) / (2*a);
 		x2 = x1;//右边赋给左边
		printf("该一元二次方程有一个唯一解，x1 = x2 = %f\n",x1,x2);
	 }
 	else
 	{
 		printf("无解"); 
	 }
 	
 	
 	
 	return 0;
  } 
/*输出结果：
   无解
--------------------------------
*/
  
   
