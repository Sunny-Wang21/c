/*Ҫ���û�����24Сʱ�Ƶ�ʱ�䣬Ȼ����ʾ12Сʱ�Ƶĸ�ʽ
2021.1.26 
*/ 
#include <stdio.h>

int main(void)
{
	int hours, minutes;
	printf("Enter a 24-hour time: ");
	scanf("%d:%d", &hours, &minutes);
	
	if (hours > 12)
		printf("Equivalent 12-hour time: %d:%.2d PM\n", hours - 12, minutes);
	else 
		printf("Equivalent 12-hour time: %d:%.2d AM\n", hours, minutes);
	
	return 0;
 } 
 /*������
 ����ʱ����ʱ��ע������뷨����Ӣ�ģ�����ð�ź�����пո�Ӱ���� 
 */ 
