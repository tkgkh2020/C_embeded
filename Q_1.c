# include <stdio.h>

int main(void)
{
    float i, c, f;

    printf("インチの値を入力してください\n");
    scanf("%f", &i);

    c = i * 2.54;
    f = i/12;
    printf("%fセンチ\n%fフィート\n", c, f);

    return 0;
}
