#include"stdio.h"
int main()
{
	int n;
	int i;
	double ret =0.0;
	int sign = 1; 
	
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		ret += sign*1.0/i;
		sign = -sign;
	} 
	printf("%f\n",ret);
	
	
	
	return 0;
}
