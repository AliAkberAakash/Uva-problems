#include<stdio.h>

int main()
{
    int tc,n,t,i;
    long long  int a;
    scanf("%d", &tc);

    while(tc--)
    {
        scanf("%d",&n);

        a=(315*n)+36962;
        a=a/10;
        t=a%10;


        printf("%d\n", abs(t));
    }
    return 0;
}
