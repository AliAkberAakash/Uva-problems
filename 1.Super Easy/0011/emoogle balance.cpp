#include<stdio.h>

int main()
{
    int tc,N,a,r,g;

    for(tc=1; tc<=75; tc++)
    {
        scanf("%d", &N);
        if (N==0)   break;

        r=0;
        g=0;

        while(N)
        {
            scanf("%d", &a);

            if(a>=1&&a<=99) r++;
            if (a==0) g++;

            N--;
        }
        printf("Case %d: %d\n", tc, r-g);
    }

}
