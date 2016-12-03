#include<stdio.h>

#define queSize 10000000

int main()
{
    long long int i,j,k,t,x,y,a[queSize],b[queSize],counter;

    while(1)
    {
        counter=0;
        scanf("%lld %lld", &x, &y);
        if(!x&&!y)
            break;

        for(i=0; i<x; i++)
            scanf("%lld", &a[i]);

        for(i=0; i<y; i++)
            scanf("%lld", &b[i]);

        k=0;
        j=0;
        while(1)
        {
            if(a[j]==b[k])
                {
                    counter++;
                    j++;
                    k++;
                }
            else if(a[j]>b[k])
                k++;
            else if(a[j]<b[k])
                j++;
            if(j>=x||k>=y)
            break;
        }

        printf("%lld\n", counter);
    }

    return 0;
}
