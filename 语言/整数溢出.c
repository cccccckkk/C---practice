#include"stdio.h"
int main()
{
	unsigned int a = 0;
	
	while(++a>0);
	unsigned int max = a - 1;
	printf("%u\n",max);
	
	unsigned int temp =max; 
	int digith = 0;
while(temp>0);	{
		digith++;
		temp/=10;
		
		
	} 
	
	printf("%d\n",digith);
	
	
	return 0;
}
