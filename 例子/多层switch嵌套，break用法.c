#include <stdio.h>
//2021.1.31
int main(void)
{
	int x=1, y=0, a=0, b=0;
	
	switch(x) //��һ��switch 
	{
	case 1:
		switch(y) //�ڶ���switch
		{
		case 0:
			a++;
			break;//��ֹ���ǵڶ���switch 
		case 1:
			b++;
			break;
		}
		b = 100;
		break; //��ֹ���� ��һ��switch
	case 2:
		a++;
		b++;
		break;	 
	}
	
	printf("%d %d\n", a, b); 
	 
	
	return 0;
 } 
 /*
 ------------------
 1 100

--------------------------------

 */
