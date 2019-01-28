# include <stdio.h>

int main(void)
{
    int a, b, c;

    printf("3つの整数を入力してください\n");
    scanf("%d%d%d", &a,&b,&c);

    if(a>b & a>c)
    {
        printf("一番大きいのは%d\n",a);
    }

    else if(b>a & b>c)
    {
        printf("一番大きいのは%d\n",b);
    }

    else if(c>a & c>b)
    {
        printf("一番大きいのは%d\n",c);
    }

    return 0;
}