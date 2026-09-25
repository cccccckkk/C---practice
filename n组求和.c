/*本题要求编写程序,计算序列2/1+3/2+5/3+8/5+....的前N项之和。注意该序列从第2项起，每一项的分子是前一项分子与分母的和，分母
是前一项的分子。*/
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
