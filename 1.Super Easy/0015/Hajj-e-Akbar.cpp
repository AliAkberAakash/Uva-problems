#include<stdio.h>
#include<string.h>
int main()
{
    char inp[1000];
    int t=1;

    while(gets(inp))
    {
        if(!strcmp(inp, "*"))
            break;
        else if(!strcmp(inp,"Hajj"))
            printf("Case %d: Hajj-e-Akbar\n", t++);
        else
            printf("Case %d: Hajj-e-Asghar\n", t++);
    }

    return 0;

}
