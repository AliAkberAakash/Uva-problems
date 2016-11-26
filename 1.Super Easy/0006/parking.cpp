#include<stdio.h>

int main()
{
    int t,i,n,a[100],maxo,mini;

    scanf("%d", &t);

    while(t--)
    {

        maxo=-99999;
        mini=99999;
        scanf("%d", &n);

        for(i=0; i<n; i++)
        {
            scanf("%d", &a[i]);
            if(a[i]>maxo)
                maxo=a[i];
            if(a[i]<mini)
                mini=a[i];
        }

        printf("%d\n", (maxo-mini)*2);
    }

    return 0;
}
