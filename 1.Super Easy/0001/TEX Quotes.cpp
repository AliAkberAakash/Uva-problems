
#include<stdio.h>
#include<string.h>

int main()
{
    char s[10000];

    int i,c=0,k=0;

    while(gets(s))
    {

        if(k)
        printf("\n");
        k=1;

        for(i=0; i<strlen(s); i++)
        {
            if(s[i]=='"')
            {
                c++;
                if(c%2)
                    printf("``");
                else
                    printf("''");
            }
            else
                printf("%c", s[i]);
        }

    }

    return 0;
}

