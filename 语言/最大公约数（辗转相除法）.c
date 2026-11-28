#include"stdio.h"
int main()
{
	int a,b;
	scanf("%d %d",&a,&b);
	
		int t; 
	
	while(b!=0)	{
		t = a%b;
		a=b;
		b=t;
		printf("a=%d,b=%d,t=%d\n",a,b,t) ;
	}
	

	
	printf("最大公约数%d\n",a);
	
	
	return 0;
}
