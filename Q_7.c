# include <stdio.h>

int main(void)
{
    int num[100], i, count = 0;

    printf("整数を繰り返し入力してください\n");
    for(i=1; i<20000; i++)
    {
        scanf("%d", &num[i]);

        count = count + 1;

        if(num[i]>0)
        {
            continue;
        }

        else if(num[i]<0)
        {
            break;
        }

    }

    for(i=count; i<0; i--){printf("%d", num[i]);} 

    return 0;
}