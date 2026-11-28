/*����Ҫ���д����,��������2/1+3/2+5/3+8/5+....��ǰN��֮�͡�ע������дӵ�2����ÿһ��ķ�����ǰһ��������ĸ�ĺͣ���ĸ
��ǰһ��ķ��ӡ�*/
#include"stdio.h"
int main()
{
    int n,i;
    double dividend,divisor;
    double sum = 0.0;
    double t;
    
    scanf("%d",&n);
    dividend = 2;
    divisor = 1;
    for (i=1;i<=n;i++){
    	sum+=dividend/divisor;
    	t = dividend;
    	dividend = dividend + divisor;
    	divisor = t ;
	}
      printf("%f %f\n",dividend,divisor);
      printf("%.2f\n",sum);






	
	
	
	return 0;
}
