# include <stdio.h>

int main (void)
{
	int i = 3;//表示i变量是整型变量，所谓整型变量就是指i只能存放整数，不能存放实数 
	//3最终是存放在内存中，程序终止之后3所占的空间被释放
	//变量的本质是内存中一段存储空间 
	printf("%d\n",i);
	
	return 0;
}
