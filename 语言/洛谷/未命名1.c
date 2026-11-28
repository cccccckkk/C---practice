/*(3)
统计素数并求和：输入两个正整数m和n(1m<n<500)，统计给定整数m和n区间
内素数的个数并对它们求和。*/
#include<stdio.h>
int main(void)
{
	int sum = 0;
	int cnt = 0;
	int m, n;
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

	printf("素数的个数%d 总共%d", cnt, sum);


	return 0;
}
