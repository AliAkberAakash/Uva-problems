#include<stdio.h>
#include<string.h>

int main()
{
    char s[100000];
    int c,l,tc;

    scanf("%d", &tc);
    c=getchar();

    while(tc--)
    {
        gets(s);

        l=strlen(s);

        if(!strcmp(s,"1")||!strcmp(s,"4")||!strcmp(s,"78"))
            printf("+\n");
        else if((s[l-2]=='3')&&(s[l-1]=='5'))
            printf("-\n");
        else if((s[0]=='9')&&(s[l-1]=='4'))
            printf("*\n");
        else
            printf("?\n");
    }


    return 0;
}

