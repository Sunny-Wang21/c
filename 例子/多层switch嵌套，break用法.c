#include <stdio.h>
//2021.1.31
int main(void)
{
	int x=1, y=0, a=0, b=0;
	
	switch(x) //第一个switch 
	{
	case 1:
		switch(y) //第二个switch
		{
		case 0:
			a++;
			break;//终止的是第二个switch 
		case 1:
			b++;
			break;
		}
		b = 100;
		break; //终止的是 第一个switch
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
