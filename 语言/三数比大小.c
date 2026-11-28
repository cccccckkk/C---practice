#include"stdio.h"
int main()
{
	int a,b,c,t = 0;
	scanf("%d %d %d",&a,&b,&c);
	int max = a;
	if(b>c){
		 t = b;
	} else{
	
		t = c;}
	
	if(a<t){
		max = t;
	}
	
	printf("×î´óÖµ%d",max);
	
	
	
	
	
	
	
	
	
	return 0;
 } 
