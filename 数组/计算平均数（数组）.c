#include <stdio.h>

int main()
{
    int cnt;
    double sum = 0; // 使用 double 避免整数除法丢失精度
    
    printf("请输入数字的数量：");
    scanf("%d", &cnt);
    
    if (cnt > 0) 
    {
        int number[cnt]; // C99标准支持变长数组，建议cnt不要太大
        int x;
        int i; 
        
        // 1. 读取数据并存入数组 
		for ( i = 0; i < cnt; i++) 
        {
            scanf("%d", &x);
            number[i] = x; // 正确使用下标 i，从 0 到 cnt-1
            sum += x;
        }
        
        // 2. 计算平均值
        double average = sum / cnt;
        
        // 3. 遍历数组，输出大于平均值的元素
        for ( i = 0; i < cnt; i++) 
        {
            if (number[i] > average) 
            {
                printf("%d ", number[i]);
            }
        }
        printf("\n"); // 输出结束后换行
    } 
    else 
    {
        printf("数量必须大于0\n");
    }
    
    return 0;
}
