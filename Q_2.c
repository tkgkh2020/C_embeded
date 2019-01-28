# include <stdio.h>

int main(void)
{
    int m;
    int num1=0, num2=0, num3=0, num4=0, num5=0, num6=0, num7=0, num8=0, num9 = 0;

    printf("金額を入力してください\n");
    scanf("%d", &m);

    if(m>=10000)
    {
        num1 = m/10000;
        m = m - 10000*num1;
    }
    
    if(m >= 5000)
    {
        num2 = m/5000;
        m = m - 5000*num2;
    }
    
    if(m >= 1000)
    {
        num3 = m/1000;
        m = m - 1000*num3;
    }

    if(m >= 500)
    {
        num4 = m/500;
        m = m - 500*num4;
    }

    if(m >= 100)
    {
        num5 = m/100;
        m = m - 100*num5;
    }

    if(m >= 50)
    {
        num6 = m/50;
        m = m - 50*num6;
    }

    if(m >= 10)
    {
        num7 = m/10;
        m = m - 10*num7;
    }

    if(m >= 5)
    {
        num8 = m/5;
        m = m - 5*num8;
    }

    if(m >= 1)
    {
        num9 = m/1;
        m = m - 1*num9;
    }

    printf("10000円が%d枚\n", num1);
    printf("5000円が%d枚\n", num2);
    printf("1000円が%d枚\n", num3);
    printf("500円が%d枚\n", num4);
    printf("100円が%d枚\n", num5);
    printf("50円が%d枚\n", num6);
    printf("10円が%d枚\n", num7);
    printf("5円が%d枚\n", num8);
    printf("1円が%d枚\n", num9);

    return 0;
}
