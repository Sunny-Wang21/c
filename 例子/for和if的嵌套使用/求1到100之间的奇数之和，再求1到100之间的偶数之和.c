//��1��100֮�������֮�ͣ�����1��100֮���ż��֮��
//2021.1.27
#include <stdio.h>

int main(void)
{
	int i;
	int odd_numbers, even_numbers;
	
	for (i=1; i<100; i+=2)
		odd_numbers = odd_numbers + i;
	for (i=2; i<=100; i+=2)
		even_numbers= even_numbers + i;
	
	printf("odd_numbers = %d\n", odd_numbers);
	printf("even_numbers = %d\n", even_numbers);
	
	return 0;
 } 
 /*
 -------------------------------
 odd_numbers = 2501
even_numbers = 2550

--------------------------------
 
 */
