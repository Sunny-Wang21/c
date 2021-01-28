/*
其中，产品编号和日期项采用左对齐，单位价格采用右对齐 
*/

#include <stdio.h>

int main(void)
{
	int number, month, day, year;
	float price;

	printf("Enter item number: ");
	scanf("%d", &number);
	
	printf("Enter unit price: ");
	scanf("%f", &price);
	
	printf("Enter purchase date (mm/dd/yyyy): ");
	scanf("%d/%d/%d", &month, &day, &year);
	
	printf("Item\tUnit\tPurchase\n\tPrice\tDate\n%-d\t$ %.2f\t%-.2d/%-.2d/%-.4d\n", number, price, month, day, year);
	
	
	return 0;
 } 
 /*
Enter item number: 583
Enter unit price: 13.5
Enter purchase date (mm/dd/yyyy): 10/24/2010
Item    Unit    Purchase
        Price   Date
583     $ 13.50 10/24/2010

--------------------------------

 
 */
