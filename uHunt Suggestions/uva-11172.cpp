/*
* Solution to uva-11172
* Solved by: Ali AKber Aakash
* Email: cedward318@gmail.com or ali852609@gmail.com
*/

#include<stdio.h>

int main()
{
    int t;

    long long int a,b;

    scanf("%d", &t);

    while(t--)
    {
        scanf("%lld %lld", &a, &b);

        if(a>b)
            printf(">\n");
        else if(a<b)
            printf("<\n");
        else
            printf("=\n");
    }


    return 0;
}
