/*水仙花数是一个N位正整数（n大于等于三)，它的每个位上的数字的N次幂之和等于它本身。例如：153
*/
#include"stdio.h"
int main()
{   
   int n;
   scanf("%d",&n);
   int first = 1;
   int i = 1;
   while(i<n){
   	first*=10;
   	i++;
   }
 //  printf("%d",first) ;
// 遍历100-999	
	i = first;
	while(i<first*10){
		int t=i;
		int sum = 0;
		do{
			int d = t%10;
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
		
		i++; 
	} 
	
	
	
	
	
	
	return 0;
}
