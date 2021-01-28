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
 /*����� 
 ------------------------------- 
 
 Dimensions: 12x10x8
Volume (cubic inches): 960
Dimensional weight (pounds): (960 + 165) / 166

--------------------------------
���ʣ����һ��printfд�� printf("Dimensional weight (pounds): (%d + 165) / 166\n",volume);
���ֽ��ͬ�ϣ��ɲ����ԣ������Բ��� 

2021.1.19 �������������������ͬ����ȷ�����
------------------------------------  
  Dimensions: 12x10x8
Volume (cubic inches): 960
Dimensional weight (pounds): 6

-------------------------------- 
        
 */
 
 
 
