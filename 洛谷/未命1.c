#include<stdio.h>
int main()
{
	int choice,year;
	printf("input a number:");
	scanf_s("%d",&choice);
	int mile,time;
	double price = 0;
	int cnt=0,sum=0;
	int m,n,x;
	
	switch(choice){
		case 1:
			for (year=2001;year<=2100;year++)
	{
		if (year%4==0&&year%400!=0||year%400==0)
			printf("%d\n", year);
	}
		
	    case 2:
	scanf_s("%d %d",&mile,&time);
	if(mile<=3){
		price = 10;
	}else if(mile<=10){
		price = 10 + (mile - 3)*2;
	}else {
		price = 10 + 7*2 + (mile - 10)*3;
	}
	price+=(time/5)*2; 
	printf("Fare:%d\n",(int)(price+0.5));
	
	case 3:
		
	
	
	scanf_s("%d %d", &m, &n);
	int i;
	int isprime;
	if (m == 1) {
		m = 2;
	}
	for (i = m;i <= n;i++) {
		int k;
		for (k = 2;k < i;k++) {
			isprime = 1;
			if (i % k == 0) {
				isprime = 0;
				break;
			}
		}
		if (isprime) {
			
			sum += i;
			cnt++;
		}

	}

	printf("cnt=%d sum=%d\n", cnt, sum);
	
	case 4: 
	
	
	scanf_s("%d",&x);
	int t =x;
	do{
		int d = t%10;
		t/=10;
		 printf("%d ",d); 
		
	}while(t>0);
	printf("\n");
	
	case 5:
	
    

    printf(" n£º");
    scanf_s("%d", &n);
int peaches = 1;  
    if (n <= 0)
    {
        printf("n positive integer\n");
        return 1;
    }

    
    for (i = 1; i < n; i++)
    {
        peaches = (peaches + 1) * 2;
    }

    printf("one today %d pitch\n", peaches); 
		
	}
	
	
	
	
	
	return 0;
}
