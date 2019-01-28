# include <stdio.h>

int main(void)
{
    int a;

    printf("整数を入力してください\n");
    scanf("%d", &a);

    if(a%2==0)
    {
        printf("%dは偶数\n",a);
    }

    else if(a%2==1)
    {
        printf("%dは奇数\n",a);
    }

    return 0;
}