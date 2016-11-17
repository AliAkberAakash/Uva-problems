#include<stdio.h>

int main()
{
    int t;
    long long int a,b;

    scanf("%d", &t);
    while(t)
    {
        scanf("%lld %lld", &a, &b);
        if(a>b) printf(">");
        else if(a<b)    printf("<");
        else    printf("=");

        printf("\n");

        t--;
    }
}
