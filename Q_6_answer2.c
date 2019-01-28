/*実行できないエラーが出る．*/

#include <stdio.h>
int main(void)
{
    int n, i;
    　
    printf("数を入力してください->");
    scanf("%d", &n);
    for (i = 0x8000; i; i /= 2) 
    {
        if (n & i) putchar('1');
    　　else putchar('0');
    }
    putchar('\n');
}