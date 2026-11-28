#include<stdio.h>
int main()
{
	 int a,b = 0;
	
	for(a=1;a>0;a++);
	printf("%d\n",a-1);
	b = a - 1;
	int n = 0;
	while(b>0){
		b/=10;
		n++;
		
	}
	
	printf("%d\n",n);
	
	return 0;
}
