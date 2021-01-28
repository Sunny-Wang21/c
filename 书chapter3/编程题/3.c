/*编写一个程序来分解用户输入的ISBN信息*/
#include <stdio.h>

int main(void)
{
	int a, b, c, d, e;
	
	printf("Enter ISBN: ");
	scanf("%d-%d-%d-%d-%d", &a, &b, &c, &d, &e);
	
	printf("GS1 prefix: %d\n", a);
	printf("Group identifier: %d\n", b);
	printf("Publisher code: %d\n", c);
	printf("Item number: %d\n", d);
	printf("Check digit: %d\n", e);
	
	
	/* The five printf calls can be combined as follows:

     printf("GS1 prefix: %d\nGroup identifier: %d\nPublisher code: %d\nItem number: %d\nCheck digit: %d\n",
            a, b, c, d, e);
  */

	
	return 0;
 } 
 /*
 ------------------------
 Enter ISBN: 978-0-393-97950-3
GS1 prefix: 978
Group identifier: 0
Publisher code: 393
Item number: 97950
Check digit: 3

--------------------------------
 
 
 */
