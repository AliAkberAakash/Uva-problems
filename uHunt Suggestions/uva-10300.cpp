#include<stdio.h>

int main()
{
    long long int t,f,l,a,e,s;

    scanf("%lld", &t);

    while(t--)
    {
        s=0;
        scanf("%lld", &f);
        while(f--)
        {
            scanf("%lld %lld %lld",&l, &a, &e);
            s=s+(l*e);
        }
        printf("%lld\n",s);

    }

    return 0;
}
