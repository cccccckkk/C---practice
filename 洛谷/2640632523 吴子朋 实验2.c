#include <stdio.h>

int main(void)
{
    for (;;)
    {
        int choice, year;
        printf("input a number: ");
        scanf("%d", &choice);

        int mile, time;
        double price = 0;
        int cnt = 0, sum = 0;
        int m, n, x;

        switch (choice)
        {
        case 1:
        {
            for (year = 2001; year <= 2100; year++)
            {
                if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
                {
                    printf("%d\n", year);
                }
            }
            break;
        }

        case 2:
        {
            scanf("%d %d", &mile, &time);

            if (mile <= 3)
            {
                price = 10;
            }
            else if (mile <= 10)
            {
                price = 10 + (mile - 3) * 2;
            }
            else
            {
                price = 10 + 7 * 2 + (mile - 10) * 3;
            }

            price += (time / 5) * 2;

            printf("Fare:%d\n", (int)(price + 0.5));
            break;
        }

        case 3:
        {
            scanf("%d %d", &m, &n);

            int i;
            int isprime;

            if (m == 1)
            {
                m = 2;
            }

            for (i = m; i <= n; i++)
            {
                int k;
                isprime = 1;

                for (k = 2; k < i; k++)
                {
                    if (i % k == 0)
                    {
                        isprime = 0;
                        break;
                    }
                }

                if (isprime)
                {
                    sum += i;
                    cnt++;
                }
            }

            printf("cnt=%d sum=%d\n", cnt, sum);
            break;
        }

        case 4:
        {
            scanf("%d", &x);

            int t = x;
            do
            {
                int d = t % 10;
                t /= 10;
                printf("%d ", d);
            } while (t > 0);

            printf("\n");
            break;
        }

        case 5:
        {
            int i;
            printf(" n: ");
            scanf("%d", &n);

            int peaches = 1;

            if (n <= 0)
            {
                printf("n must be a positive integer.\n");
                break;
            }

            for (i = 1; i < n; i++)
            {
                peaches = (peaches + 1) * 2;
            }

            printf("The monkey picked %d peaches on the first day.\n", peaches);
            break;
        }

        default:
            printf("Invalid choice.\n");
            break;
        }
    }

    return 0;
}
