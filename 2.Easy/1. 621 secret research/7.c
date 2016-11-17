#include<stdio.h>

int findMax(int a[], int p)
{
    int max=-999999;

    int i;

    for(i=0; i<p; i++)
    {
        if(a[i]>max)
            max=a[i];
    }

    return max;
}

int findMin(int b[], int q)
{
        int min=999999;

    int i;

    for(i=0; i<q; i++)
    {
        if(b[i]<min)
            min=b[i];
    }

    return min;
}

int main()
{
    int i,j,t,n;

    int maximum, minimum;
    int d[100000];

    scanf("%d", &t);

    while(t--)
    {
        scanf("%d", &n);
        for(i=0; i<n; i++)
            scanf("%d", &d[i]);


    maximum=findMax(d,n);
    minimum=findMin(d,n);

    printf("%d\n", (maximum-minimum)*2);

    }

    return 0;
}
