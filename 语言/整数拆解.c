#include"stdio.h"
// #include"math.h" 
  //  13425/10000-->1
  //  13425%10000-->3425
  //  10000/10-->1000
  //  3425/1000-->3
  //  3425%1000-->425
  //  1000/10-->100
  //  425/100-->4
  //  425%100-->25
  //  100/10-->10
  //  25/10-->2
  //  25%10-->5
  //  10/10-->1
  //  5/1-->5
  //  5%1-->5
  //  1/10-->0 ֹͣ  




int main()
{
	int x;
	int count = 0;
	scanf("%d",&x);
	int t = x;
	int mask = 1;
	while(t>9){
		t/=10;
		mask*=10;
		// count++; 
	}
	// mask = pow (10,count);
	
	
	
	
	
	
	
	
	
	

	do{
		int d =x/mask; 
		
		printf("%d",d);
		x%=mask;
		
		if(mask>9)
			printf(" ");
		
		mask/=10;
		
		
		//printf("x=%d mask=%d d=%d\n",x,mask,d);
	}  while(mask>0);
	
	printf("\n");
	
	return 0;
}
