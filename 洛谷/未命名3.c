
/*出租车计价：某城市普通出租车收费标准如下：起步里程为 3 公里，起步费 10 元；超起
步里程后 10 公里内，每公里 2 元；超过10公里以上的部分加收 50%的回空补贴费，即每公
里3元；营运过程中，因路阻及乘客要求临时停车的，按每 5分钟 2 元计收（不足 5分钟 则
不收费）。运价计费尾数四舍五入，保留到元。编写程序，输入行驶里程（公里）与等待 时间
（分钟），计算并输出乘客应支付的车费（元）。*/
#include<stdio.h>
int main()
{
	int time=0,amount=0;
	double price = 0;
	scanf("%d %d",&amount,&time);
	if(amount<=10){
		price = 2*amount;
	}else {
		price = 2*10 +(amount - 10)*3;
	}
	
	double num= time/5;
	if(time>=5){
		 price += num*2.0;
	}
	
	printf("乘客应支付的车费%f",price);
	
	return 0;
}

