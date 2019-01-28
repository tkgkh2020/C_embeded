# include <stdio.h>

void main(void)
{
    char w[100];
    int i;

    printf("文字列を入力してください\n");
    scanf("%s", w);
   
    for(i=0; w[i]!='\0'; i++)
    {
        if(w[i]>='a' && w[i]<='z')
            w[i] = w[i] - 'a' + 'A';
    }

    printf("%s\n", w);

}