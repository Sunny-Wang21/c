//��1��100֮��������ƽ��ֵ 
//2021.1.27
#include <stdio.h>

int main(void)
{
	int i;
	int sum = 0, cnt = 0;//����д��sum = cnt = 0 
	float average;//average������С����ע�ⶨ��������ͣ�����д���ı��ʽע��1.0*sum 
	for (i=1; i<100; ++i)
		if (i%2 != 0)
		{
			sum = sum + i; 
			cnt = cnt + 1;//++cnt;
		}
	
	printf("average = %f\n", 1.0*sum / cnt);//Ҳ������printfǰ��дaverage =1.0* sum /number,printf�����1.0*sum/number�滻��average 
	//1.0Ĭ����double ���� 
	return 0;
	
}
/*
--------------------------------
average = 50.000000 

--------------------------------


*/
