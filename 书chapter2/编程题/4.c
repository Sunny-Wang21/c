/*2021.1.19
��Ŀ����дһ������Ҫ���û�����һ����Ԫ������Ȼ����ʾ������%5˰�ʺ����Ӧ��� 
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
/*��׼�𰸣� ----------------------
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




