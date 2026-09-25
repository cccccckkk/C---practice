/*水仙花数是一个N位正整数（n大于等于三)，它的每个位上的数字的N次幂之和等于它本身。例如：153 
*/
#include"stdio.h"
int main()
{
	int n;
	int fact = 1;
	scanf("%d",&n);
	int a =n;
	do{
		fact *=10;
		a--;
		
	} while(a>1);
	
	//遍历100-999
	int i;
	for(i=fact;i<fact*10;i++){
		int sum = 0;
		int t = i;
		do{
		int d  = t%10;
		t/=10;
		int p = 1;
		int j = 0;
		while(j<n){
			p*=d;
			j++;
			
		}
			sum+=p;
			
			
		} while(t>0);
		if(sum==i){
			printf("%d\n",sum);
		}
		
		
		
		
}
	
	
	
	return 0;
 } 
