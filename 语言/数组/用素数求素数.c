#include<stdio.h>
int isprime(int x,int knownprimes[],int numberOfKnownPrimes)
{
	int ret = 1;
	int i;
	for(i=0;i<numberOfKnownPrimes;i++){
		if(x%knownprimes[i]==0){
			ret = 0;
			break;
		}
		
	}
	
	return ret;
}



int main(void)
{
	const int number=100;
	int prime[100]={2};
	int count=1;
	int i =3;
	while(count<number){
	  if(isprime(i,prime,count)){
	  	prime[count++]=i;
	  }
		i++;
	}
	
	for(i=0;i<number;i++){
		printf("%d",prime[i]);
		if((i+1)%5)printf("\t");
		else printf("\n");
	}
	
	
	
	return 0;
}
