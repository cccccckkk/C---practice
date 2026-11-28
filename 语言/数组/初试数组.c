//如何写一个程序计算用户输入的数字的平均数，并输:出所有大于平均数的数?
#include<stdio.h>
int main()
{
	int x;
	int cnt = 0;
	double sum = 0;
	int number[100];//定义数组 
	scanf("%d",&x);
	while(x!=-1)
	{
		number[cnt]=x;//对数组中的元素赋值 
		sum+=x;
		cnt++;
		scanf("%d",&x);
			
	}
	if(cnt>0)
	{
		
		int i;
		for(i=0;i<cnt;i++)
		{
			if(number[i]>sum/cnt)//遍历数组 
			{
				printf("%d ",number[i]);//使用数组中的元素 
				
			}
			
			
		}
		
		
		
	}
	
	
	return 0; 
}
