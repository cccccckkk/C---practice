#include<stdio.h>
int main()
{
	int year;
	
	for(year=2001;year<=2100;year++){
		if(year%4==0&&year%100!=0||year%400==0){
			printf("%dÊÇÈòÄê\n");
		}
		
	}
	
	
	
	return 0;
}
