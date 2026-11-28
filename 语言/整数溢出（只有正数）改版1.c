#include<stdio.h>
int main()
{
	unsigned int  a,b = 0;
	for(a=1;a!=0;a++);
	long long c = a - 1; 
	printf("%lld\n",c);
	b = c;
	int n = 0;
	while(b>0){
		b/=10;
		n++;
		
		
	}
	
	printf("%d\n",n);
	
	
	
	return 0;
}
