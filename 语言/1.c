#include"stdio.h"
int main()
 
{    int amount = 100; 
int price = 0;
	printf("请输入金额");
	scanf_s("%d",&price);
	printf("请输入票面");
	scanf_s("%d",&amount); 
	int change = amount - price;
	printf("找你%d",change) ;	
	
	return 0;
 } 
