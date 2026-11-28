#include<stdio.h>
int main()
{
	int x;
	scanf("%d",&x);
	int t = 0;
	int d;
	while(x>0){
		
		d = x % 10;
		t = t*10 + d;
		x/=10;
	}
	printf("%d",t);
	
	
	
	return 0;
}
