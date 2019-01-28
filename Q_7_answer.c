# include <stdio.h>

int main(void)
{
    int n, i, num[100];

    printf("整数を入力してください\n");
    scanf("%d", &n);
    i = 0;
    while(n >= 0)
    {
        num[i] = n;
        i++;
        printf("整数を入力してください\n");
        scanf("%d", &n);
    }

    while (i > 0) 
    {
       i--;
       printf("%d\n", num[i]);
    }

    return 0;
}