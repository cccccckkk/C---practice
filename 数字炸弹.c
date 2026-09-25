#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int secret, guess, attempts;
    char playAgain;

    // 初始化随机种子
    srand((unsigned)time(NULL));

    printf("===== 数字炸弹 =====\n");
    printf("我已经想好了一个 1~100 之间的数字，你猜猜看。\n");

    do {
        secret = rand() % 100 + 1;  // 生成 1~100 的随机数
        attempts = 0;

        do {
            printf("请输入你的猜测: ");
            if (scanf("%d", &guess) != 1) {   // 处理非数字输入
                printf("输入无效，请输入一个整数。\n");
                while (getchar() != '\n');    // 清空输入缓冲区
                continue;
            }

            attempts++;

            if (guess > secret) {
                printf("太大了！再试试。\n");
            } else if (guess < secret) {
                printf("太小了！再试试。\n");
            } else {
                printf("**************************\n");
                printf("  BOOM！炸弹爆炸了！\n");
                printf("  你猜中了数字 %d\n", secret);
                printf("  你一共猜了 %d 次\n", attempts);
                printf("**************************\n");
            }
        } while (guess != secret);

        printf("\n再玩一局？(y/n): ");
        scanf(" %c", &playAgain);   // 空格跳过之前的换行符
        while (getchar() != '\n');  // 清空缓冲区

    } while (playAgain == 'y' || playAgain == 'Y');

    printf("游戏结束，再见！\n");
    return 0;
}
