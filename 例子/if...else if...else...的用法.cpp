/*12	2	E:\ѧc\����\if...else if...else...���÷�.cpp	[Error] 'else' without a previous 'if'
һ��Ҫ���׸ó���Ϊ�λ������� 
*/ 
#include <stdio.h>

int main(void)
{
	double delta = -1;
	
	if (delta > 0)
		printf("��������\n");
		printf("����\n");
	else if (delta == 0)
		printf("��һ��Ψһ��\n");
	else
		printf("�޽�\n");
		
	return 0;
 } 
