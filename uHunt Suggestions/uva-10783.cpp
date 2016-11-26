#include<stdio.h>

int main()
{
    int a,b,i,sum,j,t;

    scanf("%d", &t);

    for(i=1; i<=t; i++)
    {
        sum=0;
        scanf("%d", &a);
        scanf("%d", &b);

        for(j=a; j<=b; j++)
        {
            if(j%2)
                sum+=j;
        }

        printf("Case %d: %d\n", i, sum);
    }

    return 0;
}
