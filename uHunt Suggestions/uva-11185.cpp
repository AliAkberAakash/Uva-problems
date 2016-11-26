#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define SIZE 100000001

int main()
{
    long long int i,n,d;

    while(scanf("%lld", &n)!=-1)
    {
        char* s=(char*) malloc(sizeof(char)*SIZE);

        i=0;

        if(n==0)
        {
            s[i]='0';
            i++;
        }

        while(n>0)
        {
            d=n%3;
            n=n/3;
            s[i]=(char) (d+48);
            i++;
        }

        s[i]='\0';

        for(i=strlen(s)-1; i>=0; i--)
            printf("%c", s[i]);

        printf("\n");
        free(s);
    }
    return 0;
}
