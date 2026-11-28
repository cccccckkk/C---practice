#include"stdio.h"
int main()
{
	int h1,min1;
	int h2,min2;
	scanf("%d %d",&h1,&min1);
	scanf("%d %d",&h2,&min2);
	int th = h2 - h1;
	int tmin = min2 - min1;
	if (tmin<0){
		tmin = tmin + 60 ;
		th--;
	}
	
	printf("%d %d\n",th,tmin); 
	
	
	
	
	
	
	
	
	return 0;
 } 
