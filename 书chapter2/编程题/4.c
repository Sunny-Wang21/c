/*2021.1.19
题目：编写一个程序，要求用户输入一个美元数量，然后显示出增加%5税率后的相应金额 
*/ 

#include <stdio.h>
#define SHUI_XISHU 1.05

int main(void)
{
	float a, b;
	
	printf("Enter an amount: ");
	scanf("%f", &a);
	b = SHUI_XISHU * a;
	
	printf("With tax added: $%.2f\n", b);
	
	return 0;
}
/*标准答案： ----------------------
 #include <stdio.h>

int main(void)
{
  float original_amount, amount_with_tax;

  printf("Enter an amount: ");
  scanf("%f", &original_amount);
  amount_with_tax = original_amount * 1.05f;
  printf("With tax added: $%.2f\n", amount_with_tax);

  return 0;
}
--------------------------------------------------------- 

*/




