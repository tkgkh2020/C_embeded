# include <stdio.h>

void main(void)
{
    char w[100], *p;

    printf("文字列を入力してください\n");
    scanf("%s", w);
   
    for(p=w; *p!='\0'; p++)
    {
        if(*p>='a' && *p<='z')
            *p = *p - 'a' + 'A';
    }

    printf("%s\n", w);

}