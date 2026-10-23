#include<stdio.h>
void prime(int begin,int end){
	int i;
			
		for(i=begin;i<=end;i++){
		if(i<2) {
			continue;	
		}
		int x;
		int isprime = 1;
		 for(x=2;x*x<i;x++)
		//for(x=2;x<i;x++)
		{
			if(i%x==0){
				isprime = 0;
				break;
			}
			
			
		}	
		
		if(isprime){
				printf("%d ",i);
			}
		
	}
     printf("\n");
	
	
}




int main()
{
	prime(1,100);
	prime(100,1000);
	prime(0,10000);
	
	
	}	

