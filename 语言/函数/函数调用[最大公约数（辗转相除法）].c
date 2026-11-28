#include<stdio.h>
int gcd(int a,int b){
	int t;
	while(b!=0)
	{
		
	t=a%b;
	a=b;
	b=t;
		
	}
	return a;
}

int main()
{
    printf("最大公约数是%d\n",gcd(12,18)); 
	printf("最大公约数是%d\n",gcd(6,14));
	printf("最大公约数是%d\n",gcd(12,45));

	
	
	
	
	return 0;
}
