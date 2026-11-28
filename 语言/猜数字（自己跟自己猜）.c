#include"stdio.h"
int main()   /*猜数字游戏是令系统随机产生一个100以内的正
整数，用户输入一个数对其进行猜测，需要你编写程序自动对其与随机产生的被猜数进行比较，
并提示大了("Toobig”)，还是小了("TD0 small”)，相等表示猜到了。如果猜到，则纪束程序。
程序还要求统计猜的次数，如果1次猜出该数，提示“Bingo!”;如果3次以内猜到该数，
则提示"Lucky You!”;如果超过3次但是在N(>3)次以内(包括第N次)猜到该数，则到达N次之前，
用户输入了一个负数，也输，则提示“GameOver”，并结束程序。如果在提示“GoodGuess!”;
如果超过N次都没有猜至
出"Game Over”，并结束程序。*/
{
	int number,n;
	int cnt = 0;
	int finished = 0;
	int inp;
	scanf("%d %d",&number,&n);
	do{
		scanf("%d",&inp);
		cnt++;
		if(inp<0){
			printf("Game Over\n");
			finished = 1;
		} else if(inp>number){
			printf("Too big\n");
		} else if(inp<number){
			printf("Too small\n");
		}else{
			if(cnt==1){
				printf("Bingo!\n");
			}else if(cnt<=3){
				printf("Lucky You!\n");
			} else{
				printf("Good Guess!\n");
			}
			finished = 1;
		}
		if(cnt==n){
			if(!finished){
				printf("Game Over!\n");
				finished = 1;
				
			}
			
		}
		
		
		
		
	}while(!finished);
	
	
	
	return 0;
}
