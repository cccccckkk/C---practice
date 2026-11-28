//我有四个女朋友，年龄乘积是3465，一个比一个大2岁，最大的是几岁 
#include"stdio.h"
int main()
{
	int x;
	for(x=2;x<=100;x++){
		int sum = x * (x+2) * (x+4) * (x+6);
		if(sum==3465){
			printf("%d %d %d %d",x,x+2,x+4,x+6);
			break;
		}
		
	}
	
	
	
	
	return 0;
}
