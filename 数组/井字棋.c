#include<stdio.h>
int main()
{
	const int size = 3;
	int board[size][size];
	int i,j;
	int numofx;
	int numofo;
	int result = -1; //-1：没人赢 1：x赢 0：0赢 
	
	for(i=0;i<size;i++){
		for(j=0;j<size;j++){
			scanf("%d",&board[i][j]);
		}
	}
	//检查行
	
	for(i=0;i<size;i++){
		numofo=numofx=0;
		for(j=0;j<size;j++){
		if(board[i][j]){
			numofx++;
		}	else{
			numofo++;
		}
		}
		if(numofx==size){
			result = 1;
		}else if(numofo==size){
			result = 0;
		}
	} 
	
	//检查列 
	if(result==-1){
		for(j=0;j<size;j++){
		numofo=numofx=0;
		for(i=0;i<size;i++){
		if(board[i][j]){
			numofx++;
		}	else{
			numofo++;
		}
		}
		if(numofx==size){
			result = 1;
		}else if(numofo==size){
			result = 0;
		}
	} 
	} 
	
	
	
	//检查对角线
	if(result==-1){
			numofo=numofx=0;
	for(i=0;i<size;i++){
	 if(board[i][i]==1){
	 	numofx++;
	 }	else{
	 	numofo++;
	 }		
	} 
	if(numofx==size){
		result = 1;
	}else if(numofo==size){
		result = 0;
	}
	}

	if(result==-1){
		numofo=numofx=0;
	for(i=0;i<size;i++){
		if(board[i][size-1-i]==1){
			numofx++;
		}else{
			numofo++;
		}
	}
	if(numofx==size){
		result = 1;
	}else if(numofo==size){
		result = 0;
	}
	}
	if(result==1){
		printf("X win\n");
	}else if(result==0){
		printf("O win\n");
	}else if(result==-1){
		printf("Not eveyone win\n");
	}
	
	
	return 0;
}
