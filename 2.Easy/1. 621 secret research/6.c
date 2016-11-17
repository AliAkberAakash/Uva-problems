#include<stdio.h>
#include<string.h>

int checkPrime(int x)
{
    int i,k=1;

    if(x==1)
        k=1;

    for(i=2; i<x; i++)
    {
        if(x%i==0)
        {
            k=0;
            break;
        }
    }

    return k;
}

int main()
{
    int i,j,n;
    char s[100000];

    while(gets(s))
    {
        n=0;

        for(i=0; i<strlen(s); i++)
        {
            if(s[i]>96)
                n=n+s[i]-96;
            else
                n=n+s[i]-38;
        }

        if(checkPrime(n))
            printf("It is a prime word.\n");
        else
            printf("It is not a prime word.\n");

    }

    return 0;

}
