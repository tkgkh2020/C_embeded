# include <stdio.h>

int main(void)
{
    int num, i, a[100];

    printf("10進数の整数を入力してください\n");
    scanf("%d", &num);
    
    for(i = 0; num>0; i++)
    {
        a[i] = num % 2;
        num = num / 2; 
    }

    while(i>0) printf("%d", a[--i]);
    putchar('\n');

    return 0;
}