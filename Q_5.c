# include <stdio.h>

int main(void)
{
    int a;

    printf("月を入力してください\n");
    scanf("%d月", &a);

    if(a==3 || a==4 || a==5 )
    {
        printf("%d月は春\n",a);
    }

    else if(a==6 || a==7 || a==8 )
    {
        printf("%d月は夏\n",a);
    }

    else if(a==9 || a==10 || a==11 )
    {
        printf("%d月は秋\n",a);
    }

    else if(a==12 || a==1 || a==2 )
    {
        printf("%d月は冬\n",a);
    }

    return 0;
}