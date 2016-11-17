#include<stdio.h>

int main()
{
    long int a,b,c;
    int i,tc;

    scanf("%d", &tc);

    for(i=1; i<=tc; i++)
    {
        scanf("%ld %ld %ld", &a, &b, &c);
        if((a>b&&a<c)||(a<b && a>c))
            printf("Case %d: %d", i, a);

        if((b>a&&b<c)||(b<a && b>c))
            printf("Case %d: %d", i, b);

        if((c>b&&c<a)||(c<b && c>a))
            printf("Case %d: %d", i, c);

        printf("\n");
    }

    return 0;

}
