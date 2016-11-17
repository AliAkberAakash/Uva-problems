#include<stdio.h>
#include<string.h>

int findMax(int a[])
{
    int max=-1111111;
    int p;

    for(p=0; p<257; p++)
    {
        if(a[p]>max)
            max=a[p];
    }

    return max;
}

int main()
{
    char a[1000000];
    int c[256], l;
    int i,j;

    gets(a);

    for(i=0; i<256; i++)
        c[i]=0;

    for(i=0; i<strlen(a); i++)
    {
        for(j=0; j<257; j++)
        {
            if(a[i]==j)
                c[j]++;
        }
    }

    for(j=0; j<257; j++)
        {
            if(c[j])
            printf("%d ", c[j]);
        }

//    l=findMax(c);
//
//    printf("%d\n", l);

    return 0;
}
