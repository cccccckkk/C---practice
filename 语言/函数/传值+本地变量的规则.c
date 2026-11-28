#include<stdio.h>
void swap(int a,int b);

int main()
{
	int a = 5;
	int b = 6;
	
	swap(a,b);
	{
		int a = 0;
		printf("a=%d\n",a); 
		
	}
	
	
	printf("a=%d b=%d\n",a,b);
	
	
	return 0;
}

void swap(int a,int b)
{
	int swap; 
	int t = a;
	a = b;
	b = t;
	
}
