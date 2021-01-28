#include <stdio.h>

int main(void)
{
	int height = 8, length = 12, width = 10, volume;
	
	volume = height * length * width;
	
	printf("Dimensions: %dx%dx%d\n", length, width, height);
	printf("Volume (cubic inches): %d\n",volume);
	printf("Dimensional weight (pounds): %d\n",(volume + 165) / 166);
	
	return 0;
 } 
 /*结果： 
 ------------------------------- 
 
 Dimensions: 12x10x8
Volume (cubic inches): 960
Dimensional weight (pounds): (960 + 165) / 166

--------------------------------
疑问：最后一个printf写成 printf("Dimensional weight (pounds): (%d + 165) / 166\n",volume);
发现结果同上，可不可以，这样对不对 

2021.1.19 发现这两个结果根本不同，正确结果是
------------------------------------  
  Dimensions: 12x10x8
Volume (cubic inches): 960
Dimensional weight (pounds): 6

-------------------------------- 
        
 */
 
 
 
