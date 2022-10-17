#include<stdio.h>
#include<string.h>

int main()
{
    char str1[100000];
    int cnt = 0;

    fgets(str1,sizeof(str1),stdin);

    //printf("%d",str1[3]);

    while(cnt<strlen(str1))
    {
        printf("%c",str1[0+cnt]);
        cnt++;
    }

    printf("%d",cnt-1);

    return 0;
}