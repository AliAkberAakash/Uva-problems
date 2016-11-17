#include<stdio.h>
#include<string.h>

int main()
{
    int t,i,j,k,d,o;
    char b[1000000];
    int c[10];

    scanf("%d", &o);

    while(o--)
   {
     for(i=0; i<10; i++)
       c[i]=0;

    scanf("%d", &t);

    j=0;
    for(i=1; i<=t; i++)
    {
        if(i<10)
        {
            b[j]=i+48;
            j++;
        }
        else
        {
            k=i;
            while(k)
            {
                d=k%10;
                k=k/10;
                b[j]=d+48;
                j++;
            }
        }
    }

    b[j]='\0';

    for(i=0; i<strlen(b); i++)
    {
        for(j=0; j<10; j++)
        {
            if(b[i]==j+48)
                c[j]++;
        }
    }

    for(j=0; j<10; j++)
        {
            printf("%d", c[j]);
            if(j!=9)
                printf(" ");
        }

    printf("\n");

   }

    return 0;
}
