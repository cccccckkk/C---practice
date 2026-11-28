#include"stdio.h"
int main()
{
	int a,b = 0;
	while(++a>0);
	printf("%d\n",a-1);
	b++; 
	while(a=a/10){
		b++;
		
	}
	
	printf("%d",b);
	
	return 0;
}
