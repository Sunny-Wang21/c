//��1��100֮��������ƽ��ֵ 
//2021.1.27
#include <stdio.h>

int main(void)
{
	int i, average;
	int sum = 0, number = 0;//����д��sum = number = 0 
	
	for (i=1; i<100; ++i)
		if (i%2 != 0)
		{
			sum = sum + i; 
			number = number + 1;
		}
	
	printf("average = %d\n", sum / number);//Ҳ������printfǰ��дaverage = sum /number,printf�����sum/number�滻��average 
	
	return 0;
	
}
/*
--------------------------------
average = 50

--------------------------------


*/
