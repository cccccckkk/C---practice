#include"stdio.h"
int main()
{
	int x;
	int digit;
	int ret = 0;
	scanf("%d",&x);
	
	while(x>0){
		digit = x % 10 ;
	//	printf("%d",digit);
		ret = ret*10 + digit;
		 printf("x=%d,digit=%d,ret=%d\n",x,digit,ret);
		x/=10;
		
		
	}
	
	printf("%d\n",ret);
	
	
	
	
	return 0;
 } 
