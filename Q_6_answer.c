/*16進数表示*/
# include <stdio.h>

int main(void)
{
    int num, i, a[100];

    printf("10進数の整数を入力してください\n");
    scanf("%d", &num);
    printf("%x", num);
    putchar('\n');
    return 0;
}