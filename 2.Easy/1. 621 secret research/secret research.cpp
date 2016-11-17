/*
UVA 621, Problem name: Secret research
Solved by: Liverwort
Date: 9/6/2016
*/

#include<stdio.h>
#include<string.h>

int main()
{
    char s[13][10]={"1","4","78","135","435","7835","914","944","9784","1901","1904","19078"}, k[1000],c,p;
    int i,f=1;

    scanf("%d", &i);
    c=getchar();

    while (i--)
    {
        gets(k);

        if(!strcmp(s[0],k)||!strcmp(s[1],k)||!strcmp(s[2],k))
            {
                printf("+\n");
                if(f)
                    p='+';
            }
        else if(!strcmp(s[3],k)||!strcmp(s[4],k)||!strcmp(s[5],k))
            {
                printf("-\n");
                if(f)
                    p='-';
            }
        else if(!strcmp(s[6],k)||!strcmp(s[7],k)||!strcmp(s[8],k))
            {
                printf("*\n");
                if(f)
                    p='*';
            }
        else if(!strcmp(s[9],k)||!strcmp(s[10],k)||!strcmp(s[11],k))
            {
                printf("?\n");
                if(f)
                    p='?';
            }
        else
            printf("%c\n", p);
        f=0;

    }

    return 0;

}
