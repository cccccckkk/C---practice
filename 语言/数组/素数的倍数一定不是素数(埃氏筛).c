//埃氏筛
//素数的倍数一定不是素数。
#include<stdio.h>
int main()
{
	const int maxNumber = 10000;
	int isprime[maxNumber];
	int i;
	int x;
	for(i=0;i<maxNumber;i++){
		isprime[i]=1;
	}
	
	for(x=2;x<maxNumber;x++){
		if(isprime[x]){
			for(i=2;i*x<maxNumber;i++){
				isprime[i*x]=0;
			}
		}
		
		
	}
	
	for(i=2;i<maxNumber;i++){
		if(isprime[i]){
			printf("%d\t",i);
		}
		
	}
	printf("\n");
	
	return 0;
}
