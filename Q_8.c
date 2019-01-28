# include <stdio.h>

int main(void)
{
    int n, num[100], *p;

    printf("整数を入力してください\n");
    scanf("%d", &n);
    p = num;
    while(n >= 0)
    {
        *p = n;
        p++;
        printf("整数を入力してください\n");
        scanf("%d", &n);
    }

    while (p > num) 
    {
       p--;
       printf("%d\n", *p);
    }

    return 0;
}