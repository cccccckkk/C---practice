#include<stdio.h>
int max(int a,int b){
	int ret; 
	if(a>b){
	//	return a;
	ret = a;	
	}else{
		//return b;
		ret = b;
	}
	return ret; //符合单一出口 
}

int main(){
	int a,b,c;
	a = 5;
	b = 6;
	c = max(10,12);
	c = max(a,b);
	c = max(c,23);
	c = max(max(c,a),5);
	printf("%d\n",max(a,b));
	max(12,13);
	
	
	return 0;
	
	
} 
