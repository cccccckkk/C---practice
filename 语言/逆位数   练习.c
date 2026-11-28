#include<stdio.h> // ÄæÎ»Êý 321 --> 123  200 -->002 
int main()
{
	int x;
	scanf("%d",&x);
	
//	if(x<0){
	//	printf("-");
//		x = - x;
		
		
//	}
	
	
	
	do{
	int	t = x % 10;
		x/=10;
		printf("%d",t);
		
	} while(x>0); 
	
	
	
	
	
	return 0;
 } 
