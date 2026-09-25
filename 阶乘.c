#include"stdio.h"
int main()
{
	int n;
	
	scanf("%d",&n);
	int fact = 1;
	
	int i = n ;
	for(;n>=2; n--){
		fact *=n;
	}
	printf("%d!=%d\n",i,fact);
	
	
	return 0;
}
