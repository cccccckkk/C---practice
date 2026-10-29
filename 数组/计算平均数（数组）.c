#include <stdio.h>

int main() {
    int cnt;
    double sum = 0.0;
    
    printf("请输入数字的数量：");
    scanf("%d", &cnt);
    
    if (cnt > 0) {
        int number[cnt]; // C99 标准支持变长数组
        int x;
        int i;
		 
        // 用 for 循环精确读取 cnt 个数字
        for ( i = 0; i < cnt; i++) {
            scanf("%d", &x);
            number[i] = x; // 从下标 0 开始正序存入
            sum += x;
        }
        
        double average = sum / cnt; // 计算平均值
        
        // 遍历前 cnt 个元素
        for ( i = 0; i < cnt; i++) {
            if (number[i] > average) {
                printf("%d ", number[i]);
            }
        }
        printf("\n");
    }
    
    return 0;
}
