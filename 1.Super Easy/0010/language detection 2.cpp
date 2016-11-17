#include<stdio.h>
#include<string.h>

int main()
{
    char S[14];
    int i=1;

    while(gets(S))
    {
        if(!strcmp(S,"HELLO"))
            printf("Case %d: ENGLISH", i++);
        else if(!strcmp(S,"HOLA"))
            printf("Case %d: SPANISH", i++);

        else if(!strcmp(S,"HALLO"))
            printf("Case %d: GERMAN", i++);

        else if(!strcmp(S,"BONJOUR"))
            printf("Case %d: FRENCH", i++);

        else if(!strcmp(S,"CIAO"))
            printf("Case %d: ITALIAN", i++);

        else if(!strcmp(S,"ZDRAVSTVUJTE"))
            printf("Case %d: RUSSIAN", i++);

        else if(!strcmp(S,"#"))
            break;

        else
            printf("UNKNOWN");

        printf("\n");
    }
    return 0;
}
