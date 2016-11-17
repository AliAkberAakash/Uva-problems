#include<stdio.h>

int main()
{
    int t,n;
    long long int m;

    scanf("%d", &t);
    while(t)
    {
        scanf("%d %lld", &n, &m);

        printf("%d\n", (n/3)*(m/3));

        t--;
    }
}
