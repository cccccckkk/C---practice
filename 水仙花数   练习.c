/*水仙花数是一个N位正整数（n大于等于三)，它的每个位上的数字的N次幂之和等于它本身。例如：153
*/
#include"stdio.h"
int main()
{
	int n;
	scanf("%d",&n);
	// 在这里我们需要遍及100 - 999（假如是3位数） 
	int fact = 1;
	int l ; 
	for(l=1;l<n;l++){
		fact*=10;
		
	} 
	int i;
	for(i=fact;i<fact*10;i++){
		int t = i;
		int sum = 0;
	do {
		int d = t%10;
		int j = 1;
		
		int p = 1;
		while(j<=n){
			p*=d;
			j++;
			
		}
		sum+=p;
		t/=10;
	} while(t>0) ;
		
		if(sum==i){
			printf("%d\n",sum);
			
		}
		
	}
	
	
	
	
	
	
	
	return 0;
}
